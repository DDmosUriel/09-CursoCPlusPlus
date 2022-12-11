/*

Curso de C++
Autor: JAOR
Clase 24 - Sentencia break

La Sentencia break nos permite salir de los
bloques de código de los ciclos for, while y
do while, y del bloque de código de la
sentencia switch.

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
    cout << "Clase 24 - Sentencia break \n\n";

    // Define la Variable
    int x;

    cout << "Ciclo for interrumpido\n";
    // Ciclo interrumpido
    for (x=1;x<10;x++)
    {
        // Verifica que x sea par
        if (x == 5)

           // Sale del Ciclo for
           break;

        // Despliega la tabla de multiplicar
        cout << "5 X " << x << " = " << 5 * x << endl;

    }
    cout << endl;

    // Despliega mensaje
    cout << "Ciclo while interrumpido\n";

    // Ciclo while interrumpido
    while (x < 10)
    {

       // Verifica que sea 0 o menor
       if (x  == 7)

          // Sale del Ciclo while
          break;

       // Despliega la tabla de multiplicar
       cout << "5 X " << x++ << " = " << 5 * x << endl;

    }
    cout << endl;


    // Despliega mensaje
    cout << "Ciclo do while interrumpido\n";

    // Ciclo while interrumpido
    do

    {

       // Verifica que sea 0 o menor
       if (x == -10)

          // Sale del Ciclo while
          break;

       // Despliega la tabla de multiplicar
       cout << "5 X " << x-- << " = " << 5 * x << endl;


    }while (true);

    /* Se finaliza la aplicación */
    return 0;
}

