/*

Curso de C++
Autor: JAOR
Clase 53 - Apuntadores Arreglos de

Así como hemos visto que podemos declarar arreglos de los
diversos tipos de datos estudiados; tambien podemos declarar
arreglos de apuntadores.

En esta clase veremos como declarar un arreglo de apuntadores
y como acceder a cada uno de sus valores.

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
  cout << "Clase 53 - Apuntadores Arreglos de \n\n";

  // Declara una variable entera y un caracter
  int   iEdades[3]={100,200,300};
  int *piEdades[3]={NULL,NULL,NULL};

  // Ciclo para asignar direcciones del arreglo al arreglo de apuntadores
  for (int i = 0; i < 3; i++)
  {
      // Desplegamos la dirección y la asignamos
      cout << "Dirección y Valor de iEdades[" << i << "] = ";
      cout << &iEdades[i] << ":" << iEdades[i] << endl;
      piEdades[i] = &iEdades[i]; // assign the address of integer.
  }

  // Deja una línea
  cout << endl;

  // Ciclo para desplegar los valores de los apuntadores
  for (int i = 0; i < 3; i++)
  {
      cout << "Dirección y Valor de iEdades[" << i << "] = ";
      cout << piEdades[i] << ":" << *piEdades[i] << endl;
  }

  // Deja una línea
  cout << endl;

  // Ciclo para desplegar los valores de los apuntadores
  for (int i = 0; i < 3; i++)
  {
      cout << "Dirección y Valor de iEdades[" << i << "] = ";
      cout << piEdades[2]-i << ":" << *(piEdades[2]-i) << endl;
  }

  // Finaliza la Aplicación
  return 0;
}
