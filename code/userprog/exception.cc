/*
 * Tarea realizada por Marco Venegas (B67697) y Adrián Alvarez (B40340).
 */


// exception.cc
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "syscall.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
using namespace std;
void StartProcess(const char* p);
//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2.
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions
//	are in machine.h.
//----------------------------------------------------------------------
void NachosHalt(){
    DEBUG('a', "Shutdown, initiated by user program.\n");
    interrupt->Halt();
}

void returnFromSystemCall() {

    int pc, npc;

    pc = machine->ReadRegister(PCReg);
    npc = machine->ReadRegister(NextPCReg);
    machine->WriteRegister(PrevPCReg, pc);        // PrevPC <- PC
    machine->WriteRegister(PCReg, npc);           // PC <- NextPC
    machine->WriteRegister(NextPCReg, npc + 4);   // NextPC <- NextPC + 4

}       // returnFromSystemCall

//Desde una posición dada de memoria, hasta encontrar un '\0'
//convierte lo que se encuentra en esos campos de memoria en una hilera.
char * parToCharPtr(int position){ //Parameter to char ptr
    char * name = new char[128];
    int currentChar = 0;
    int i = 0;
    do{
        machine->ReadMem(position, 1, &currentChar);
        name[i] = (char)currentChar;
        position++;
        i++;
    }while((char)currentChar != '\0');
    return name;
}

void NachosOpen(){
  char* path;
  int rst;
  int r4 = machine->ReadRegister(4);
  path = parToCharPtr(r4); //Lee el nombre del archivo que se quiere abrir
  int unixID = open(path, O_RDWR);
  if(unixID != -1){ //Si se pudo abrir el archivo exitosamente.
    rst = openFilesTable->Open(unixID); //Se ingresa dentro de la tabla de archivos abiertos de NachOS.
  } else {
    close(unixID); //Si no, entonces se cierra el archivo.
  }
  machine->WriteRegister(2,rst); //Se devuelve el resultado.
}

void NachosClose(){
    //OpenFileID id -> Register 4
    int NachosHandle = machine->ReadRegister(4); //Lee el handle de NachOS pasado por parámetro.
    int UnixHandle = openFilesTable->getUnixHandle(NachosHandle); //Consigue el handle de Unix.
    int result = -1;
    if(-1 != UnixHandle){ //Si está abierto.
        result = close(UnixHandle);
        if(-1 != result){
            result = openFilesTable->Close(NachosHandle);
        }
    }
    machine->WriteRegister(2, result); //Se devuelve el resultado.
}

void NachosCreate(){
    char * path = parToCharPtr(machine->ReadRegister(4)); //Lee el nombre de archivo a ser creado.
    int result = creat(path, S_IRWXU); //Crear el archivo con derecho de leer, escribir y ejecutar.
    machine->WriteRegister(2, result); //Devuelva el resultado.
}

void NachosWrite() {                   // System call 7

/* System call definition described to user
        void Write(
		char *buffer,	// Register 4
		int size,	    // Register 5
		 OpenFileId id	// Register 6
	);
*/
    char * buffer = NULL;
    int size = machine->ReadRegister( 5 );	// Read size to write

    // buffer = Read data from address given by user;
    buffer = parToCharPtr(machine->ReadRegister(4));
    OpenFileId id = machine->ReadRegister( 6 );	// Read file descriptor
    // Need a semaphore to synchronize access to console
    ConsoleSem->P(); //Semáforo global.

    switch (id) {
        case  ConsoleInput:	// User could not write to standard input
            machine->WriteRegister( 2, -1 );
            break;
        case  ConsoleOutput:
            buffer[ size ] = 0;
            printf( "%s", buffer );
            break;
        case ConsoleError:	// This trick permits to write integers to console
            printf( "%d\n", machine->ReadRegister( 4 ) );
            break;
        default:	// All other opened files
            // Verify if the file is opened, if not return -1 in r2
            if(openFilesTable->isOpened(id)){
                // Get the unix handle from our table for open files
                int UnixHandle = openFilesTable->getUnixHandle(id);
                // Do the write to the already opened Unix file
                int sizeWritten = static_cast<int>(write(UnixHandle, buffer, size));
                // Return the number of chars written to user, via r2
                machine->WriteRegister(2, sizeWritten);
            }else{
                machine->WriteRegister(2, -1);
            }
            break;

    }

    ConsoleSem->V();

}       // NachosWrite

