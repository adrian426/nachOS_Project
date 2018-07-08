// system.h
//	All global variables used in Nachos are defined here.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#ifndef SYSTEM_H
#define SYSTEM_H

#include "copyright.h"
#include "utility.h"
#include "thread.h"
#include "scheduler.h"
#include "interrupt.h"
#include "stats.h"
#include "timer.h"

// Initialization and cleanup routines
extern void Initialize(int argc, char **argv); 	// Initialization,
						// called before anything else
extern void Cleanup();				// Cleanup, called when
						// Nachos is done.

extern Thread *currentThread;			// the thread holding the CPU
extern Thread *threadToBeDestroyed;  		// the thread that just finished
extern Scheduler *scheduler;			// the ready list
extern Interrupt *interrupt;			// interrupt status
extern Statistics *stats;			// performance metrics
extern Timer *timer;				// the hardware alarm clock

#ifdef USER_PROGRAM
#include "machine.h"
extern Machine* machine;	// user program memory and registers
#include "abrirTabla.h"
extern NachosOpenFilesTable* openFilesTable; //Tabla de archivos abiertos de NachOS.
#include "bitmap.h"
extern BitMap* memoryPagesMap; //Mapa de paginas libres en memoria.
extern BitMap* availableThreadIds;
#include "TablaSemaforos.h"
extern TablaSemaforos * tablaSemaforos; //Tabla de semáforos de usuario de NachOS.
#include "synch.h"
extern Semaphore* ConsoleSem; //Semáforo global para utilizar la consola.
#endif

#ifdef VM
struct TPI{
	TranslationEntry * pageTablePtr; //Puntero hacia un page table.
	int paginaVirtual; //Pagina logica de el page table.
};
extern int contadorPageFaults; //Cuenta cuantos page faults ocurrieron.
extern int siguienteLibreTLB; //Indice del siguiente campo libre en el TLB
extern int ultimaVictimaSwap;
extern BitMap* swapMap; //Mapa de paginas libres en el swap.
//extern OpenFile* swapFile; //Archivo de swap.
extern TPI* tpi;
extern bool references[TLBSize];

#endif

#ifdef FILESYS_NEEDED 		// FILESYS or FILESYS_STUB
#include "filesys.h"
extern FileSystem  *fileSystem;
#endif

#ifdef FILESYS
#include "synchdisk.h"
extern SynchDisk   *synchDisk;
#endif

#ifdef NETWORK
#include "post.h"
extern PostOffice* postOffice;
#endif

#endif // SYSTEM_H
