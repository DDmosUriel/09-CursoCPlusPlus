/*

Curso de C++
Autor: JAOR
Clase 26 - Sentencia goto

La Sentencia goto, durante muchos años en los primeros
lenguajes de programación; fue una de las sentencias
mas importantes y mas utilizada.

Con el avance de la programación, esta fue eliminándose
debido a que la versatilidad de su uso
hacía que los programas fueran de una lectura y comprensión
difícil.

La sentencia goto permite mandar el control del flujo del
programa, a cualquier parte; lo que hace que la programación
modular a base de bloques, fuera rota.

La sintaxis de la instrucción goto es:

goto etiqueta;
..
.
etiqueta:
    instrucciones;


Donde etiqueta es un identificador que se encuentra definido
en otra parte del programa y con ":" al final del mismo.


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
    cout << "Clase 26 - Sentencia goto \n\n";

    // Define la Variable
    int a = 10;

    Inicio:

    if (a==15)
      goto Fin;

    // Ciclo
    do
    {

        if( a == 15)
        {
            // Salto a salida
            goto Salida;
        }

        cout << "Valor de  a: " << a << endl;
        a = a + 1;

    }while( a < 20 );

    cout << "No pasa por acá";

    Salida:
    cout << "Salida \n\n";

    goto Inicio;


    Fin:
    cout << "Fin ";

    /* Se finaliza la aplicación */
    return 0;
}