void NachosRead(){
    /* System call definition described to user
        void Read(
		char *buffer,	// Register 4
		int size,	    // Register 5
		OpenFileId id	// Register 6
	);
*/
    int position = machine->ReadRegister(4);
    int size = machine->ReadRegister( 5 );	// Read size to read
    char buffer[size]; //Buffer to store what is read
    OpenFileId id = machine->ReadRegister( 6 );	// Read file descriptor

    bool standard = (id == ConsoleInput || id == ConsoleOutput || id == ConsoleOutput);
    int sizeRead = -1;

    //Reads and stores into buffer.
    if(standard){
        sizeRead = static_cast<int>(read(openFilesTable->getUnixHandle(id), buffer, size));
    }else{
        if(openFilesTable->isOpened(id)) {
            sizeRead = static_cast<int>(read(openFilesTable->getUnixHandle(id), buffer, size));
        }
    }

    //Si no hubo error.
    if(-1 != sizeRead){
        for(int i = 0; i < size; ++i){
            machine->WriteMem(position++, 1, (int)buffer[i]);
        }
    }
    machine->WriteRegister(2, sizeRead); //Devuelve el número de bytes leidos.
}

//void NachosForkThread( int p ) { // for 32 bits version
void NachosForkThread( void * p ) { // for 64 bits version

    AddrSpace *space;

    space = currentThread->space;
    space->InitRegisters();             // set the initial register values
    space->RestoreState();              // load page table register

// Set the return address for this thread to the same as the main thread
// This will lead this thread to call the exit system call and finish
    machine->WriteRegister( RetAddrReg, 4 );

    machine->WriteRegister( PCReg, (long) p );
    machine->WriteRegister( NextPCReg, (long) p + 4 );

    machine->Run();                     // jump to the user progam
    ASSERT(false);

}

void NachosFork() {			// System call 9
	DEBUG( 'u', "Entering Fork System call\n" );
	// We need to create a new kernel thread to execute the user thread
	Thread * newT = new Thread( "child to execute Fork code" );

	// We need to share the Open File Table structure with this new child

	// Child and father will also share the same address space, except for the stack
	// Text, init data and uninit data are shared, a new stack area must be created
	// for the new child
	// We suggest the use of a new constructor in AddrSpace class,
	// This new constructor will copy the shared segments (space variable) from currentThread, passed
	// as a parameter, and create a new stack for the new child
	newT->space = new AddrSpace( currentThread->space );

	// We (kernel)-Fork to a new method to execute the child code
	// Pass the user routine address, now in register 4, as a parameter
	// Note: in 64 bits register 4 need to be casted to (void *)
  //long r4 = machine->ReadRegister( 4 ) ;
	newT->Fork( NachosForkThread, (void*) machine->ReadRegister( 4 ));

	DEBUG( 'u', "Exiting Fork System call\n" );
}	// Kernel_Fork

void NachosYield(){
    currentThread->Yield(); //Solo hace yield :D
}

void NachosSemCreate(){
    int initVal = machine->ReadRegister(4);
    int id = tablaSemaforos->crearSem(initVal); //Crea un semáforo en la tabla de semáforos.
    machine->WriteRegister(2, id); //Devuelve el id.
}

void NachosSemDestroy(){
    int id = machine->ReadRegister(4);
    int destruido = tablaSemaforos->destruirSem(id); //Si no se pudo destruir porque no existía, devuelve un -1
    machine->WriteRegister(2, destruido);
}

void NachosSemSignal(){
    int resultado = -1;
    int id = machine->ReadRegister(4);
    Semaphore* sem = tablaSemaforos->getSem(id);
    if(sem != nullptr){ //Si el semáforo existe
        sem->V();
        resultado = 1;
    }
    machine->WriteRegister(2, resultado);
}

void NachosSemWait(){
    int resultado = -1;
    int id = machine->ReadRegister(4);
    Semaphore* sem = tablaSemaforos->getSem(id);
    if(sem != nullptr){ //Si el semáforo existe
        sem->P();
        resultado = 1;
    }
    machine->WriteRegister(2, resultado);
}

