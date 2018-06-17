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

//----------------------------------------------------------------------
// SwapHeader
// 	Do little endian to big endian conversion on the bytes in the
//	object file header, in case the file was generated on a little
//	endian machine, and we're now running on a big endian machine.
//----------------------------------------------------------------------

static void
SwapHeader (NoffHeader *noffH)
{
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

AddrSpace::AddrSpace(OpenFile *executable)
{
    NoffHeader noffH;
    unsigned int i, size;

    executable->ReadAt((char *)&noffH, sizeof(noffH), 0);
    if ((noffH.noffMagic != NOFFMAGIC) &&
		(WordToHost(noffH.noffMagic) == NOFFMAGIC))
    	SwapHeader(&noffH);
    ASSERT(noffH.noffMagic == NOFFMAGIC);

		// how big is address space?
    size = noffH.code.size + noffH.initData.size + noffH.uninitData.size
			+ UserStackSize;	// we need to increase the size
						// to leave room for the stack
    numPages = divRoundUp(size, PageSize);
    size = numPages * PageSize;

    //ASSERT(numPages <= NumPhysmyPages);
    ASSERT(numPages <= memoryPagesMap->NumClear());
    // check we're not trying
						// to run anything too big --
						// at least until we have
						// virtual memory

    DEBUG('a', "Initializing address space, num pages %d, size %d\n",
					numPages, size);
// first, set up the translation
    pageTable = new TranslationEntry[numPages];
    for (i = 0; i < numPages; i++) {
        pageTable[i].virtualPage = i;
        pageTable[i].physicalPage = memoryPagesMap->Find();
        bzero(machine->mainMemory+pageTable[i].physicalPage*PageSize, PageSize); //Zero out that space in memory
        pageTable[i].valid = true;
        pageTable[i].use = false;
        pageTable[i].dirty = false;
        pageTable[i].readOnly = false;  // if the code segment was entirely on
					// a separate page, we could set its
					// pages to be read-only
    }
		/*
		for(int k = 0; k < 12; k+=2){
			pageTable[k].readOnly = true;
		}
		--ESTE LAS OCUPA--
		Tira exception:
		Unexpected user mode exception 3 512
		Assertion failed: line 268, file "../userprog/exception.cc"
		Aborted (core dumped)

		*/

// zero out the entire address space, to zero the unitialized data segment
// and the stack segment
    //bzero(machine->mainMemory, size);
// then, copy in the code and data segments into memory
    unsigned int numCodePages = divRoundUp(noffH.code.size, PageSize);//Calcula el número de páginas de código.
    if (noffH.code.size > 0){
			//Buscar en la tabla el espacio fisico correspondiente al espacio virtual
			for(int y = 0; y < numCodePages; y++){
	        DEBUG('a', "Initializing code segment, at 0x%x, size %d\n",
				noffH.code.virtualAddr, noffH.code.size);
	        executable->ReadAt(&machine->mainMemory[pageTable[y].physicalPage*PageSize],
				PageSize, noffH.code.inFileAddr+y*PageSize);
			}
    }
    unsigned int numDataPages = divRoundUp(noffH.initData.size, PageSize); //Calcula el número de paginas de datos.
    if (noffH.initData.size > 0) {
			for(int y = 0; y < numDataPages; y++){
	        DEBUG('a', "Initializing data segment, at 0x%x, size %d\n",
				noffH.initData.virtualAddr, noffH.initData.size);
					executable->ReadAt(&machine->mainMemory[pageTable[y].physicalPage*PageSize],
				PageSize, noffH.code.inFileAddr+y*PageSize);

			}
    }
		state = new int[NumTotalRegs + 4];
}

AddrSpace::AddrSpace(AddrSpace *space){ //Constructor por copia
    ASSERT(UserStackSize/PageSize <= memoryPagesMap->NumClear()); //Revisa que haya campo para otro stack
    this->pageTable = new TranslationEntry[numPages]; //Nuevo pageTable
    this->numPages = space->numPages; //Misma cantidad de páginas
		state = new int[NumTotalRegs + 4];
		unsigned int stackPages = divRoundUp(UserStackSize,PageSize);

    for(unsigned int i = 0; i < numPages-stackPages; i++){ //Copia todo menos el stack
        this->pageTable[i].virtualPage = i;
        this->pageTable[i].physicalPage = space->pageTable[i].physicalPage;
        this->pageTable[i].valid = space->pageTable[i].valid;
        this->pageTable[i].use = space->pageTable[i].use;
        this->pageTable[i].dirty = space->pageTable[i].dirty;
        this->pageTable[i].readOnly = space->pageTable[i].readOnly;
    }
    for(unsigned int i = (numPages-stackPages); i < numPages; i++){ //Encuentra campo para el stack
        this->pageTable[i].virtualPage = i;	// for now, virtual page # = phys page #
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

AddrSpace::~AddrSpace()
{
    for(int i = 0; i < numPages; ++i){
        memoryPagesMap->Clear(pageTable[i].physicalPage); //Libera las páginas que tenía ocupadas.
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
AddrSpace::InitRegisters()
{
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

void AddrSpace::SaveState()
{}

//----------------------------------------------------------------------
// AddrSpace::RestoreState
// 	On a context switch, restore the machine state so that
//	this address space can run.
//
//      For now, tell the machine where to find the page table.
//----------------------------------------------------------------------

void AddrSpace::RestoreState()
{
    machine->pageTable = pageTable;
    machine->pageTableSize = numPages;
}
