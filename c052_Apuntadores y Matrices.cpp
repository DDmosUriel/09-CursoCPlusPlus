/*

Curso de C++
Autor: JAOR
Clase 52 - Apuntadores y Matrices

En esta clase veremos la similitud entre
los apuntadores y las matrices, las cuales
analizaremos que son un arreglo de apuntadores.

Veremos como acceder a los elementos de una
matriz a través de un apuntador; y ver como en
una matriz tenemos mas de un elemento al cual
podemos manejar como un apuntador.

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
  cout << "Clase 52 - Apuntadores y Matrices \n\n";

  // Declara una variable entera y un caracter
  int iEdades[3][2]={100,200,300,40,50,60};

  // Columna      0    1
  // -------------------
  // Renglon 0 | 100 200
  // Renglon 1 | 300  40
  // Renglon 2 |  50  60

  // Declara un apuntador de Integer
  int  *pInt = iEdades[0];



  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades     : " <<  iEdades      << endl;
  cout << "pInt        : " <<  pInt         << endl;
  cout << "iEdades[0]  : " <<  iEdades[0]   << endl;
  cout << "iEdades[1]  : " <<  iEdades[1]   << endl;
  cout << "iEdades[2]  : " <<  iEdades[2]   << endl;
  cout << "*iEdades[0] : " << *iEdades[0]   << endl;
  cout << "*iEdades[1] : " << *iEdades[1]   << endl;
  cout << "*iEdades[2] : " << *iEdades[2]   << endl;
  cout << endl;

  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades[0][0] : " << iEdades[0][0]   << endl;
  cout << "*pInt         : " << *pInt        << endl;
  cout << endl;

  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades[0][1] : " << iEdades[0][1]   << endl;
  cout << "*(pInt+1)     : " << *(pInt+1)    << endl;
  cout << endl;

  // Desplegamos iEdades y vemos que lo que despliega es una dirección
  cout << "iEdades[1][0] : " << iEdades[1][0]   << endl;
  cout << "*(pInt+2)     : " << *(pInt+2)    << endl;
  cout << endl;

  // Accedemos a una dirección no controlada
  cout << "iEdades[1][1] : " << iEdades[1][1]   << endl;
  cout << "*(pInt+3)     : " << *(pInt+3)    << endl;
  cout << endl;

  // Ciclo para acceder desde un apuntador
  for (int x=0; x<6; x++)
      cout << pInt + x << ":" << *(pInt + x) << endl;

  int intRenglon;
  int intColumna;

  // Columna      0    1
  // -------------------
  // Renglon 0 | 100 200
  // Renglon 1 | 300  40
  // Renglon 2 |  50  60

  intRenglon=0;
  intColumna=0;

  // Formula para acceder a través de apuntadores
  cout << iEdades[intRenglon][intColumna] << endl;
  cout << *(pInt + (intRenglon*2) + intColumna) << endl;


  intRenglon=2;
  intColumna=1;

  // Formula para acceder a través de apuntadores
  cout << iEdades[intRenglon][intColumna] << endl;
  cout << *(pInt + (intRenglon*2) + intColumna) << endl;

  // Finaliza la Aplicación
  return 0;
}
