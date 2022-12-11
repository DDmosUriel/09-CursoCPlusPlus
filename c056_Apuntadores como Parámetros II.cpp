/*

Curso de C++
Autor: JAOR
Clase 56 - Apuntadores como Parámetros por Referencia

En esta clase veremos como pasar parámetros por referencia que son apuntadores;
esto significa que en la función SI es posible modificar su valor; que en este
caso es una dirección; y que hará que la variable original, quede modificada.

*/

// Incluímos las librerías
#include <iostream>


// Definición de espacios de nombre
using namespace std;


// Función que recibe un apuntador como parámetro por referencia
void FnTest(int **pInteger)
{

  // Declaramos una variable
  int iVariable=10;

  // Imprimimos el valor del Apuntador
  cout << "Contenido del Apuntador desde la Función       :" << **pInteger    << endl;
  cout << "Valor-dirección del Apuntador desde la Función :" <<  *pInteger    << endl << endl;

  // Modifico el contenido al que apunta
  **pInteger = 123;

  // Modifico su valor que es una dirección
  *pInteger = &iVariable;

  cout << "Contenido del Apuntador desde la Función       :" << **pInteger    << endl;
  cout << "Valor-dirección del Apuntador desde la Función :" <<  *pInteger    << endl << endl;

}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 56 - Apuntadores como Parámetros por Referencia \n\n";

    // Declaramos una variable entera
    int   intVariable=3000;
    int   *pInteger =&intVariable;

    cout << "Valor de la Variable Entera desde la Variable  :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador :" << *pInteger    << endl;
    cout << "Valor del Apuntador que es una dirección       :" <<  pInteger    << endl;
    cout << endl;

    // Llama a la Función
    FnTest(&pInteger);

    cout << "Valor de la Variable Entera desde la Variable  :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador :" << *pInteger    << endl;
    cout << "Valor del Apuntador que es una dirección       :" <<  pInteger    << endl;
    cout << endl;


    // Finaliza la Aplicación
    return 0;
}


