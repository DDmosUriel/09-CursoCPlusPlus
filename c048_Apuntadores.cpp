/*

Curso de C++
Autor: JAOR
Clase 48 - Apuntadores

Un Apuntador es una variable que almacena la dirección de memoria
de otra variable.

Cuando definimos un apuntador, tenemos que indicar el tipo de dato
de la variable, cuya dirección va a almacenar.

La sintaxis para declarar un apuntador es la siguiente:
tipo_dato *variable;

tipo_dato.
Es el tipo de dato de la variable de la cual se va
a almacenar su dirección.

*.
Operador que se utiliza para indicar que la variable es un apuntador.

variable.
El nombre de la variable.

Ejemplos:

int    *intApuntador;
char   *chrApuntador;
double *douApuntador;
float  *floApuntador;

Una vez que ya tenemos un apuntador, podemos asignarle la dirección
de una variable, utilizando el operador &, tal y como se observa en el
siguiente ejemplo:

// Declaro variable Entera
int iEdad=30;

// Declaro apuntador a Integer
int *intApuntador;

// Asigno la dirección de la variable entera al apuntador
intApuntador = &var;

Lo anterior tambien se pudo haber realizado al momento de definir
int *intApuntador=&iEdad;

Con el Apuntador, podemos desplegar su valor, es decir; la dirección
de memoria de la variable; y tambien podemos desplegar el valor de
la variable de la cual tiene su dirección.

// Despliega la dirección que contiene
cout << intApuntador:

// Desplega el contenido de la dirección que contiene o a la que apunta
cout << *intApuntador;


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
  cout << "Clase 48 - Apuntadores \n\n";

  // Declaro variable Entera
  int iEdad=30;

  // Declaro apuntador a Integer
  //int *intApuntador;
  int *intApuntador=&iEdad;

  // Asigno la dirección de la variable entera al apuntador
  //intApuntador = &iEdad;

  cout << "Desplegando Dirección de la Variable Entera desde la misma Variable:";
  cout << &iEdad << endl << endl;

  cout << "Desplegando Dirección de la Variable Entera desde el Apuntador     :";
  cout << intApuntador << endl << endl;

  cout << "Desplegando Contenido de la Variable Entera desde la misma Variable:";
  cout << iEdad  << endl << endl;

  cout << "Desplegando Contenido de la Variable Entera desde el Apuntador     :";
  cout << *intApuntador << endl << endl;

  // Modifico el valor de la variable Entera
  iEdad=33;

  cout << "Desplegando Dirección de la Variable Entera desde la misma Variable:";
  cout << &iEdad << endl << endl;

  cout << "Desplegando Dirección de la Variable Entera desde el Apuntador     :";
  cout << intApuntador << endl << endl;

  cout << "Desplegando Contenido de la Variable Entera desde la misma Variable:";
  cout << iEdad  << endl << endl;

  cout << "Desplegando Contenido de la Variable Entera desde el Apuntador     :";
  cout << *intApuntador << endl << endl;

  // Modifico el contenido de la Variable desde el Apuntador
  *intApuntador = 45;

  cout << "Desplegando Dirección de la Variable Entera desde la misma Variable:";
  cout << &iEdad << endl << endl;

  cout << "Desplegando Dirección de la Variable Entera desde el Apuntador     :";
  cout << intApuntador << endl << endl;

  cout << "Desplegando Contenido de la Variable Entera desde la misma Variable:";
  cout << iEdad  << endl << endl;

  cout << "Desplegando Contenido de la Variable Entera desde el Apuntador     :";
  cout << *intApuntador << endl << endl;

  // Definiendo Variables
  char   *chrApuntador;
  double *douApuntador;
  float  *floApuntador;

  // Desplegando el sizeof
  cout << "Tamaño en bytes del intApuntador :"<< sizeof(intApuntador) << endl;
  cout << "Tamaño en bytes del chrApuntador :"<< sizeof(chrApuntador) << endl;
  cout << "Tamaño en bytes del douApuntador :"<< sizeof(douApuntador) << endl;
  cout << "Tamaño en bytes del floApuntador :"<< sizeof(floApuntador) << endl;




  // Finaliza la Aplicación
  return 0;
}