void NachosExecThread(void *file) {

  //Esto lo saco de progtest.
    currentThread->space = new AddrSpace((OpenFile *) file);

    currentThread->space->InitRegisters();             // set the initial register values
    currentThread->space->RestoreState();              // load page table register

    // Set the return address for this thread to the same as the main thread
    // This will lead this thread to call the exit system call and finish
    machine->WriteRegister(RetAddrReg, 4);

    machine->Run();                     // jump to the user program
    ASSERT(false);
}

void NachosExec() {
    char *buffer = parToCharPtr(machine->ReadRegister(4));
    Thread *t = new Thread("Child Thread");
    t->id = availableThreadIds->Find(); //Le asigna un id al hilo.
    int id = t->id;
    currentThread->addSon(t);
    t->Fork(NachosExecThread, (void *) fileSystem->Open(buffer));
    machine->WriteRegister(2, id); //Devuelvo el id del thread que hizo exec.
}


void NachosExit(){
    int status = machine->ReadRegister(4); //Lee el estado con el que se hizo exit.
    currentThread->setExitStatus(status); //Se setea el estado de salida del thread.
    currentThread->releaseSons(); //Quita a todos los hijos de su lista de hijos y los elimina.
    if(currentThread->space != nullptr){ //Si tiene espacio en memoria.
        delete currentThread->space; //Borre dicho espacio.
        currentThread->space = nullptr;
    }

    if(currentThread->getDad() != nullptr){ //Si tiene padre.
        currentThread->setZombie(true); //Ahora es zombie
        currentThread->getDad()->Signal(); //Le avisa al padre que ya terminó
    }else{
        threadToBeDestroyed = currentThread; //Si no tiene padre y hace exit, este es el hilo que debe ser destruido.
    }
    currentThread->Sleep(); //Zzz
}

//Para este syscall se modificó la clase Thread
void NachosJoin(){
    int id = machine->ReadRegister(4); //Lee el id al que se quiere hacer join
    Thread * child = currentThread->getSon(id); //Consigue el hilo con dicho id.
    if(child != nullptr){ //El hilo debe ser hijo del thread actual.
        while(!child->isZombie()){ //Mientras que no sea zombie
            currentThread->Wait(); //Espere
        }
        int exitStatus = child->getExitStatus(); //Consigue el estado de salida del hijo que hizo exit.
        machine->WriteRegister(2, exitStatus); //Se devuelve el estado.
        currentThread->releaseSon(child); //Se elimina el hijo de la lista de hijos y se elimina.
    }else{
        machine->WriteRegister(2, -1); //Si no existe el thread con ese id se devuelve un -1
    }
}

void ExceptionHandler(ExceptionType which) {
    int type = machine->ReadRegister(2);
    if ((which == SyscallException)) {
        switch (type) {
            case SC_Halt: {
                NachosHalt();
                returnFromSystemCall();
                break;
            }
            case SC_Open: {
                NachosOpen();
                returnFromSystemCall();
                break;
            }
            case SC_Write: {
                NachosWrite();
                returnFromSystemCall();
                break;
            }
            case SC_Read: {
                NachosRead();
                returnFromSystemCall();
                break;
            }
            case SC_Create:{
                NachosCreate();
                returnFromSystemCall();
                break;
            }
            case SC_Close:{
                NachosClose();
                returnFromSystemCall();
                break;
            }
            case SC_Exit:{
                NachosExit();
                //returnFromSystemCall();
                //Despues de exit no se regresa del system call.
                break;
            }
            case SC_Fork:{
              NachosFork();
              returnFromSystemCall();
              break;
            }
            case SC_Yield:{
                NachosYield();
                returnFromSystemCall();
                break;
            }
            case SC_SemCreate:{
                NachosSemCreate();
                returnFromSystemCall();
                break;
            }
            case SC_SemDestroy:{
                NachosSemDestroy();
                returnFromSystemCall();
                break;
            }
            case SC_SemSignal:{
                NachosSemSignal();
                returnFromSystemCall();
                break;
            }
            case SC_SemWait:{
                NachosSemWait();
                returnFromSystemCall();
                break;
            }
            case SC_Exec:{
                NachosExec();
                returnFromSystemCall();
              break;
            }
            case SC_Join:{
                NachosJoin();
                returnFromSystemCall();
            }
        }
    } else {
        printf("Unexpected user mode exception %d %d\n", which, type);
        ASSERT(false);
    }
}
