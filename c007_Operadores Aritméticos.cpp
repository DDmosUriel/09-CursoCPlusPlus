/*

Curso de C++
Autor: JAOR
Clase 07 - Operadores Aritméticos

Un operador es un símbolo que le dice al compilador que
ejecute una operación determinada.

Esta operación se realiza generalmente entre 2 operandos
pero existen operadores que solo necesitan un operando.

Los operandos deben de corresponder al operador que se
está utilizando; es decir. Si se trata de realizar una
operación aritmética, los operandos deben ser valores
numéricos; aunque veremos que en algunos casos esto no
necesariamente es así.


OPERADORES ARITMÉTICOS BINARIOS.

Los operadores aritméticos, son los que corresponden a
las operaciones matemáticas conocidas: +,-,*,/ y uno
adicional llamado residuo, %.
El residuo es un operador que devuelve, tal y como lo
dice su nombre, el residuo de una operación de división.
Ejemplos:

int iValor1=29, iValor2=90;

iValor1 = iValor1 + iValor2;

OPERADORES ARIMÉTICOS UNARIOS.

Existen 2 operadores artiméticos que son unarios, porque
solo necesitan un operando; y son el ++ y el --.
Estos operadores aumentan(++) y decrementan(--) en 1, el
operando que se indique.

Ejemplos:
int iContador=5;
iContador++;

Estos operadores pueden usarse en prefijo, o en postfijo;
como en el ejemplo anterior. Veamos un ejemplo de prefijo.
++iContador;

Cuando se utilizan en prefijo en una expresión; primero se
realiza el incremento y después se utiliza el operando ya
modificado. Cuando se utiliza en postfijo; primero se utiliza
el operando y cuando ha finalizado la instrucción, entonces
se realiza el incremento en 1.

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
   cout << "Clase 07 - Operadores Aritméticos \n";

   // Declaración de variables enteras
   int iResultado = 0, iOperando1 = 19, iOperando2=10;
   float fTotal=45.70;

   cout << "Operando1:" << iOperando1 << endl;
   cout << "Operando2:" << iOperando2 << endl;
   cout << "Total    :" << fTotal << endl << endl;

   // Realizando operaciones aritméticas
   iResultado = iOperando1 + iOperando2;

   // Despliega el Resultado
   cout << "Resultado de Operando1 + Operando2 :" << iResultado << endl;

   // Realizando operaciones aritméticas
   iResultado = iOperando1 - iOperando2;

   // Despliega el Resultado
   cout << "Resultado de Operando1 - Operando2 :" << iResultado << endl;


   // Realizando operaciones aritméticas
   iResultado = iOperando1 * iOperando2;

   // Despliega el Resultado
   cout << "Resultado de Operando1 * Operando2 :" << iResultado << endl;


   // Realizando operaciones aritméticas
   iResultado = iOperando1 / iOperando2;

   // Despliega el Resultado
   cout << "Resultado de Operando1 / Operando2 :" << iResultado << endl;

   // Realizando operaciones aritméticas
   iResultado = iOperando1 % iOperando2;

   // Despliega el Resultado
   cout << "Resultado de Operando1 % Operando2 :" << iResultado << endl;

   // Calcula el resultado
   fTotal = fTotal + iOperando1 + iOperando2;
   cout << "Total + Operando1 + Operando2 :" << fTotal << endl;
   cout << "++Total                       :" << fTotal-- * 2 << endl;
   cout << "Operando1++                   :" << iOperando1++  * 2<< endl;
   cout << "++Operando2                   :" << ++iOperando2 * 2<< endl;

   /* Se finaliza la aplicación */
   return 0;
}
