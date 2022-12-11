/*

Curso de C++
Autor: JAOR
Clase 46 - Basic Input-Output cin

cin.
Es un objeto de la clase iostream, el cual maneja un stream de datos
en el cual se recibirán datos desde el dispositivo de entrada standar, que
es el teclado.

El operador >>.
El objeto cin, es utilizado en conjunto con el operador de extracción >>
el cual su objetivo es obtener la información del dispositivo de entrada
y colocarla en el stream del objeto para despues depositarla en alguna
dirección de memoria correspondiente.

La sintaxis del objeto cin es similar a la del objeto cout:

cin >> variable [ << variable << variable ...];
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
  cout << "Clase 46 - Input-Output cin \n\n";

  int   entero    = 10;
  char  caracter  = 'c';
  char  cadena[]  = "Hola";
  float pifloat   = 3.1416;

  // Desplegando los Valores actuales de las Variables
  cout << "Desplegando los valores de las variables:" << endl;
  cout << "entero   = " << entero   << endl;
  cout << "caracter = " << caracter << endl;
  cout << "cadena   = " << cadena   << endl;
  cout << "pifloat  = " << pifloat  << endl << endl;

  // Leyendo cada una de las variables
  cout << "Captura un  Entero   : ";
  cin  >> entero;
  cout << "Captura un  Caracter : ";
  cin  >> caracter;
  cout << "Captura una Cadena   : ";
  cin  >> cadena;
  cout << "Captura un  float    : ";
  cin  >> pifloat;
  cout << endl;

  cout << "Desplegando de nuevo los valores de las variables:" << endl;
  cout << "entero   = " << entero   << endl;
  cout << "caracter = " << caracter << endl;
  cout << "cadena   = " << cadena   << endl;
  cout << "pifloat  = " << pifloat  << endl << endl;

  // Leo todos en una misma linea
  cin >> entero >> caracter >> cadena >> pifloat;

  cout << "Desplegando de nuevo los valores de las variables:" << endl;
  cout << "entero   = " << entero   << endl;
  cout << "caracter = " << caracter << endl;
  cout << "cadena   = " << cadena   << endl;
  cout << "pifloat  = " << pifloat  << endl << endl;

  // Finaliza la Aplicación
  return 0;
}
