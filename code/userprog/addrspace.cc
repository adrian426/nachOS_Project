// addrspace.cc
//	Routines to manage address spaces (executing user programs).
//
//	In order to run a user program, you must:
//
//	1. link with the -N -T 0 option
//	2. run coff2noff to convert the object file to Nachos format
//		(Nachos object code format is essentially just a simpler
//		version of the UNIX executable object code format)
//	3. load the NOFF file into the Nachos file system
//		(if you haven't implemented the file system yet, you
//		don't need to do this last step)
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include <iostream>
#include "system.h"
#include "addrspace.h"
#include "noff.h"
int sgt = 1;
TranslationEntry fifoSC[TLBSize];

//----------------------------------------------------------------------
// SwapHeader
// 	Do little endian to big endian conversion on the bytes in the
//	object file header, in case the file was generated on a little
//	endian machine, and we're now running on a big endian machine.
//----------------------------------------------------------------------

static void
SwapHeader(NoffHeader *noffH) {
    noffH->noffMagic = WordToHost(noffH->noffMagic);
    noffH->code.size = WordToHost(noffH->code.size);
    noffH->code.virtualAddr = WordToHost(noffH->code.virtualAddr);
    noffH->code.inFileAddr = WordToHost(noffH->code.inFileAddr);
    noffH->initData.size = WordToHost(noffH->initData.size);
    noffH->initData.virtualAddr = WordToHost(noffH->initData.virtualAddr);
    noffH->initData.inFileAddr = WordToHost(noffH->initData.inFileAddr);
    noffH->uninitData.size = WordToHost(noffH->uninitData.size);
    noffH->uninitData.virtualAddr = WordToHost(noffH->uninitData.virtualAddr);
    noffH->uninitData.inFileAddr = WordToHost(noffH->uninitData.inFileAddr);
}

//----------------------------------------------------------------------
// AddrSpace::AddrSpace
// 	Create an address space to run a user program.
//	Load the program from a file "executable", and set everything
//	up so that we can start executing user instructions.
//
//	Assumes that the object code file is in NOFF format.
//
//	First, set up the translation from program memory to physical
//	memory.  For now, this is really simple (1:1), since we are
//	only uniprogramming, and we have a single unsegmented page table
//
//	"executable" is the file containing the object code to load into memory
//----------------------------------------------------------------------

AddrSpace::AddrSpace(OpenFile *executable) {
    fileName = new char[100];

    NoffHeader noffH;
    unsigned int i, size;

//    for(int i = 0; i < 12; i += 2){
//        memoryPagesMap->Mark(i);
//    }

    executable->ReadAt((char *) &noffH, sizeof(noffH), 0);
    if ((noffH.noffMagic != NOFFMAGIC) &&
        (WordToHost(noffH.noffMagic) == NOFFMAGIC))
        SwapHeader(&noffH);
    ASSERT(noffH.noffMagic == NOFFMAGIC);

    // how big is address space?
    size = noffH.code.size + noffH.initData.size + noffH.uninitData.size
           + UserStackSize;    // we need to increase the size
    // to leave room for the stack
    numPages = divRoundUp(size, PageSize);
    size = numPages * PageSize;

    //ASSERT(numPages <= NumPhysmyPages);
    //ASSERT(numPages <= memoryPagesMap->NumClear());
    // check we're not trying
    // to run anything too big --
    // at least until we have
    // virtual memory
    unsigned int numCodePages = divRoundUp(noffH.code.size, PageSize);//Calcula el número de páginas de código.
    unsigned int numDataPages = divRoundUp(noffH.initData.size, PageSize); //Calcula el número de paginas de datos.


    DEBUG('a', "Initializing address space, num pages %d, size %d\n",
          numPages, size);
// first, set up the translation
    pageTable = new TranslationEntry[numPages];
    for (i = 0; i < numPages; i++) {
        pageTable[i].virtualPage = i;

#ifdef VM
        pageTable[i].physicalPage = NULL; //No está en memoria aún
        pageTable[i].valid = false;
#else
        pageTable[i].physicalPage = memoryPagesMap->Find();
        bzero(machine->mainMemory + pageTable[i].physicalPage * PageSize, PageSize); //Zero out that space in memory
        pageTable[i].valid = true;
#endif
        pageTable[i].use = false;
        pageTable[i].dirty = false;
        if (i < numCodePages) {
            pageTable[i].readOnly = false;//true;
        } else {
            pageTable[i].readOnly = false;
        }
    }

#ifndef VM
    if (noffH.code.size > 0) {
        //Buscar en la tabla el espacio fisico correspondiente al espacio virtual
        for (int y = 0; y < numCodePages; y++) {
            DEBUG('a', "Initializing code segment, at 0x%x, size %d\n",
                  noffH.code.virtualAddr, noffH.code.size);
            executable->ReadAt(&machine->mainMemory[pageTable[y].physicalPage * PageSize],
                               PageSize, noffH.code.inFileAddr + y * PageSize);
        }
    }

    if (noffH.initData.size > 0) {
        for (int y = 0; y < numDataPages; y++) {
            DEBUG('a', "Initializing data segment, at 0x%x, size %d\n",
                  noffH.initData.virtualAddr, noffH.initData.size);
            executable->ReadAt(&machine->mainMemory[pageTable[y].physicalPage * PageSize],
                               PageSize, noffH.code.inFileAddr + y * PageSize);

        }
    }
    state = new int[NumTotalRegs + 4];
#endif
}

