// system.cc
//	Nachos initialization and cleanup routines.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "preemptive.h"

// This defines *all* of the global data structures used by Nachos.
// These are all initialized and de-allocated by this file.

Thread *currentThread;			// the thread we are running now
Thread *threadToBeDestroyed;  		// the thread that just finished
Scheduler *scheduler;			// the ready list
Interrupt *interrupt;			// interrupt status
Statistics *stats;			// performance metrics
Timer *timer;				// the hardware timer device,
					// for invoking context switches

// 2007, Jose Miguel Santos Espino
PreemptiveScheduler* preemptiveScheduler = NULL;
const long long DEFAULT_TIME_SLICE = 50000;

#ifdef FILESYS_NEEDED
FileSystem  *fileSystem;
#endif

#ifdef FILESYS
SynchDisk   *synchDisk;
#endif

#ifdef USER_PROGRAM	// requires either FILESYS or FILESYS_STUB
Machine *machine;	// user program memory and registers
BitMap* memoryPagesMap;
NachosOpenFilesTable* openFilesTable;
Semaphore* ConsoleSem;
BitMap* availableThreadIds;
TablaSemaforos * tablaSemaforos;
#endif

#ifdef VM
int contadorPageFaults;
int siguienteLibreTLB;
int victimaSwap;
int victimaTLB;
BitMap* swapMap;
BitMap* tlbMap;
//OpenFile* swapFile;
TPI* tpi;
//bool references[TLBSize];
//int swapIndex;
//bool SCArray[TLBSize];//Para marcar las que se han usado mas repetido con 1.
//TranslationEntry* IPT[NumPhysPages];//El que yo digo.


#endif

#ifdef NETWORK
PostOffice *postOffice;
#endif


// External definition, to allow us to take a pointer to this function
extern void Cleanup();




//----------------------------------------------------------------------
// TimerInterruptHandler
// 	Interrupt handler for the timer deviSIGTRAP example -perlce.  The timer device is
//	set up to interrupt the CPU periodically (once every TimerTicks).
//	This routine is called each timeALRM there is a timer interrupt,
//	with interrupts disabled.
//
//	Note that instead of calling Yield() directly (which would
//	suspend the interrupt handler, not the interrupted thread
//	which is what we wanted to context switch), we set a flag
//	so that once the interrupt handler is done, it will appear as
//	if the interrupted thread called Yield at the point it is
//	was interrupted.
//
//	"dummy" is because every interrupt handler takes one argument,
//		whether it needs it or not.
//----------------------------------------------------------------------
static void
TimerInterruptHandler(void* dummy)
{
    if (interrupt->getStatus() != IdleMode)
	interrupt->YieldOnReturn();
}

