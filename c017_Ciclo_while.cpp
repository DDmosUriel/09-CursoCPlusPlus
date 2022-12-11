/*

Curso de C++
Autor: JAOR
Clase 17 - Ciclo while

Se le conoce en programación como CICLO a un
conjunto de instrucciones que se repiten mientras
una condición se cumpla.

En esta clase veremos el uso del Ciclo while el cual
tiene como sintaxis de uso la siguiente:

while (condición)
{
   instrucciones;
}

condición.
Es una expresión que retorna un valor booleano.
Pueder ser una literal, una variable, o una expresión.

instrucciones.
Son el conjunto de instrucciones que se ejecutarán
mientras que la condición se cumpla.
Por lo regular, en este conjunto de instrucciones, debe
de haber alguna que en cierto momento, al ejecutarse,
cambie el estado de la condición y haga que esta ya
no se cumpla.


Nota. Cuando es sola una instrucción la que se ejecuta
en el bloque, no es necesario utilizar "{}".

Ejemplo:

int x=0;

while (x < 10)
{
     cout << "El valor de x:" << x << endl;
     x++;
}

condición.
   Que x sea menor que 10.

Instrucciones.
   Desplegar el valor de x;
   Incrementar x en 1;

El anterior ciclo, hará que el valor de x se
despliegue, mientras que x sea menor que 10.
La segunda instrucción del bloque, hace que
la condición en un momento dado, ya no se
cumpla.

El anterior ciclo se pudiera escribir de la
siguiente forma:

int x=0;

while (x++ < 10)
     cout << "El valor de x:" << x << endl;


Si observamos, dentro de la condición, realizamos
el incremento de x; y por lo tanto el bloque
de instrucciones es de una sola instrucción y no
necesita las "{}".



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
    cout << "Clase 17 - Ciclo while \n\n";

    // Declaramos el valor de x
    int x=0;

    // Ciclo while
    cout << "Ciclo 1 \n";
    while (x < 10)
    //{
         // Desplegamos el valor de x
         cout << "El valor de x:" << x << endl,x++;
         // Incrementamos su valor
         //x++;
    //}
    // Cambiamos de Línea
    cout << endl;

    // Colocamos de nuevo 0 a x
    x=0;

    // Ciclo simplificado
    cout << "Ciclo 2 \n";
    while (x++ < 10)
       cout << "El valor de x:" << x << endl;

    // Cambiamos de Línea
    cout << endl;

    // Inicializamos con 0
    x=0;

    // Ciclo simplificado
    cout << "Ciclo 3 \n";
    while (x < 10)
       cout << "El valor de x:" << x++ << endl;

    // Cambiamos de Línea
    cout << endl;

    // Inicializamos con 0
    x=0;

    // Ciclo simplificado
    cout << "Ciclo 4 \n";
    while (x + 5 < 10)
       cout << "El valor de x:" << x++ << endl;

    // Cambiamos de Línea
    cout << endl;

    /* Se finaliza la aplicación */
    return 0;
}
