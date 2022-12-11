/*

Curso de C++
Autor: JAOR
Clase 57 - Apuntadores Retornando

En clases anteriores, vimos que al declarar una función,
podemos indicar que valor retorna; y hacer que este sea
devuelto en la misma utilizando la palabra reservada return.

En esta clase veremos como podemos retornar un apuntador
en una función.

*/

// Incluímos las librerías
#include <iostream>


// Definición de espacios de nombre
using namespace std;


// Función que recibe un apuntador como parámetro por referencia
int* FnpIntTest()
{

  // Declaramos una variable
  int iVariable=10;
  int *pInt=&iVariable;

  cout << "Valor de la Variable                :" <<  iVariable  << endl;
  cout << "Valor del contenido del apuntador   :" << *pInt       << endl;
  cout << "Valor del apuntador                 :" <<  pInt       << endl;
  cout << endl;

  // Retorno el apuntador
  return pInt;
}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 57 - Apuntadores Retornando \n\n";

    // Declaramos una variable entera
    int x=90;
    int *pInteger=&x;

    cout << "Valor del contenido al que apunta  :" << *pInteger  << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    // Llamamos a la Función
    pInteger = FnpIntTest();

    cout << "Valor del contenido al que apunta  :" << *pInteger  << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    cout << "Valor del contenido al que apunta  :" << *pInteger  << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    // Llamamos a la Función
    pInteger = FnpIntTest();

    cout << "Valor del contenido al que apunta  :" << *pInteger  << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    cout << "Valor del contenido al que apunta  :" << *pInteger  << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;


    // Finaliza la Aplicación
    return 0;

}