//----------------------------------------------------------------------
// Initialize
// 	Initialize Nachos global data structures.  Interpret command
//	line arguments in ALRMorder to determine flags for the initialization.
//
//	"argc" is the number of command line arguments (including the name
//		of the command) -- ex: "nachos -d +" -> argc = 3
//	"argv" is an array of strings, one for each command line argument
//		ex: "nachos -d +" -> argv = {"nachos", "-d", "+"}
//----------------------------------------------------------------------
void
Initialize(int argc, char **argv)
{
    int argCount;
    const char* debugArgs = "";
    bool randomYield = false;


// 2007, Jose Miguel Santos Espino
    bool preemptiveScheduling = false;
    long long timeSlice;

#ifdef USER_PROGRAM
    bool debugUserProg = false;	// single step user program
#endif
#ifdef FILESYS_NEEDED
    bool format = false;	// format disk
#endif
#ifdef NETWORK
    double rely = 1;		// network reliability
    int netname = 0;		// UNIX socket name
#endif

    for (argc--, argv++; argc > 0; argc -= argCount, argv += argCount) {
	argCount = 1;
	if (!strcmp(*argv, "-d")) {
	    if (argc == 1)
		debugArgs = "+";	// turn on all debug flags
	    else {
	    	debugArgs = *(argv + 1);
	    	argCount = 2;
	    }
	} else if (!strcmp(*argv, "-rs")) {
	    ASSERT(argc > 1);
	    RandomInit(atoi(*(argv + 1)));	// initialize pseudo-random
						// number generator
	    randomYield = true;
	    argCount = 2;
	}
	// 2007, Jose Miguel Santos Espino
	else if (!strcmp(*argv, "-p")) {
	    preemptiveScheduling = true;
	    if (argc == 1) {
	        timeSlice = DEFAULT_TIME_SLICE;
	    } else {
	        timeSlice = atoi(*(argv+1));
	        argCount = 2;
	    }
	}
#ifdef USER_PROGRAM
	if (!strcmp(*argv, "-s"))
	    debugUserProg = true;
#endif
#ifdef FILESYS_NEEDED
	if (!strcmp(*argv, "-f"))
	    format = true;
#endif
#ifdef NETWORK
	if (!strcmp(*argv, "-l")) {
	    ASSERT(argc > 1);
	    rely = atof(*(argv + 1));
	    argCount = 2;
	} else if (!strcmp(*argv, "-m")) {
	    ASSERT(argc > 1);
	    netname = atoi(*(argv + 1));
	    argCount = 2;
	}
#endif
    }

    DebugInit(debugArgs);			// initialize DEBUG messages
    stats = new Statistics();			// collect statistics
    interrupt = new Interrupt;			// start up interrupt handling
    scheduler = new Scheduler();		// initialize the ready queue
    if (randomYield)				// start the timer (if needed)
	timer = new Timer(TimerInterruptHandler, 0, randomYield);

    threadToBeDestroyed = NULL;

    // We didn't explicitly allocate the current thread we are running in.
    // But if it ever tries to give up the CPU, we better have a Thread
    // object to save its state.
    currentThread = new Thread("main");
    currentThread->setStatus(RUNNING);

    interrupt->Enable();
    CallOnUserAbort(Cleanup);			// if user hits ctl-C

    // Jose Miguel Santos Espino, 2007
    if ( preemptiveScheduling ) {
        preemptiveScheduler = new PreemptiveScheduler();
        preemptiveScheduler->SetUp(timeSlice);
    }


#ifdef USER_PROGRAM
    machine = new Machine(debugUserProg);	// this must come first
    memoryPagesMap = new BitMap(NumPhysPages);
	tablaSemaforos = new TablaSemaforos();
    openFilesTable = new NachosOpenFilesTable();
    ConsoleSem = new Semaphore("Console",1);
    availableThreadIds = new BitMap(200); //Max de 200 diferentes threads.
#endif

#ifdef VM
    contadorPageFaults = 0;
    siguienteLibreTLB = 0; //Comienza siendo el primer campo del tlb.
    victimaSwap = 0;
    victimaTLB = 0;
    swapMap = new BitMap(64);
    tlbMap = new BitMap(TLBSize);
    tlbMap->Mark(0);
    bool created = fileSystem->Create("SWAP", 8192);
    if(created){
        //swapFile = fileSystem->Open("SWAP");
    }else{
        printf("El SWAP no pudo ser creado.");
        ASSERT(false);
    }
    tpi = new TPI[NumPhysPages];
    for(int index = 0; index < TLBSize; index++)machine->references[index] = false;//Inializo el arreglo de referencias para second chance.
//    swapIndex = 0;
//    for(int index = 0; index < TLBSize; index++)SCArray[index] = false;//Inializo el arreglo de second chance.
//    for(int index = 0; index < NumPhysPages; index++){//Inicializo la tabla de paginas invertida.
//      IPT[index]=0x0;
//      tpi[index]->pt = 0x0;
//      tpi[index]->vpn = -1;
//    }

#endif

#ifdef FILESYS
    synchDisk = new SynchDisk("DISK");
#endif

#ifdef FILESYS_NEEDED
    fileSystem = new FileSystem(format);
#endif

#ifdef NETWORK
    postOffice = new PostOffice(netname, rely, 10);
#endif
}

//----------------------------------------------------------------------
// Cleanup
// 	Nachos is halting.  De-allocate global data structures.
//----------------------------------------------------------------------
void
Cleanup()
{

    printf("\nCleaning up...\n");

// 2007, Jose Miguel Santos Espino
    delete preemptiveScheduler;

#ifdef NETWORK
    delete postOffice;
#endif

#ifdef USER_PROGRAM
    delete machine;
#endif

#ifdef VM
    fileSystem->Remove("SWAP");
#endif

#ifdef FILESYS_NEEDED
    delete fileSystem;
#endif

#ifdef FILESYS
    delete synchDisk;
#endif

    delete timer;
    delete scheduler;
    delete interrupt;

    Exit(0);
}
