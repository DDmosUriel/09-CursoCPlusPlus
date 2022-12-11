/*

Curso de C++
Autor: JAOR
Clase 61 - Referencias Retornando

En esta clase veremos como retornar una referencia en una función
y veremos algo que no es muy usual en la programación y que es
asignar un valor a una función al momento de llamarla.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Funcion para Generar una Variable
int& FnGeneraVariable()
{
   // Declaramos una variable de tipo entero
   static int iVariable=10;
   int &rVariable=iVariable;

   cout << "Valor     :" <<  iVariable << endl;
   cout << "Dirección :" << &iVariable << endl;
   cout << endl;

   // Retorna la Referencia
   return rVariable;

}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 61 - Referencias como parámetros \n\n";


    // Modifico a través de la función
    FnGeneraVariable() = 999;

    // Genera una referencia en base a la función
    int& xDato = FnGeneraVariable();

    // Desplegando los valores
    cout << "El Valor de xDato :" <<  xDato << endl;
    cout << "La Direc de xDato :" << &xDato << endl;
    cout << endl;

    // Modifico a través de la referencia
    xDato = 123;

    // Desplegando los valores
    cout << "El Valor de xDato :" <<  xDato << endl;
    cout << "La Direc de xDato :" << &xDato << endl;
    cout << endl;


    // Declarando variable para verificar que falla cuando no static
    //int x=30;

    // Modifico a través de la función
    FnGeneraVariable() = 45;

    // Desplegando los valores
    cout << "El Valor de xDato :" << xDato << endl;
    cout << "La Direc de xDato :" << &xDato << endl;
    cout << endl;

    // Declarando variable para verificar que falla cuando no static
    //int y=40;

    // Desplegando los valores
    cout << "El Valor de xDato :" << xDato << endl;
    cout << "La Direc de xDato :" << &xDato << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;

}
