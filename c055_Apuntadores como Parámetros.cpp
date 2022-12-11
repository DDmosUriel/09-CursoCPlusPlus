/*

Curso de C++
Autor: JAOR
Clase 55 - Apuntadores como Parámetros por Valor

En esta clase veremos como pasar parámetros por valor que son apuntadores;
esto significa que en la función es posible modificar su valor; que en este
caso es su dirección; pero que la variable original quedará intacta.

Veremos como podemos modificar el valor hacia donde apuntan, tal y como
lo hemos visto anteriormente.

*/

// Incluímos las librerías
#include <iostream>


// Definición de espacios de nombre
using namespace std;


// Función que recibe un apuntador como parámetro
void FnTest(int *pInteger)
{

  // Declaramos una variable
  int iVariable=10;

  // Imprimimos el valor del Apuntador
  cout << "Contenido del Apuntador desde la Función       :" << *pInteger    << endl;
  cout << "Valor-dirección del Apuntador desde la Función :" <<  pInteger    << endl << endl;

  // Modifico el contenido al que apunta
  *pInteger = 123;

  // Modifico su valor que es una dirección
  pInteger = &iVariable;

  cout << "Contenido del Apuntador desde la Función       :" << *pInteger    << endl;
  cout << "Valor-dirección del Apuntador desde la Función :" <<  pInteger    << endl << endl;

}


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 55 - Apuntadores como Parámetros por Valor \n\n";

    // Declaramos una variable entera
    int   intVariable=3000;
    int   *pInteger =&intVariable;

    cout << "Valor de la Variable Entera desde la Variable  :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador :" << *pInteger    << endl;
    cout << "Valor del Apuntador que es una dirección       :" <<  pInteger    << endl;
    cout << endl;

    // Llama a la Función
    //FnTest(pInteger);
    FnTest(&intVariable);

    cout << "Valor de la Variable Entera desde la Variable  :" << intVariable  << endl;
    cout << "Valor de la Variable Entera desde el Apuntador :" << *pInteger    << endl;
    cout << "Valor del Apuntador que es una dirección       :" <<  pInteger    << endl;
    cout << endl;


    // Finaliza la Aplicación
    return 0;
}


