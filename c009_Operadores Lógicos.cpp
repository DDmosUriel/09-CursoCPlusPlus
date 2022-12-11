/*

Curso de C++
Autor: JAOR
Clase 09 - Operadores Lógicos

Los Operadores Lógicos son aquellos que nos
permiten evaluar mas de una condición.

Sus operandos deben ser booleanos, es decir;
solamente son válidos true y false.


Esta es la tabla con los 3 operadores lógicos
de C++
------------------------------------------------------------------
OPERADOR   NOMBRE    VALORES QUE DEVUELVE
------------------------------------------------------------------
   &&      AND       Solo devuelve true, cuando los 2 son true
                     Devuelve false, con que uno sea false
   ||      OR        Solo devuelve false,cuando los 2 son false
                     Devuelve true, con que uno sea true
   !       NOT       Convierte de true a false, y de false a true


TABLA DE VERDAD DE AND

Op1  | Op2  | && Res
-------------------
true | true | true
true | false| false
false| true | false
false| false| false


TABLA DE VERDAD DE OR

Op1  | Op2  | || Res
-------------------
true | true | true
true | false| true
false| true | true
false| false| false


TABLA DE VERDAD DE NOT

Op1  | !Res
-------------------
true | false
false| true

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
   cout << "Clase 09 - Operadores Lógicos \n\n";

   bool bOp1,bOp2,bRes;


   // Declaración de variables enteras
   cout << "TABLA DE AND"<<endl;
   cout << "true  && true  :" << (true  && true)  << endl;
   cout << "true  && false :" << (true  && false) << endl;
   cout << "false && true  :" << (false && true)  << endl;
   cout << "false && false :" << (false && false) << endl <<endl;

   cout << "TABLA DE OR"<<endl;
   cout << "true  || true  :" << (true  || true)  << endl;
   cout << "true  || false :" << (true  || false) << endl;
   cout << "false || true  :" << (false || true)  << endl;
   cout << "false || false :" << (false || false) << endl <<endl;

   cout << "TABLA DE NOT"<<endl;
   cout << "!true          :" << !true  << endl;
   cout << "!false         :" << !false << endl <<endl;

   cout << "CASOS ESPECIALES"<<endl;
   cout << "5 && 5         :" << (5 && 5)   << endl;
   cout << "-5 && -5       :" << (-5 && -5)  << endl;
   cout << "0 && 1         :" << (0 && 1)    << endl;
   cout << "0 || 1         :" << (0 || 1)    << endl <<endl;

   int iTotalVta = 300;
   cout << ( (iTotalVta > 99) && (iTotalVta < 200))   << endl <<endl;

   /* Se finaliza la aplicación */
   return 0;
}
