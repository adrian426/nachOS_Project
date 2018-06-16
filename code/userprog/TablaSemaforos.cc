#include "TablaSemaforos.h"

TablaSemaforos::TablaSemaforos() {
    mapaSemaforos = new BitMap(TAMANO);
}

TablaSemaforos::~TablaSemaforos() {
    delete mapaSemaforos;
}

int TablaSemaforos::crearSem(int valorInicial) {
    int id = mapaSemaforos->Find();
    if(-1 != id){
        char* elId;
        sprintf(elId, "%d", id); //Id to char*
        tablaSemaforos[id] = new Semaphore(elId, valorInicial);
    }
    return id;
}

int TablaSemaforos::destruirSem(int id) {
    int destruido = -1;
    if(mapaSemaforos->Test(id)){ //Si el semáforo existe
        tablaSemaforos[id]->Destroy(); //Libera todos los hilos esperando
        delete tablaSemaforos[id]; //Destruye el semáforo
        mapaSemaforos->Clear(id); //Libera el espacio en el mapa.
        destruido = 1;
    }
    return destruido;
}

Semaphore * TablaSemaforos::getSem(int id) {
    if(mapaSemaforos->Test(id)){ //Si el semáforo existe
        return tablaSemaforos[id];
    }else{
        return nullptr;
    }
}

