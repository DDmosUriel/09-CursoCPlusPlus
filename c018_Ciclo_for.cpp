/*

Curso de C++
Autor: JAOR
Clase 18 - Ciclo for

En esta clase veremos el uso del Ciclo for el cual
tiene como sintaxis de uso la siguiente:

for ( inicializa; condicion; incremento(decremento) )
{
   instruccion(es);
}

inicializa.
Esta parte de la instrucción se ejecuta primero y una
sola vez. Permite declarar e inicializar variables que
puedan ser utilizadas dentro del ciclo. Es opcional,
no es necesario escribir esta parte de la instrucción.

condición.
Esta es la condición que se va a estar evaluando cada
vez que se ejecute el ciclo de instrucciones. Mientras
esta condición sea verdadera; el ciclo se mantendrá en
funcionamiento.

incremento(decremento)
Esta es la parte en la cual, por lo general, la variable
de inicialización se modifica ya sea incrementándola o
decrementándola, para que la condición del ciclo en algún
momento deje de cumplirse. Esta parte tambien es opcional.

Ejemplo:

for (int x=0; x < 10; x++)
{
    cout << x;
    cout endl;
}


En el anterior ejemplo:
- Se crea e inicializa la variable x con valor de 0
- Se establece la condición  x < 10
- Se establece el incremento de la variable x

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
    cout << "Clase 18 - Ciclo for \n\n";

    // Declaramos el valor de x
    int x=0;

    // Ciclo while
    cout << "Ciclo 1 \n";

    // Definición del Ciclo
    for (int x=1; x <= 10; x ++)
    {
        cout << "5 X " << x << " = " << 5 * x;
        cout << endl;
    }
    cout << endl;

    // Definición del Ciclo
    cout << "Ciclo 2 \n";
    for (x=1; x <= 10; x++)
        cout << "5 X " << x << " = " << 5 * x << endl;
    cout << endl;

    // Definición del Ciclo
    cout << "Ciclo 3 \n";
    x=0;
    for (; x++ < 10;)
        cout << "5 X " << x << " = " << 5 * x << endl;
    cout << endl;

    // Definición del Ciclo
    cout << "Ciclo 4 \n";
    x=0;
    int y;
    for (y=10; x++ < 10;y--)
        cout << y <<" X " << x << " = " << y * x << endl;
    cout << endl;


    /* Se finaliza la aplicación */
    return 0;
}
