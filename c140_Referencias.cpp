/*

Curso de C++
Autor: JAOR
Clase 140 - Referencia

Una variable para guardar la dirección de memoria de otra variable
y poder acceder directamente a ella

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
  cout << "Clase 140 - Referencias \n\n";

  // Declaro variable Entera
  int iEdad=30;

  // Declaro apuntador a Integer
  int *intApuntador = &iEdad;

  // Creo una referencia
  int &intReferencia = iEdad;

  cout << "Contenido desde la Variable      :";
  cout << iEdad  << endl << endl;

  cout << "Contenido desde el Apuntador     :";
  cout << *intApuntador << endl << endl;

  cout << "Contenido desde la Referencia    :";
  cout << intReferencia << endl << endl;

  cout << "Dirección desde la misma Variable:";
  cout << &iEdad << endl << endl;

  cout << "Dirección desde el Apuntador     :";
  cout << intApuntador << endl << endl;

  cout << "Dirección desde la Referecia     :";
  cout << &intReferencia << endl << endl;


  // Modifico el valor de la variable Entera
  iEdad = 33;

  cout << "Contenido desde la Variable      :";
  cout << iEdad  << endl << endl;

  cout << "Contenido desde el Apuntador     :";
  cout << *intApuntador << endl << endl;

  cout << "Contenido desde la Referencia    :";
  cout << intReferencia << endl << endl;

  // Modifico el contenido de la Variable desde la Referencia
  intReferencia = 45;

  cout << "Contenido desde la Variable      :";
  cout << iEdad  << endl << endl;

  cout << "Contenido desde el Apuntador     :";
  cout << *intApuntador << endl << endl;

  cout << "Contenido desde la Referencia    :";
  cout << intReferencia << endl << endl;

  
  // Desplegando el sizeof
  cout << "Tamaño en bytes de Variable  :"<< sizeof(iEdad) << endl;
  cout << "Tamaño en bytes de Apuntador :"<< sizeof(intApuntador) << endl;
  cout << "Tamaño en bytes de Referencia:"<< sizeof(intReferencia) << endl;


  // Finaliza la Aplicación
  return 0;
}
