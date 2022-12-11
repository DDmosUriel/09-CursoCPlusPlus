/*

Curso de C++
Autor: JAOR
Clase 51 - Apuntadores y Arreglos

En esta clase veremos la relación estrecha que existe
entre un apuntador y un arreglo.

Un arreglo en realidad es un apuntador solo que es
constante; es decir que su dirección (su valor como
apuntador) no es modificable.

En esta clase veremos como podemos manejar la información
de un arreglo utilizando un apuntador.

*/

// Incluímos las librerías
#include <iostream>


// Definición de espacios de nombre
using namespace std;

// Declaramos la función main
int main ()
{

  // Mandamos un mensaje a la Pantalla
  cout << "Curso de C++ \n";
  cout << "Clase 51 - Apuntadores y Arreglos \n\n";

  // Declara una variable entera y un caracter
  int iEdades[3]={100,200,300};

  // Declara un apuntador de Integer
  int  *pInt = iEdades;



  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades    : " << iEdades   << endl;
  cout << "pInt       : " << pInt      << endl;
  cout << endl;

  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades[0] : " << iEdades[0]   << endl;
  cout << "*pInt      : " << *pInt        << endl;
  cout << endl;

  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades[1] : " << iEdades[1]   << endl;
  cout << "*(pInt+1)  : " << *(pInt+1)    << endl;
  cout << endl;

  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades[2] : " << iEdades[2]   << endl;
  cout << "*(pInt+2)  : " << *(pInt+2)    << endl;
  cout << endl;

  // Accedemos a una dirección no controlada
  cout << "iEdades[3] : " << iEdades[3]   << endl;
  cout << "*(pInt+3)  : " << *(pInt+3)    << endl;
  cout << endl;

  // Ciclo para acceder desde un apuntador
  for (int x=0; x<3; x++)
      cout << pInt + x << ":" << *(pInt + x) << endl;

  cout << pInt << endl;

  for (int x=0; x<3; x++)
  {
      cout << pInt << ":" << *pInt << endl;
      pInt++;
  }

  cout << pInt << endl;


  int iEdad[3];
  // Lo sigueinte no es válido porque intenta modificar la dirección,
  //iEdades = &iEdad;
  //iEdades[0]++; //No es valido incrementar la dirección

  // Finaliza la Aplicación
  return 0;
}
