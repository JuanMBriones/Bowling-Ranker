#include "fileManager.hpp"

fileManager::FileCheck(fstream file) {
  // retornar true si se puede abrir el archivo
  if(file.is_open()) {
    return true;
  }
  else {
    return false;
  }
}
