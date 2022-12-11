/*

Curso de C++
Autor: JAOR
Clase 35 - Funciones SobreCarga

C++ nos permite sobrecargar una función.
¿Que significa sobrecargar una función?

Es poder definir 2 o mas funciones con el mismo
nombre, pero con distintos parámetros, lo cual hace
que el Compilador sepa distinguir a cada una de ellas.

Cuando se llama a una función que se encuentra
sobrecargada, el compilador sabe cual función utilizar
de acuerdo a los parámetros con los cuales sea
llamada.


*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Suma
int FnSuma(int iNumero1)
{
   // Variable para el resultado
   int iResultado;

   // Realiza la Suma
   iResultado = iNumero1 + 10;

   // Devuelve el Resultado
   return (iResultado);
}

// Función Suma
int FnSuma(int iNumero1,int iNumero2)
{
   // Variable para el resultado
   int iResultado;

   // Realiza la Suma
   iResultado = iNumero1 + iNumero2 + 10;

   // Devuelve el Resultado
   return (iResultado);
}


// Función Suma
float FnSuma(float fNumero1)
{
   // Variable para el resultado
   float fResultado;

   // Realiza la Suma
   fResultado = fNumero1 + 100.10;

   // Devuelve el Resultado
   return (fResultado);
}


// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 35 - Funciones SobreCarga \n\n";

    // Declaro a las variables a utilizar
    int iNum1=24;
    int iNum2=45;
    float fNumero=14.50;

    // Llamo a la primera función
    cout << "Llamo a la primera Función Suma: " << FnSuma(iNum1) << endl << endl;
    cout << "Llamo a la primera Función Suma: " << FnSuma(24) << endl << endl;

    // Llamo a la segunda función
    cout << "LLamo a la segunda función Suma: " << FnSuma(iNum1,iNum2) << endl << endl;
    cout << "LLamo a la segunda función Suma: " << FnSuma(24,45) << endl << endl;

    // Llamo a la tercera función
    cout << "LLamo a la tercera función Suma: " << FnSuma(fNumero) << endl << endl;
    cout << "LLamo a la tercera función Suma: " << FnSuma(14.50f) << endl << endl;
    cout << "LLamo a la tercera función Suma: " << FnSuma(14.50f,20) << endl << endl;
    cout << "LLamo a la tercera función Suma: " << FnSuma(fNumero,20) << endl << endl;
    cout << "LLamo a la tercera función Suma: " << FnSuma('A',20) << endl << endl;

    /* Se finaliza la aplicación */
    return 0;
}
