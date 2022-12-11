/*

Curso de C++
Autor: JAOR
Clase 31 - Funciones Parámetros por Valor

VALOR.
Cuando se pasa un parámetro por valor, la función obtiene
una copia del parámetro, así que; si el parámetro es
modificado dentro de la función, el valor original queda
intacto.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Define la función
void FnParametroPorValor(int iPorValor)
{

   // Despliego el valor del Parámetro
   cout << "Valor del Parámetro por Valor dentro de la Función:" << iPorValor << endl;

   // Modifico el valor del parámetro
   iPorValor=99;

   // Despliego de nuevo el valor del Parámetro
   cout << "Valor del Parámetro por Valor dentro de la Función Modificado:" << iPorValor << endl;

}

// Función Principal
int main_31 ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 31 - Funciones Parámetros por Valor \n\n";

    // Defino Variable
    int iNumero=20;


    // Evaluando pase por valor
    cout << "Valor de Número antes de llamar a la función:" << iNumero << endl;
    FnParametroPorValor(iNumero);
    cout << "Valor de Número después de llamar a la función:" << iNumero << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
