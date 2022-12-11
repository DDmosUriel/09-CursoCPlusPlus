/*

Curso de C++
Autor: JAOR
Clase 08 - Operadores Relacionales

Los operadores relacionales, son aquellos que
nos permiten realizar una comparación entre
2 operandos y el resultado que devuelven estos
operadores es un valor booleano, es decir; true
o false.

A continuación se presenta la tabla con los diferentes
operadores y un ejemplo; considerando que X= 10 y Y=20.

------------------------------------------------------------------
OPERADOR    DESCRIPCIÓN                     EJEMPLO
------------------------------------------------------------------
   ==       Compara si son iguales          (X==Y) Devuelve false;
   !=       Compara si son distintos        (X!=Y) Devuelve true;
   >        Compara si es mayor             (X>Y)  Devuelve false;
   <        Compara si es menor             (X<Y)  Devuelve true;
   >=       Compara si es mayor o igual     (X>=Y) Devuelve false;
   <=       Compara si es menor o igual     (X<=Y) Devuelve true;


Como en el caso de los operadores aritméticos, los 2 operandos a
comparar deben de ser del mismo tipo; bajo ciertas excepciones.

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
   cout << "Clase 08 - Operadores Relacionales \n";

   // Declaración de variables enteras
   int X=10, Y=20;
   bool bResultado;

   // Realizamos la operación
   bResultado = (X == Y);
   cout << "X == Y   :"<< bResultado << endl;

   // Realizamos la operación
   bResultado = (X != Y);
   cout << "X != Y   :"<< bResultado << endl;

   // Realizamos la operación
   bResultado = (X > Y);
   cout << "X > Y    :"<< bResultado << endl;

   // Realizamos la operación
   bResultado = (X < Y);
   cout << "X < Y    :"<< bResultado << endl;

   // Realizamos la operación
   bResultado = (X >= Y);
   cout << "X >= Y   :"<< bResultado << endl;

   // Realizamos la operación
   bResultado = (X <= Y);
   cout << "X <= Y   :"<< bResultado << endl;

   // Realizamos la operación
   bResultado = (X > 'A');
   cout << "X > 'A'  :"<< bResultado << endl;

   bResultado = (X < 'A');
   cout << "X < 'A'  :"<< bResultado << endl;

   bResultado = (X > true);
   cout << "X > true :"<< bResultado << endl;

   bResultado = (X < true);
   cout << "X < true :"<< bResultado << endl;

   bResultado = (true < X);
   cout << "true < X :"<< bResultado << endl;

   bResultado = (true > X);
   cout << "true > X :"<< bResultado << endl;

   bResultado = ('B' < 'Z');
   cout << "'B' < 'Z' :"<< bResultado << endl;

   bResultado = ("Hola" == "Hol");
   cout << bResultado << endl;

   /* Se finaliza la aplicación */
   return 0;
}
