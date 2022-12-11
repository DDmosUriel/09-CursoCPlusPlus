/*

Curso de C++
Autor: JAOR
Clase 14 - Operadores de Propósito General

sizeof.
Determina el tamaño en bytes de una variable o tipo de dato.
Su sintaxis de uso es:

sizeof(variable|tipodato)


?:
Este operador es llamado condicional ya que evalúa una condición
y dependiendo del resultado ejecuta una parte  u otra.
Su sintaxis de operación es la siguiente:

Exp1?Exp2:Exp3;

Exp1 es la expresión que se evalúa y que obligatoriamente debe
devolver un resultado booleano; es decir; true o false.

Si Exp1 devuelve true, entonces la Exp2 es ejecutada; si Exp1
devuelve false; entonces Exp3 es ejecutada.

Ejemplo. Considere que tiene 2 variables; X y Y; y que desea
desplegar en la pantalla el valor de aquella variable que sea
mayor. La instrucción quedaría de la siguiente forma:

X > Y ? cout << X : cout << Y;

,
El Operador "," permite que se puedan ejecutar una secuencia
de instrucciones seguidas una de otra. Tambien lo utilizamos
cuando declaramos variables que son del mismo tipo.
Ejemplo:
int x,y,z;

Existen otros operadores, ".","->","&" y "*"; que son utilizados
en temas que veremos posteriormente.

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
   cout << "Clase 14 - Operadores de Propósito General \n\n";

   // Declarando Variables
   int X=9, Y=10;
   bool bSalida;


   // Despliega la variable mayor usando ?
   cout << "Evaluando operador sizeof \n";
   cout << sizeof(X) << endl << sizeof(int);
   cout << endl;
   cout << sizeof(bSalida) << endl << sizeof(bool);

   cout << endl;
   cout << endl;


   // Despliega la variable mayor usando ?
   cout << "Evaluando operador ? \n";
   X > Y ? cout << "X es mayor Y": cout << "X no es mayor que Y";
   cout << endl;


   // Despliega la variable mayor usando ?
   bSalida ? cout << "true" : cout << "false";
   cout << endl;

   // Asigna 1
   X=1;
   X ? cout << "true": cout << "false";
   cout << endl;
   cout << endl;

   cout << "Evaluando operador , \n";
   X=21;
   X > Y ?
           cout << X, cout << "Ignora" :
           cout << Y, cout << "Extra";
   cout << endl;

   /* Se finaliza la aplicación */
   return 0;
}