AddrSpace::AddrSpace(AddrSpace *space) { //Constructor por copia
    ASSERT(UserStackSize / PageSize <= memoryPagesMap->NumClear()); //Revisa que haya campo para otro stack
    this->pageTable = new TranslationEntry[numPages]; //Nuevo pageTable
    this->numPages = space->numPages; //Misma cantidad de páginas
    state = new int[NumTotalRegs + 4];
    unsigned int stackPages = divRoundUp(UserStackSize, PageSize);

    for (unsigned int i = 0; i < numPages - stackPages; i++) { //Copia todo menos el stack
        this->pageTable[i].virtualPage = i;
        this->pageTable[i].physicalPage = space->pageTable[i].physicalPage;
        this->pageTable[i].valid = space->pageTable[i].valid;
        this->pageTable[i].use = space->pageTable[i].use;
        this->pageTable[i].dirty = space->pageTable[i].dirty;
        this->pageTable[i].readOnly = space->pageTable[i].readOnly;
    }
    for (unsigned int i = (numPages - stackPages); i < numPages; i++) { //Encuentra campo para el stack
        this->pageTable[i].virtualPage = i;    // for now, virtual page # = phys page #
        this->pageTable[i].physicalPage = memoryPagesMap->Find();
        //bzero(machine->mainMemory+pageTable[i].physicalPage*PageSize, PageSize);
        this->pageTable[i].valid = true;
        this->pageTable[i].use = false;
        this->pageTable[i].dirty = false;
        this->pageTable[i].readOnly = false;
    }
}

//----------------------------------------------------------------------
// AddrSpace::~AddrSpace
// 	Dealloate an address space.  Nothing for now!
//----------------------------------------------------------------------

AddrSpace::~AddrSpace() {
    for (int i = 0; i < numPages; ++i) {
        if(pageTable[i].valid){
            memoryPagesMap->Clear(pageTable[i].physicalPage); //Libera las páginas que tenía ocupadas.
        }
    }
    delete pageTable;
}

//----------------------------------------------------------------------
// AddrSpace::InitRegisters
// 	Set the initial values for the user-level register set.
//
// 	We write these directly into the "machine" registers, so
//	that we can immediately jump to user code.  Note that these
//	will be saved/restored into the currentThread->userRegisters
//	when this thread is context switched out.
//----------------------------------------------------------------------

