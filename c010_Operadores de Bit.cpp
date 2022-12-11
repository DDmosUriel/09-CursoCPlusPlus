/*

Curso de C++
Autor: JAOR
Clase 10 - Operadores de Bit

Los Operadores de Bit son los que se utilizan
para hacer operaciones entre valores numéricos
a nivel bit; lo cual es muy parecido a los
operadores lógicos que vimos en la clase anterior.
¿ Que significa a nivel bit ?

Significa que el valor es convertido a Sistema
Numérico Binario, el cual únicamente maneja 0's y
1's; es decir que está representado a nivel bit,
y con estos bits se realizan las operaciones.

Los operadores a Nivel Bit son el & (and), or (|)
y el ^ (Or exclusivo). A continuación se muestra
una tabla en la que se observa como se comporta
cada uno de estos operadores

Op1|Op2| & | | | ^
-------------------
 1 | 1 | 1 | 1 | 0
 1 | 0 | 0 | 1 | 1
 0 | 1 | 0 | 1 | 1
 0 | 0 | 0 | 0 | 0

 Ejemplo:

 int x=12, y=39;

    x    |   y      |    &=4   |  |=47    |   ^=43
00001100 | 00100111 | 00000100 | 00101111 | 00101011

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
   cout << "Clase 10 - Operadores de Bit \n\n";

   // Declaramos las variables
   int x=12,y=39;


   // Declaración de variables enteras
   cout << "TABLA DE OPERADORES DE BIT"<<endl;
   cout << " Op1 Op2   &  |  ^"<<endl;
   cout << "  1   1    " << (1 & 1) << "  " << (1 | 1) << "  " << (1 ^ 1) << endl;
   cout << "  1   0    " << (1 & 0) << "  " << (1 | 0) << "  " << (1 ^ 0) << endl;
   cout << "  0   1    " << (0 & 1) << "  " << (0 | 1) << "  " << (0 ^ 1) << endl;
   cout << "  0   0    " << (0 & 0) << "  " << (0 | 0) << "  " << (0 ^ 0) << endl << endl;

   cout << "Evaluando Valores de x = "<< x << " y = " << y  << endl;
   cout << " x & y :"<< (x & y) << endl;
   cout << " x | y :"<< (x | y) << endl;
   cout << " x ^ y :"<< (x ^ y) << endl;

   /* Se finaliza la aplicación */
   return 0;
}
