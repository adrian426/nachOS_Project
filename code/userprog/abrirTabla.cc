#include "abrirTabla.h"

NachosOpenFilesTable::NachosOpenFilesTable(){
  openFiles = new int[MAPSIZE];
  openFilesMap = new BitMap(MAPSIZE);
  usage = 0;
}       // Initialize

NachosOpenFilesTable::~NachosOpenFilesTable(){
  if(usage == 0){
    delete[] openFiles;
    delete openFilesMap;
  }
}     // De-allocate

int NachosOpenFilesTable::Open( int UnixHandle ){
  int rst = -1;
  rst = openFilesMap->Find();
  if(rst != -1){
    openFiles[rst] = UnixHandle;
  }
  return rst;

} // Register the file handle

int NachosOpenFilesTable::Close( int NachosHandle ){
  int rst = -1;
  if(openFilesMap->Test(NachosHandle)){
    openFilesMap->Clear(NachosHandle);
    rst = true;
  }
  return rst;

}      // Unregister the file handle

bool NachosOpenFilesTable::isOpened( int NachosHandle ){
  bool rst = openFilesMap->Test(NachosHandle);
  return rst;
}

int NachosOpenFilesTable::getUnixHandle( int NachosHandle ){
  return (openFilesMap->Test(NachosHandle))?openFiles[NachosHandle]:-1;
}

void NachosOpenFilesTable::addThread(){
  usage++;
}		// If a user thread is using this table, add it

void NachosOpenFilesTable::delThread(){
  usage--;
}	// If a user thread is using this table, delete it

void NachosOpenFilesTable::Print(){
  int index = 3;
  while(index<usage+3){
    printf("%d\n",openFiles[index]);
  }
}               // Print contents
