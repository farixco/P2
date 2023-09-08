#pragma once
#include <string>

class Texto {
  private:
   std::string cadena;
  public:
   int getLength();
   bool contains(char c);
   bool contains(char c, int n);
   std::string reverse();
   bool palindromo();
   char* toCharArray();

   Texto(std::string _string = "") {
      cadena = _string;
   }
};
