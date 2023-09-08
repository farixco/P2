#include "Parrafo.h"
#include "Texto.h"
#include <iostream>
#include <iterator>

int main() {
   std::cout << "Ingrese cualquier texto." << std::endl;
   std::string txt;
   std::getline(std::cin, txt);
   Texto* texto = new Texto(txt);
   std::cout << "Longitud: " << texto->getLength() << std::endl;
   std::cout << "Contiene la letra C: " << texto->contains('c') << std::endl;
   std::cout << "Contiene la letra C 2 o más veces: " << texto->contains('c', 2) << std::endl;
   std::cout << "El reverso es: " << texto->reverse() << std::endl;
   std::cout << "¿Es palíndromo?: " << texto->palindromo() << std::endl;
   char* letras = texto->toCharArray();
   
   for (int i = 0; i < texto->getLength(); ++i) {
      std::cout << letras[i] << std::endl;
   }
   
   std::cout << "Ingrese el número de lineas del párrafo." << std::endl;
   std::getline(std::cin, txt);
   int lin = std::stoi(txt);
   Texto** par = new Texto*[lin];
   for (int i = 0; i < lin; ++i) {
      std::cout << "Ahora ingrese la línea No. " << i << std::endl;
      std::getline(std::cin, txt);
      par[i] = new Texto(txt);
   }
   Parrafo* parrafo = new Parrafo(par, lin);
   std::cout << "Longitud total: " << parrafo->getLength() << std::endl;
   char** parchar = parrafo->toCharMatrix();
   int j;
   for (int i = 0; i < lin; ++i) {
      j = 0;
      while (parchar[i][j] != '\0') {
	 std::cout << *(*(parchar + i) + j) << " ";
	 ++j;
      }
      std::cout << std::endl;
   } 
   return 0;
}
