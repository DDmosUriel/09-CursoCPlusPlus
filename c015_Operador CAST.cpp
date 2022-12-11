/*

Curso de C++
Autor: JAOR
Clase 15 - Operador Cast


Un Cast es una especial forma de usar los tipos
de datos como un operador, para realizar conversiones
entre tipos de datos.

La Sintaxis utilizada par realizar un Cast es la
siguiente:

(tipo_de_dato) expresión;

tipo_de_dato.
Es el tipo de dato al cual será convertido expresión.

expresión.
Es una variable o expresión que devuelva un resultado o
un valor el cual es posible convertir al tipo_de_dato.

Ejemplo:

int x;
x = (int) 21.0988;


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
   cout << "Clase 15 - Operador Cast \n\n";

   // Declarando Variables
   int x;
   float fPeso=89.50;
   char  xCaracter='\n';



   // Despliega la variable mayor usando ?
   cout << "Evaluando CAST \n";

   // Casting automático
   x = 21.0988;
   cout << "0) El valor de x:" << x << endl;

   // Conversiones usando cast
   x= (int) 12.3009;
   cout << "1) El valor de x:" << x << endl;

   x= (int) 'A';
   cout << "2) El valor de x:" << x << endl;

   x= (int) fPeso;
   cout << "4) El valor de x:" << x << endl;

   x= xCaracter;
   cout << "5) El valor de x:" << x << endl;

   x= (int) true;
   cout << "6) El valor de x:" << x << endl;


   x= (int) "12.3009";
   cout << "7) El valor de x:" << x << endl;

   x= (int) "A";
   cout << "8) El valor de x:" << x << endl;

   fPeso=(float) (12 +909090);
   cout << "9) El valor de Peso:" << fPeso << endl;

   fPeso= 'A';
   cout << "A) El valor de Peso:" << fPeso << endl;


   /* Se finaliza la aplicación */
   return 0;
}
