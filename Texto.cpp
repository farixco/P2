#include "Texto.h"

int Texto::getLength() {
   return cadena.length();
}

bool Texto::contains(char c) {
   return (cadena.find(c) != std::string::npos);
}

bool Texto::contains(char c, int n) {
   for (int i = 0; i < cadena.length(); ++i) {
      if (cadena[i] == c) {
	 --n;
      }
   }
   return (n <= 0);
}

std::string reverseR(std::string xtring, int ndx = 0) {
   if (ndx == 0) {
      ndx = xtring.length() / 2;
   }
   if (ndx == xtring.length()) {
      return xtring;
   } else {
      char hodl = xtring[ndx];
      xtring[ndx] = xtring[xtring.length() - 1 - ndx];
      xtring[xtring.length() - 1 - ndx] = hodl;
      return reverseR(xtring, ndx + 1);
   }
}

std::string Texto::reverse() {
   return reverseR(cadena);
}
bool palindromoR(std::string xtring, int ndx = 0) {
   if (ndx == xtring.length()) {
      return true;
   } else if (xtring[ndx] == xtring[xtring.length() - 1 - ndx]) {
      return palindromoR(xtring, ndx + 1);
   } else {
      return false;
   }
}
bool Texto::palindromo() {
   return palindromoR(cadena);
}

char* Texto::toCharArray() {
   char* chAr = new char[cadena.length() + 1];
   for (int i = 0; i < cadena.length(); ++i) {
      chAr[i] = cadena[i];
   }
   // null terminated string (char array)
   chAr[cadena.length()] = '\0';
   return chAr;
}
