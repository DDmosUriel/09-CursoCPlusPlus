/*

Curso de C++
Autor: JAOR
Clase 36 - Funciones Recursividad

Recursividad es la capacidad que tiene una función
de llamarse a si misma.

Dentro de la función, debe de existir un punto o
una circunstancia a la cual se llegue, y en la cual
la función ya no se llame a si misma y finalice.

¿Cuando usar una función recursiva ?
Debe usarse cuando se detecta un proceso que se repite
con circunstancias muy similares.

Ejemplo Factorial

!5 = 5 x 4 x 3 x 2 x 1  = 120 ===> 5 x !4  == 5 x 24 = 120
!4 =     4 x 3 x 2 x 1  =  24 ===> 4 x !3  == 4 x  6 =  24
!3 =         3 x 2 x 1  =   6 ===> 3 x !2  == 3 x  2 =   6
!2 =             2 x 1  =   2 ===> 2 x !1  == 2 x  1 =   2
!1 =                        1
!0 =                        1

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Recursiva del Factorial de un Número
int FnIntFactorial(int xNumero)
{
   // Variable para el Resultado
   int iResultado;

   // Verifica si es 0 o 1
   if (xNumero==1 || xNumero==0)
      iResultado=1;
   else
      iResultado = xNumero * FnIntFactorial(xNumero-1);


   cout << iResultado << endl;

   return iResultado;
}

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 36 - Funciones Recursividad \n\n";

    cout << "El Factorial de 0:" << FnIntFactorial(0) << endl << endl;
    cout << "El Factorial de 1:" << FnIntFactorial(1) << endl << endl;
    cout << "El Factorial de 5:" << FnIntFactorial(5) << endl << endl;

    cout << "El Factorial de 0:" << FnIntFactorial(0) << endl << endl;
    cout << "El Factorial de 1:" << FnIntFactorial(1) << endl << endl;
    cout << "El Factorial de 5:" << FnIntFactorial(5) << endl << endl;

    cout << "El Factorial de 0:" << FnIntFactorial(0) << endl << endl;
    cout << "El Factorial de 1:" << FnIntFactorial(1) << endl << endl;
    cout << "El Factorial de 5:" << FnIntFactorial(5) << endl << endl;

    cout << "El Factorial de 0:" << FnIntFactorial(0) << endl << endl;
    cout << "El Factorial de 1:" << FnIntFactorial(1) << endl << endl;
    cout << "El Factorial de 5:" << FnIntFactorial(5) << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
