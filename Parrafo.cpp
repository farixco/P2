#include "Parrafo.h"

long Parrafo::getLength() {
   int lngCar = 0;
   for (int i = 0; i < longParrafo; ++i) {
      lngCar += parrafo[i]->getLength();
   }
   return lngCar;
}

char** Parrafo::toCharMatrix() {
   char** chMt = new char*[longParrafo];
   for (int i = 0; i < longParrafo; ++i) {
      *(chMt + i) = parrafo[i]->toCharArray();
   }
   return chMt;
}
