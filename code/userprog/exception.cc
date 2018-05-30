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
#include <unistd.h>
#include "copyright.h"
#include "system.h"
#include "syscall.h"
#include "../threads/synch.h"
#include "abrirTabla.h"
NachosOpenFilesTable *nachosTable = new NachosOpenFilesTable();
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


void
returnFromSystemCall()
{
  int pc, npc;
  pc = machine->ReadRegister( PCReg );
  npc = machine->ReadRegister( NextPCReg );
  machine->WriteRegister( PrevPCReg, pc );        // PrevPC <- PC
  machine->WriteRegister( PCReg, npc );           // PC <- NextPC
  machine->WriteRegister( NextPCReg, npc + 4 );   // NextPC <- NextPC + 4
}       // returnFromSystemCall

//Begin of exception handling.
void Nachos_Halt(){
 DEBUG('a', "Shutdown, initiated by user program.\n");

 printf("Halting.\n");
 interrupt->Halt();
}

void Nachos_Open(){//Ya funca :D
  char fileName[MAPSIZE];
  int k = 1;
  int i = -1;
  int r4 = machine->ReadRegister(4);
  int rst = -1;
  printf("Opening File.\n");
  do{
    machine->ReadMem(r4,1,& k);
    r4++;
    i++;
    fileName[i] = (char) k;
  }while(k!=0);
  fileName[++i] = '\0';
  int unixID = open(fileName, O_RDWR);
  if(unixID != -1){
    rst = nachosTable->Open(unixID);
  } else {
    close(unixID);
  }
  machine->WriteRegister(2,rst);
  returnFromSystemCall();
}

void Nachos_Write(){//algo malo
  /* System call definition described to user
        void Write(
		char *buffer,	// Register 4
		int size,	// Register 5
		 OpenFileId id	// Register 6
	);
*/
printf("Writing.\n");
  Semaphore *s = new Semaphore("Input Handler",0);
  int size = machine->ReadRegister( 5 );	// Read size to write
  char *buffer = new char[size];
// buffer = Read data from address given by user;
  OpenFileId id = machine->ReadRegister( 6 );	// Read file descriptor
  int r4 = machine->ReadRegister(4);
  int currentChar = 0;
  int index = 0;
  while(index < size){
    machine->ReadMem(r4, 1, &currentChar);
    buffer[index] = (char) currentChar;
    r4++;
    index++;
  }
  buffer[index] = '\0';
  printf("%s",buffer);
// Need a semaphore to synchronize access to console
  s->P();
// Console->P();
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
      if(!nachosTable->isOpened(id)){
        machine->WriteRegister(2,-1);
      }
			// Get the unix handle from our table for open files
      int unixHandle = nachosTable->getUnixHandle(id);
			// Do the write to the already opened Unix file
      write(unixHandle,(void *)  buffer, size);
      int count = 0;
      while(buffer[count] != '\0'){
        count++;
      }
      machine->WriteRegister(2,count);
			// Return the number of chars written to user, via r2
			break;
	}
	// Update simulation stats, see details in Statistics class in machine/stats.cc
  s->V();
  returnFromSystemCall();		// Update the PC registers

}       // Nachos_Write}

void
ExceptionHandler(ExceptionType which)
{
printf("Handling.\n");
    int type = machine->ReadRegister(2);
    if ((which == SyscallException)) {
      switch(type){
        case SC_Halt:
          Nachos_Halt();
         break;
         case SC_Open:
          Nachos_Open();
         break;
         case SC_Write:
          Nachos_Write();
         break;
         case SC_Create:
         returnFromSystemCall();
         break;
         case SC_Read:
         returnFromSystemCall();
         break;
      }
    } else {
	      printf("Unexpected user mode exception %d %d\n", which, type);
	      ASSERT(false);
    }
}
