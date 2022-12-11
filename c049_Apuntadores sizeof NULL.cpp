/*

Curso de C++
Autor: JAOR
Clase 49 - Apuntadores sizeof NULL

Ya vimos que un Apuntador es una variable que almacena la dirección de memoria
de otra variable. Esto implica que al ser una variable, tambien está ocupando
una dirección de memoria para almacenar la dirección.

En esta clase veremos con el operador sizeof nos indica, cuantos bytes utiliza
un apuntador, para almacenar la dirección de otra variable.

Es buena práctica que cuando definamos un apuntador se inicialice con NULL; que
es una constante definida con el valor de 0 y que asigna este valor.

Cuando un Apuntador tiene asignado el valor de 0 se dice que es un Apuntador Nulo.

*/

// Incluímos las librerías
#include <iostream>     // Para usar cout

// Definición de espacios de nombre
using namespace std;

// Declaramos la función main
int main ()
{

  // Mandamos un mensaje a la Pantalla
  cout << "Curso de C++ \n";
  cout << "Clase 49 - Apuntadores sizeof NULL \n\n";

  // Declaro apuntadores
  int    *intApuntador;
  char   *chrApuntador;
  double *douApuntador;
  float  *floApuntador;

  // Desplegando el sizeof
  cout << "Tamaño en bytes del intApuntador :"<< sizeof(intApuntador) << endl;
  cout << "Tamaño en bytes del chrApuntador :"<< sizeof(chrApuntador) << endl;
  cout << "Tamaño en bytes del douApuntador :"<< sizeof(douApuntador) << endl;
  cout << "Tamaño en bytes del floApuntador :"<< sizeof(floApuntador) << endl;
  cout << endl << endl;

  // Desplegando los valores de los apuntadores
  cout << "El valor de intApuntador :" << intApuntador << endl;
  cout << "El valor de chrApuntador :" << chrApuntador << endl;
  cout << "El valor de douApuntador :" << douApuntador << endl;
  cout << "El valor de floApuntador :" << floApuntador << endl << endl;

  // Veririca si no es nulo
  if (intApuntador)
     cout << "El intApuntador Contiene Dirección" << endl << endl;
  else
     cout << "El intApuntador es Nulo" << endl << endl;

  // Asignándoles el valor de NULL
  intApuntador = NULL;
  chrApuntador = NULL;
  douApuntador = NULL;
  floApuntador = NULL;

  // Desplegando los valores de los apuntadores
  cout << "El valor de intApuntador :" << (long)intApuntador << endl;
  cout << "El valor de chrApuntador :" << (long)chrApuntador << endl;
  cout << "El valor de douApuntador :" << (long)douApuntador << endl;
  cout << "El valor de floApuntador :" << (long)floApuntador << endl << endl;

  // Verifica si no es nulo
  if (intApuntador)
     cout << "El intApuntador Contiene Dirección" << endl << endl;
  else
     cout << "El intApuntador es Nulo" << endl << endl;

  // Finaliza la Aplicación
  return 0;
}
