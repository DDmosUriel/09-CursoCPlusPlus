/*

Curso de C++
Autor: JAOR
Clase 25 - Sentencia continue

La Sentencia continue nos permite enviar el control
dentro de un ciclo a su primera línea de ejecución.

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
    cout << "Clase 25 - Sentencia continue \n\n";

    // Define la Variable
    int x;

    cout << "Ciclo for con continue \n";
    // Ciclo interrumpido
    for (x=1;x<10;x++)
    {
        // Verifica que x sea par
        if (x == 5)

           // Manda a Inicio
           continue;

        // Despliega la tabla de multiplicar
        cout << "5 X " << x << " = " << 5 * x << endl;

    }
    cout << endl;

    // Despliega mensaje
    cout << "Ciclo while con continue \n";
    x=0;

    // Ciclo while interrumpido
    while (x < 10)
    {

       // Verifica que sea 0 o menor
       if (x++ == 4)


          // Va al inicio
          continue;

       // Despliega la tabla de multiplicar
       cout << "5 X " << x << " = " << 5 * x << endl;

    }
    cout << endl;


    // Despliega mensaje
    cout << "Ciclo do while con continue \n";


    // Ciclo while interrumpido
    do

    {

       // Verifica que sea 0 o menor
       if (x-- == 6)

          // Inicia
          continue;

       // Despliega la tabla de multiplicar
       cout << "5 X " << x << " = " << 5 * x << endl;


    }while (x > 0);

    /* Se finaliza la aplicación */
    return 0;
}