void
AddrSpace::InitRegisters() {
    int i;

    for (i = 0; i < NumTotalRegs; i++)
        machine->WriteRegister(i, 0);

    // Initial program counter -- must be location of "Start"
    machine->WriteRegister(PCReg, 0);

    // Need to also tell MIPS where next instruction is, because
    // of branch delay possibility
    machine->WriteRegister(NextPCReg, 4);

    // Set the stack register to the end of the address space, where we
    // allocated the stack; but subtract off a bit, to make sure we don't
    // accidentally reference off the end!
    machine->WriteRegister(StackReg, numPages * PageSize - 16);
    DEBUG('a', "Initializing stack register to %d\n", numPages * PageSize - 16);
}

//----------------------------------------------------------------------
// AddrSpace::SaveState
// 	On a context switch, save any machine state, specific
//	to this address space, that needs saving.
//
//	For now, nothing!
//----------------------------------------------------------------------

void AddrSpace::SaveState() {
#ifdef VM
    for(int i = 0; i < TLBSize; ++i){
        int virtualPage = machine->tlb[i].virtualPage;
        bool use = machine->tlb[i].use;
        bool dirty = machine->tlb[i].dirty;

        this->pageTable[virtualPage].use = use;
        this->pageTable[virtualPage].dirty = dirty;

        machine->tlb[i].valid = false;
        memoryPagesMap->Clear(this->pageTable[virtualPage].physicalPage); //Libera el campo en memoria
    }
#endif
}

//----------------------------------------------------------------------
// AddrSpace::RestoreState
// 	On a context switch, restore the machine state so that
//	this address space can run.
//
//      For now, tell the machine where to find the page table.
//----------------------------------------------------------------------

void AddrSpace::RestoreState() {
#ifndef VM
    machine->pageTable = pageTable;
    machine->pageTableSize = numPages;
#else
    for(int i = 0; i < TLBSize; ++i){
        machine->tlb[i].valid = false;
    }
#endif
}

bool AddrSpace::getValid(int virtualPage) {
    return this->pageTable[virtualPage].valid;
}

#ifdef VM
void AddrSpace::setFileName(const char *name) {
    strcpy(fileName, name);
}

void AddrSpace::liberarFrame() { //Libero un frame utilizando el algoritmo de second chance.
    TranslationEntry* entryActual = nullptr;
    int paginaFisica = -1;
    bool encontrada = false;

    while(!encontrada){
        if(memoryPagesMap->Test(victimaSwap)){ //Double check para ver que no este revisando un free frame, aunque no deberian haber free frames
            entryActual = &tpi[victimaSwap].pageTablePtr[tpi[victimaSwap].paginaVirtual];

            if(entryActual->use){ //Use = 1. Cambiar use = 0;
                entryActual->use = false;
            }else{ //Use = 0. Encontre la victima
                encontrada = true;
                paginaFisica = victimaSwap;
            }
        }
        victimaSwap = (victimaSwap+1)%NumPhysPages;
    }

    //Reviso si esta página está en el tlb y en ese caso actualizo.
    for(int i = 0; i < TLBSize; ++i){
        if(machine->tlb[i].valid && machine->tlb[i].physicalPage == entryActual->physicalPage){
            machine->tlb[i].valid = false;
            entryActual->use = machine->tlb[i].use;
            entryActual->dirty = machine->tlb[i].dirty;
        }
    }

    if(entryActual->dirty){//Si está sucia, la meto al swap.
        int paginaEnSwap = swapMap->Find(); //Busco un espacio en el swap.

        if(-1 != paginaEnSwap){ //Si encontré espacio en el swap
            entryActual->physicalPage = paginaEnSwap; //Asigno a la pagina fisica la pagina encontrada en el swap.
            this->pageTable[entryActual->virtualPage].physicalPage = paginaEnSwap; //Me aseguro que se actualice el page table

            OpenFile* swapFile = fileSystem->Open("SWAP");

            if(swapFile != NULL){
                swapFile->WriteAt((&machine->mainMemory[paginaFisica*PageSize]),PageSize, paginaEnSwap*PageSize); //Escribo la pagina en el swap.
            }else{
                printf("No se pudo abrir el SWAP FILE\n");
                delete swapFile;
                ASSERT(false);
            }
            memoryPagesMap->Clear(paginaFisica); //Libero la pagina de memoria.
            delete swapFile;

        }else{
            //Swap lleno, no se que hacer
            printf("SWAP FILE LLENO\n");
            ASSERT(false);
        }
    }else{ //Solo habilito el campo en memoria
        memoryPagesMap->Clear(paginaFisica);
    }
    entryActual->valid = false; //Ya no esta valida.
    this->pageTable[entryActual->virtualPage].valid = false;
}

