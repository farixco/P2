#pragma once
#include "Texto.h"

class Parrafo : Texto {
  private:
   Texto** parrafo = NULL;
   int longParrafo;
  public:
   long getLength();
   char** toCharMatrix();

  Parrafo(Texto** lineas, int length) : Texto() {
      parrafo = lineas;
      longParrafo = length;
   }
};
