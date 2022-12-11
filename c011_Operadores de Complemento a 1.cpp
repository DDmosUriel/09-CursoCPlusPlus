/*

Curso de C++
Autor: JAOR

Clase 11 - Operador de Complemento a 1


Existen 2 métodos para representar valores
negativos en un Sistema de Cómputo.

Uno de ellos es el Complemento a 1, el cual
utiliza el símbolo ~.

Este operador lo que hace es obtener el Complemento
a 1 de el valor indicado.

Ejemplo:
int x=60;
x= ~x;


*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{
   // Se despliega el Nombre del Curso y la Clase
   cout << "Curso de C++ \n";
   cout << "Clase 11 - Operador de Complemento \n\n";

   // Declaramos las variables
   int x=60;

   // 60 = 00111100
   //    = 11000011
   //    = 11000010

   //  0 = 00000000
   //    = 11111111
   //    = 11111110

   // Declaración de variables enteras
   x= ~x;
   cout << " Complemento a 1 de x :"  << x << endl;

   x= ~x;
   cout << " Complemento a 1 de ~x :" << x << endl;

   x=0;
   x=~x;
   cout << " Complemento a 1 de x :"  << x << endl;

   x=~x;
   cout << " Complemento a 1 de ~x :" << x << endl;


   /* Se finaliza la aplicación */
   return 0;
}
