/*

Curso de C++
Autor: JAOR
Clase 47 - Basic Input-Output cerr clog

cerr.
El objeto predefinido cerr es una instancia de la clase iostream .
Utiliza el stream standar de salida, que como ya se ha mencionado anteriormente
es la pantalla, y lo vacía inmediatamente, cada vez que es utilizado.

El objeto cerr también se utiliza en conjunción con el operador de inserción <<,
tal y como lo utiliza el objeto cout.

clog.
El objeto predefinido clog, es similar a cerr; solo que en este
caso, la información enviada al stream; es mandada al dispositivo de salida;
es decir a la pantalla; hasta que el buffer se haya llenado; o a menos que se
ejecute la función flush.

El objeto clog también se utiliza en conjunción con el operador de inserción <<,
tal y como lo utiliza el objeto cout.


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
  cout << "Clase 47 - Input-Output cerr \n\n";

  char strErrorEntrada[] = "No fue posible leer el archivo ...";
  cerr << "Error del Sistema : " << endl << strErrorEntrada << endl << endl;

  clog << "Error del Sistema : " << endl << strErrorEntrada << endl;

  // Obligamos a liberar
  clog.flush();

  // Finaliza la Aplicación
  return 0;
}
