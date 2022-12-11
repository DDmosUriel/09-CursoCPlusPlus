/*

Curso de C++
Autor: JAOR
Clase 30 - Funciones Variables Globales y Locales

Una variable es local a la función en la cual fué
definida; es decir; que se puede hacerse uso o referencia
a ella, únicamente en la función en la que se define.

Una variable es global, cuando se define fuera de
cualquier función; y es posible hacer referencia a ella
desde cualquier función.

Dos variables pueden ser nombradas iguales, siempre y
cuando se encuentren definidas en funciones distintas.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Variable Global
int intNumero = 5;
int intNumero2 = 20;

// Define la función
int FnNumeroTest()
{

    // Variable local
    int intNumero;

    // Hace referencia a la variable local
    intNumero = 23;

    // Imprimiendo la variable desde la función
    cout <<  "Número en función Test:" << intNumero << endl << endl;

    // Hace referencia a la variable Global
    intNumero2 = 45;

    // Imprimiendo la variable desde la función
    cout <<  "Número2 en función Test:" << intNumero2 << endl << endl;

}

// Función sin variable
void FnNumeroTest2()
{

    // Imprimiendo la variable desde la función
    cout <<  "Número en función Test2:" << intNumero << endl << endl;

    // Hace referencia a la variable Global
    intNumero2 = 145;

    // Imprimiendo la variable desde la función
    cout <<  "Número2 en función Test2:" << intNumero2 << endl << endl;

}


// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 30 - Funciones Variables Globales y Locales \n\n";

    // Define variable local a función main
    int intNumero=89;

    // Mensaje Inicial
    cout <<  "Número en función main:" << intNumero << endl << endl;

    // Llama a función Test
    FnNumeroTest();

    // Llama a función Test2
    FnNumeroTest2();

    // Hace referencia a la variable Global
    intNumero2 = 15;

    // Imprimiendo la variable desde la función
    cout <<  "Número2 en función main:" << intNumero2 << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
