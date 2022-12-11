/*

Curso de C++
Autor: JAOR
Clase 32 - Funciones Parámetros por Referencia

REFERENCIA.
Cuando se pasa un parámetro por referencia, se solicita
la copia de la dirección de la variable; por lo que al tener
la dirección, si se modifica la variable, se modifica el
valor de la variable original.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Define la función
void FnParametroPorReferencia(int &iPorReferencia)
{

   // Despliego el valor del Parámetro
   cout << "Valor del Parámetro Por Referencia dentro de la Función:" << iPorReferencia << endl;

   // Modifico el valor del parámetro
   iPorReferencia=iPorReferencia * 2;

   // Despliego de nuevo el valor del Parámetro
   cout << "Valor del Parámetro Por Referencia dentro de la Función Modificado:" << iPorReferencia << endl;

}


// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 32 - Funciones Parámetros por Referencia \n\n";

    // Defino Variable
    int iNumero=20;

    // Evaluando pase por Referencia
    cout << "Valor de Número antes de llamar a la función:" << iNumero << endl;
    FnParametroPorReferencia(iNumero);
    cout << "Valor de Número después de llamar a la función:" << iNumero << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
