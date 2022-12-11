/*

Curso de C++
Autor: JAOR
Clase 54 - Apuntadores a Apuntadores

Es posible declarar un apuntador que apunte a otro apuntador.
Es decir que la dirección que almacene es a su vez la dirección
de otro apuntador; por lo que si desplegaramos el contenido
de la dirección a la que apunta, estaríamos desplegando una
dirección.

Para definir un apuntador de un apuntador, lo hacemos de igual
forma utilizando el operador "*" pero ahora utilizándolo 2 veces;
tal y como se muestra en la siguiente forma:

int **ppInt;

*/

// Incluímos las librerías
#include <iostream>


// Definición de espacios de nombre
using namespace std;

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 54 - Apuntadores a Apuntadores \n\n";

    // Declaramos una variable entera
    int   intVariable=3000;
    int  *pInteger;
    int **ppInteger;

    // Asignamos la dirección de la variable entera al apuntador
    pInteger = &intVariable;

    // Asignamos la dirección de la variable apuntador, apuntador de apuntador
    ppInteger = &pInteger;

    // take
    cout << "Valor de la Variable Entera desde la Variable                :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador               :" << *pInteger    << endl;
    cout << "Valor de la Variable Entera desde el Apuntador del Apuntador :" << **ppInteger  << endl;
    cout << endl;

    intVariable=50;
    cout << "Valor de la Variable Entera desde la Variable                :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador               :" << *pInteger    << endl;
    cout << "Valor de la Variable Entera desde el Apuntador del Apuntador :" << **ppInteger  << endl;
    cout << endl;

    **ppInteger=100;
    cout << "Valor de la Variable Entera desde la Variable                :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador               :" << *pInteger    << endl;
    cout << "Valor de la Variable Entera desde el Apuntador del Apuntador :" << **ppInteger  << endl;
    cout << endl;

    // Valor-Dirección del Apuntador
    cout << "Valor del Apuntador desde el Apuntador           :" << pInteger    << endl;
    cout << "Valor del Apuntador desde el Apuntador Apuntador :" << *ppInteger  << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;
}


