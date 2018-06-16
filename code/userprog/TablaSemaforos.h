//
// Created by marco on 14/06/18.
//

#ifndef NACHOS_TABLASEMAFOROS_H
#define NACHOS_TABLASEMAFOROS_H
#define TAMANO 128
#include <cstdio>
#include "bitmap.h"
#include "synch.h"


class TablaSemaforos{
public:
    TablaSemaforos();
    ~TablaSemaforos();
    int crearSem(int valorInicial); //Ingresa un semáforo al vector de semáforos
    int destruirSem(int id); //Destruye un semáforo con el id especificado.
    Semaphore* getSem(int id); //Devuelve un semáforo para poder operarlo.

private:
    Semaphore* tablaSemaforos[TAMANO]; //Vector de semáforos.
    BitMap* mapaSemaforos;
};

#endif //NACHOS_TABLASEMAFOROS_H
