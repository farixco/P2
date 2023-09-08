#include "Texto.h"
#include <iostream>

int main() {
   std::cout << "Ingrese cualquier texto." << std::endl;
   std::string txt;
   std::cin >> txt;
   Texto* texto = new Texto(txt);
   std::cout << "Longitud: " << texto->getLength() <<std::endl;
   std::cout << "Contiene la letra C: " << texto->contains('c') << std::endl;
   std::cout << "Contiene la letra C 2 o más veces: " << texto->contains('c', 2) << std::endl;
   std::cout << "El reverso es: " << texto->reverse() << std::endl;
   std::cout << "¿Es palíndromo?: " << texto->palindromo() << std::endl;
   return 0;
}
