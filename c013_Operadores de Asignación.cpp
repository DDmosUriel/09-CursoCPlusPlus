/*+

Curso de C++
Autor: JAOR
Clase 13 - Operadores de Asignación

Los Operadores de Asignación, son aquellos
que al momento de asignar una valor, realizan una
operación.

A continuación se muestra la tabla de operadores
de asignación.

-------------------------------------------------------------------------------------------
Operador   | Descripción                                  Ejemplo
-------------------------------------------------------------------------------------------
    +=     | Suma al asignar                            | X += 10; igual que: X = X + 10;
    -=     | Resta al asignar                           | X -= 10; igual que: X = X - 10;
    *=     | Multiplicación al asignar                  | X *= 10; igual que: X = X * 10;
    /=     | División al asignar                        | X /= 10; igual que: X = X / 10;
    %=     | Residuo al asignar                         | X %= 10; igual que: X = X % 10;
    <<=    | Desplazamiento a la izquierda al asignar   | X <<= 10; igual que: X = X << 10;
    >>=    | Desplazamiento a la derechasuma al asignar | X >>= 10; igual que: X = X >> 10;
    &=     | And de bits al asignar                     | X &= 10; igual que: X = X & 10;
    |=     | Or  de bits al asignar                     | X |= 10; igual que: X = X | 10;
    ^=     | XOr de bits al asignar                     | X ^= 10; igual que: X = X ^ 10;


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
   cout << "Clase 13 - Operadores de Asignación \n\n";

   // Declaramos las variables
   int X=12;


   // Declaración de variables enteras
   cout << "Ejemplo de Operadores de Asignación " << endl;
   cout << "Sea X = 12 \n\n";
   cout << " X +=  10: " << (X += 10) << endl;
   X=12;
   cout << " X -=  10: " << (X -= 10) << endl;
   X=12;
   cout << " X *=  10: " << (X *= 10) << endl;
   X=12;
   cout << " X /=  10: " << (X /= 10) << endl;
   X=12;
   cout << " X %=  10: " << (X %= 10) << endl;
   X=12;
   cout << " X <<=  2: " << (X <<= 2) << endl;
   X=12;
   cout << " X >>=  2: " << (X >>= 2) << endl;
   X=12;
   cout << " X &=   2: " << (X &= 2) << endl;
   X=12;
   cout << " X |=   2: " << (X |= 2) << endl;
   X=12;
   cout << " X ^=   2: " << (X ^= 2) << endl;

   // 12  = 0001100  12 =  0001100  12 =  0001100
   //  2  = 0000010   2 =  0000010   2 =  0000010
   //-------------  --------------- -------------
   // &=0 = 0000000   |=14 0001110   ^=14 0001110

   /* Se finaliza la aplicación */
   return 0;
}
