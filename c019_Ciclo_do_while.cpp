/*

Curso de C++
Autor: JAOR
Clase 19 - Ciclo do while

En esta clase veremos el uso del Ciclo do while
el cual tiene como sintaxis de uso la siguiente:

do
{
   instruccion(es);
} while( condicion );

do.
Palabra reservada que indica el inicio del ciclo

instrucciones.
Que se ejecutan por lo menos una vez, y mientras
que se cumpla la condición.

condición.
La condición que mientras sea verdadera, hará que
el ciclo se repita.

Si observamos, la condición aparece al final de
la definición del ciclo; lo que hace que por lo
menos una vez este sea ejecutado; cosa que no
sucede con el ciclo while, en donde no se tiene
la seguridad de que entre por lo menos una vez
al ciclo.

Ejemplo:

int x=1;
do
{
  cout << "5 X " << x << endl;
  x++;

}while (x <= 10)


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
    cout << "Clase 19 - Ciclo do while \n\n";

    // Definición de la Variable y el Ciclo
    cout << "Ciclo 1 \n\n";
    int x=1;
    do
    {
       cout << "5 X " << x << endl;
       x++;
    }while (x <= 10);
    cout << endl;

    cout << "Ciclo 2 \n\n";
    x=1;
    do
       cout << "5 X " << x++ << endl;
    while (x <= 10);
    cout << endl;


    cout << "Ciclo 3 \n\n";
    x=10;
    do
    {
       x++;
       cout << "5 X " << x << endl;
    }while (x < 10);
    cout << endl;

    cout << "Ciclo 4 \n\n";
    x=10;
    while (x < 10)
    {
       x++;
       cout << "5 X " << x << endl;
    }
    cout << endl;

    /* Se finaliza la aplicación */
    return 0;
}
