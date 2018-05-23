#include "abrirTabla.h"

NachosOpenFilesTable::NachosOpenFilesTable(){
  openFiles = new int[mapSize];
  openFilesMap = new BitMap(mapSize);
  usage = 0;
}       // Initialize

NachosOpenFilesTable::~NachosOpenFilesTable(){
  delete[] openFiles;
  delete openFilesMap;
}     // De-allocate

int NachosOpenFilesTable::Open( int UnixHandle ){
  int o = 0;
  return o;

} // Register the file handle

int NachosOpenFilesTable::Close( int NachosHandle ){
  int o = 0;
  return o;

}      // Unregister the file handle

bool NachosOpenFilesTable::isOpened( int NachosHandle ){
  bool o = false;
  return o;
}

int NachosOpenFilesTable::getUnixHandle( int NachosHandle ){
  int handleIndex;
  return handleIndex;
}

void NachosOpenFilesTable::addThread(){
  usage++;

}		// If a user thread is using this table, add it

void NachosOpenFilesTable::delThread(){
  usage--;

}	// If a user thread is using this table, delete it

void Print(){

}               // Print contents
