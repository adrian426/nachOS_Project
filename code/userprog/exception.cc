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
 interrupt->Halt();
}

void Nachos_Open(){
  char fileName[128];
  int k = 1;
  int i = 0;
  int r4 = machine->ReadRegister(4);
  do{
    machine->ReadMem(r4,1,& k);
    r4++;
    fileName[i++] = k;
  }while(k!=0);
  fileName[i] = '\0';
}

void
ExceptionHandler(ExceptionType which)
{
    int type = machine->ReadRegister(2);

    if ((which == SyscallException)) {
      switch(type){
        case SC_Halt:
          Nachos_Halt();
         break;
         case SC_Open:
          Nachos_Open();
         break;
      }
    } else {
	      printf("Unexpected user mode exception %d %d\n", which, type);
	      ASSERT(false);
    }
}
