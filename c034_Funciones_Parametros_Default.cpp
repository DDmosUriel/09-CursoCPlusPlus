/*

Curso de C++
Autor: JAOR
Clase 34 - Funciones Parámetros por Default

Es posible, cuando se declaran los parámetros de una
función, asignarles un valor; el cual será utilizado
en el caso de que al llamar a la función, no se coloque
el parámetro correspondiente.

A estos parámetros se les conoce como parámetros por
default.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función con parámetros por default
int FnIntSuma2Numeros(int iNumero1, int iNumero2, int iNumero3=90)
{
   // Variable para el resultado
   int iResultado;

   // Realiza la Suma
   iResultado = iNumero1 + iNumero2;

   // Devuelve el Resultado
   return (iResultado);
}

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 34 - Funciones Parámetros por Default \n\n";


    // Llamo a la funcíón con los 2 parámetros
    cout << "Suma 10 + 35 :" << FnIntSuma2Numeros(10,35,9) << endl << endl;

    // Llamo a la funcíón con 1 solo parámetro
    cout << "Suma 45 mas el Valor por Default:" << FnIntSuma2Numeros(45,12) << endl << endl;

    // Llamo a la funcíón sin parámetros
    //cout << "Suma con valores por Default:" << FnIntSuma2Numeros() << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
