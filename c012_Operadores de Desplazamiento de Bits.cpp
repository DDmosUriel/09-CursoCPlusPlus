/*

Curso de C++
Autor: JAOR

Clase 12 - Operadores de Desplazamiento de Bits

Existen otros 2 operadores de bit, que lo que
hacen es desplazar sus bits a la izquierda (<<)
o a la derecha(>>) dependiendo del número de bits
que se indique a desplazar.

Ejemplo:
int x = 10;

x = x << 2; // En este caso indico un desplazamiento
               de 2 bits a la izquierda

Si x   = 00001010
x << 2 = 00101000 = 40

x= 42;

Si x   = 00101010 = 42
x >> 1 = 00010101 = 21
         00001010

Si observamos con detenimiento, el desplazamiento
a la izquierda es realmente una multiplicación por
2 del valor, las veces que el bits de desplazamiento
indique. En el caso del desplazamiento a la derecha
es una división.

60 = 00000000000000000000000000111100

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

   // Desplazamos a la izquierda; es decir; multiplicamos
   // por 2; el 60; 2 veces.
   x= x << 2;
   cout << " x << 2 :"  << x << endl;

   // Ahora dividimos entre 2; 3 veces
   x=60;

   x= x >> 32;
   cout << " x >> 3 :"  << x << endl;


   /* Se finaliza la aplicación */
   return 0;
}
