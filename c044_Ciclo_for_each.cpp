/*
Curso de C++
Autor: JAOR
Clase 44 - Ciclo for each

En esta clase veremos el ciclo for each específico
de C++.

Este ciclo, trabaja de igual forma que el ciclo
extendido; es decir; navegando a través de los
elementos de una colección de datos; pero es posible
especificar el rango sobre el cual se quiere trabajar.

Otra particularidad es que el manejo de los datos
accedidos, se realiza a través de una función.

La sintaxis de la función es la siguiente:

for_each (InputIterator first, InputIterator last, Function fn);

*/

// Incluímos las librerías
#include <iostream>     // Para usar cout
#include <algorithm>    // Para usar for_each
#include <vector>       // Para usar vector

// Definición de espacios de nombre
using namespace std;

// Función a llamar dentro del for each
void FnDespliegaDato (int &xDato)
{
  std::cout << ' ' << xDato;
  xDato=30;
  //std::cout << '>' << xDato;
}

// Declaramos la función main
int main ()
{

  // Mandamos un mensaje a la Pantalla
  cout << "Curso de C++ \n";
  cout << "Clase 44 - Vectores \n\n";

  // Declara el Vector de Edades
  vector<int> vecEdades;
  vecEdades.push_back(10);
  vecEdades.push_back(20);
  vecEdades.push_back(30);
  vecEdades.push_back(40);
  vecEdades.push_back(50);
  vecEdades.push_back(60);
  vecEdades.push_back(70);
  vecEdades.push_back(80);
  vecEdades.push_back(90);
  vecEdades.push_back(11);

  vector<int> vecEdades2;
  vecEdades2.push_back(110);
  vecEdades2.push_back(120);

  cout << "El Vector de Edades Contiene:";
  for_each (vecEdades2.begin(), vecEdades2.end(), FnDespliegaDato);
  std::cout << '\n';

  cout << "El Vector de Edades Contiene:";
  for_each (vecEdades2.begin(), vecEdades2.end(), FnDespliegaDato);
  std::cout << '\n';


  // Finaliza la Aplicación
  return 0;
}