void AddrSpace::traerPaginaAMemoria(int vpn) {
    bool valid = this->pageTable[vpn].valid;
    bool dirty = this->pageTable[vpn].dirty;

    if(!valid && !dirty){ //Debo traer del archivo, o asignar una pagina nueva si es datos no ini o stack.

        this->traerPaginaDeArchivo(vpn);

    }else if(!valid && dirty){ //Está en el swap file

        this->traerPaginaDeSwap(vpn);

    }else{ //(valid && !dirty) || (valid && dirty) En estos dos casos, la página está en memoria, solo actualizo tlb

        this->actualizarTLB(vpn);

    }
}

void AddrSpace::traerPaginaDeArchivo(int vpn) {

    if(memoryPagesMap->NumClear() == 0){ //Hay que liberar espacio (mandar una victima al swap).
        this->liberarFrame();
    }

    OpenFile* executable = fileSystem->Open(fileName);

    if(executable != NULL) {
        NoffHeader noffH;
        executable->ReadAt((char *) &noffH, sizeof(noffH), 0);
        if ((noffH.noffMagic != NOFFMAGIC) &&
            (WordToHost(noffH.noffMagic) == NOFFMAGIC))
            SwapHeader(&noffH);
        ASSERT(noffH.noffMagic == NOFFMAGIC);

        int tamArchivo = noffH.code.size + noffH.initData.size; //Tamaño del archivo sin el header
        int cantPagsEnArchivo = divRoundUp(tamArchivo, PageSize); //Cantidad de páginas que están en archivo.

        int freeFrame = memoryPagesMap->Find();

        this->pageTable[vpn].physicalPage = freeFrame; //Escribo en el pageTable la página física correspondiente
        tpi[freeFrame].pageTablePtr = this->pageTable; //Asigno lo que corresponde a la tabla de paginas invertidas.
        tpi[freeFrame].paginaVirtual = vpn;

        if(vpn < cantPagsEnArchivo){ //Si la página está en archivo
            //Leo (escribo en memoria) la página virtual solicitada
            executable->ReadAt(&machine->mainMemory[freeFrame*PageSize],
                               PageSize, noffH.code.inFileAddr + vpn * PageSize);
        }else{ //Es de uninit data o de la pila, asigno espacio vacío
            bzero(machine->mainMemory+pageTable[vpn].physicalPage*PageSize, PageSize);
        }
        this->pageTable[vpn].valid = true;
        //Inserto en el siguiente campo libre del tlb esta página.

        this->actualizarTLB(vpn);
    }else{
        printf("Unable to open file %s\n", fileName);
        delete executable;
        ASSERT(false);
    }

    delete executable;
}

void AddrSpace::traerPaginaDeSwap(int vpn) {

    if(memoryPagesMap->NumClear() == 0){ //Hay que liberar espacio (mandar una victima al swap).
        this->liberarFrame();
    }

    int pagEnSwap = this->pageTable[vpn].physicalPage;
    int freeFrame = memoryPagesMap->Find();

    OpenFile* swapFile = fileSystem->Open("SWAP");

    if(swapFile != NULL){
        swapFile->ReadAt(&machine->mainMemory[freeFrame * PageSize],PageSize, pagEnSwap * PageSize);
        swapMap->Clear(pagEnSwap); //Libero el espacio en el swap
    }else{
        printf("No se pudo abrir el SWAP FILE\n");
        ASSERT(false);
    }

    this->pageTable[vpn].valid = true; //Ahora esta página es válida
    this->pageTable[vpn].physicalPage = freeFrame; //La página física corresponde al free frame recién encontrado

    tpi[freeFrame].pageTablePtr = this->pageTable; //La tabla de paginas invertidas en este campo apunta a este page table
    tpi[freeFrame].paginaVirtual = vpn; //Y a esta página lógica



    this->actualizarTLB(vpn); //Actualizo el tlb con esta página que acaba de llegar.
}

