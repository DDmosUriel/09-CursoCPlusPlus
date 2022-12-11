/*

Curso de C++
Autor: JAOR
Clase 33 - Funciones Parámetros por Apuntador

APUNTADOR.
Cuando se define un parámetro por apuntador, se está solicitando
la dirección original, por lo que también de esta forma si modifica
el valor del parámetro, se modifica realmente el original.
Tambien es posible declarar una variable de tipo apuntador y
usarla como parámetro.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Define la función
void FnParametroPorApuntador(int *iPorApuntador)
{

   // Despliego el valor del Parámetro
   cout << "Valor del Parámetro por Apuntador dentro de la Función:" << *iPorApuntador << endl;

   // Modifico el valor del parámetro
   *iPorApuntador=55;

   // Despliego de nuevo el valor del Parámetro
   cout << "Valor del Parámetro por Apuntador dentro de la Función Modificado:" << *iPorApuntador << endl;

}

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 33 - Funciones Parámetros por Apuntador \n\n";

    // Defino Variable
    int iNumero=20;

    // Defino apuntador a Variable Int
    int *iValor;
    *iValor=23;

    // Evaluando pase por Apuntador
    cout << "Valor de Número antes de llamar a la función:" << iNumero << endl;
    FnParametroPorApuntador(&iNumero);
    cout << "Valor de Número después de llamar a la función:" << iNumero << endl << endl;

    // Evaluando pase por Apuntador con Variable Apuntador
    cout << "Valor de iValor antes de llamar a la función:" << *iValor << endl;
    FnParametroPorApuntador(iValor);
    cout << "Valor de iValor después de llamar a la función:" << *iValor << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
