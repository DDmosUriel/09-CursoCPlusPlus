/*

Curso de C++
Autor: JAOR
Clase 58 - Apuntadores Retornando II

En esta clase veremos como retornar la dirección de un arreglo
y como usarlo desde donde ha sido llamado.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función que recibe un apuntador como parámetro por referencia
int* FnpIntArrTest()
{

  // Declaramos una variable
  static int iVariable[3]={10,20,30};
  //int *pInt=iVariable;
  int *pInt=&iVariable[0];

  cout << "Valor de la Variable Arreglo        :" << iVariable[0]  << "."
                                                  << iVariable[1]  << "."
                                                  << iVariable[2]  << endl;
  cout << "Valor del contenido del apuntador   :" << *pInt       << endl;
  cout << "Valor del apuntador                 :" <<  pInt       << endl;
  cout << endl;

  // Retorno el apuntador
  return pInt;
  //return iVariable;
}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 58 - Apuntadores Retornando II \n\n";

    // Declaramos una variable entera
    int x=90;
    int *pInteger=&x;

    cout << "Valor del contenido al que apunta  :" << *pInteger  << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    // Llamamos a la Función
    pInteger = FnpIntArrTest();

    cout << "Valor del contenido al que apunta  :" << *pInteger     << "."
                                                   << *(pInteger+1) << "."
                                                   << *(pInteger+2) << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    cout << "Valor del contenido al que apunta  :" << *pInteger     << "."
                                                   << *(pInteger+1) << "."
                                                   << *(pInteger+2) << endl;
    cout << "Valor del apuntador                :" <<  pInteger  << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;

}