void AddrSpace::calcularSigLibreTLB(int vpn){
    //Por ahora lo calcula con fifo
    /*int sigLibre = (siguienteLibreTLB+1)%TLBSize;
    siguienteLibreTLB = sigLibre;*/

    if(tlbMap->NumClear() == 0){ //Solo si el tlb está lleno.
      int victima = -1;
      int prioridad;
      bool encontrado = false;
      for(int index = 0; index < TLBSize; index++){
        prioridad = machine->age[index];
        if(machine->tlb[prioridad].use){
          machine->tlb[prioridad].use = false;
        } else {
          victima = prioridad;
          prioridad = index;
          index = TLBSize;
        }
      }
      if(victima == -1){
        victima = machine->age[0];
        prioridad = 0;
      }

      for(int index = prioridad+1; index < TLBSize; index++){
        int tmp = machine->age[index-1];
        machine->age[index-1] = machine->age[index];
        machine->age[index] = tmp;
      }
    }else{
      int j = 0;
      while(machine->age[j] != -1) j++;
        siguienteLibreTLB = tlbMap->Find();
        machine->age[j] = siguienteLibreTLB;

    }
    this->estadoTLB(vpn);
}

void AddrSpace::estadoTLB(int vpn){
  cout<<"Entra: "<<vpn<<"\n";
  cout<<0<<" Usos: "<<machine->tlb[0].use<<" Tiene:"<<machine->tlb[0].virtualPage<<"\n";
  cout<<1<<" Usos: "<<machine->tlb[1].use<<" Tiene:"<<machine->tlb[1].virtualPage<<"\n";
  cout<<2<<" Usos: "<<machine->tlb[2].use<<" Tiene:"<<machine->tlb[2].virtualPage<<"\n";
  cout<<3<<" Usos: "<<machine->tlb[3].use<<" Tiene:"<<machine->tlb[3].virtualPage<<"\n";
  cout<<"Current index: "<<siguienteLibreTLB<<", Next Index: "<<sgt<<"\n";
}

void AddrSpace::clearReferences(){
  for(int i = 0; i<TLBSize; i++){
    machine->tlb[i].use = false;
    machine->references[i] = false;
  }
}

void AddrSpace::actualizarTLB(int vpn) {
    //Actualizo la page table de la pagina saliente con los cambios que se hicieron en el TLB
    this->pageTable[machine->tlb[siguienteLibreTLB].virtualPage].use = machine->tlb[siguienteLibreTLB].use;
    this->pageTable[machine->tlb[siguienteLibreTLB].virtualPage].dirty = machine->tlb[siguienteLibreTLB].dirty;

    //Actualizo la entrada del TLB con el entry actual
    machine->tlb[siguienteLibreTLB].virtualPage     = this->pageTable[vpn].virtualPage;
    machine->tlb[siguienteLibreTLB].physicalPage    = this->pageTable[vpn].physicalPage;
    machine->tlb[siguienteLibreTLB].valid           = this->pageTable[vpn].valid;
    machine->tlb[siguienteLibreTLB].readOnly        = this->pageTable[vpn].readOnly;
    machine->tlb[siguienteLibreTLB].use             = this->pageTable[vpn].use;
    machine->tlb[siguienteLibreTLB].dirty           = this->pageTable[vpn].dirty;


    this->calcularSigLibreTLB(vpn);
    //this->estadoTLB();
}

#endif
