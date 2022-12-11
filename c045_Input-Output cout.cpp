/*

Curso de C++
Autor: JAOR
Clase 45 - Basic Input-Output cout

En estas clases siguientes, veremos la forma mas básica de interactuar
entre un usuario y una aplicación que es la ya utilizada salida
por la pantalla en modo consola; y la entrada de datos por teclado.

La Entrada y Salida de Datos en C++ se maneja a través del concepto
stream, los cuales simplemente son una secuencia consecutiva de bytes.
Estos bytes son información que fluye o se transmite a través de los
diversos dispositivos que existan en un equipo de cómputo, como lo
puede ser el teclado, el disco, una conexión de red, una unidad USB, etc..

Cuando se utiliza un stream para llevar información a la memoria principal
de una computadora; se dice que el stream realiza una OPERACIÓN DE INPUT,
(entrada); si el flujo de información, viaja de memoria principal a un
dispositivo como la pantalla, impresora, disco, etc., entonces se dice que
realiza una OPERACIÓN DE OUTPUT(Salida)

C++ declara y define cuatro objetos predefinidos de la Clase iostream, y que
son:

cout. Para realizar salida de información en donde la pantalla es el dispositivo standar.
cin.  Para realizar entrada de información, en donde el teclado es el dispositivo standar.
cerr. Para realizar salidas de mensajes de error al dispositivo standar; la pantalla.
clog. Similar a cerr, solo que la información es grabada en un archivo en disco.


El Operador <<.
Hemos utilizado en las diversas clases, el objeto cout y lo hemos utilizado con
el operador <<; el cual es un operador de inserción; que su función es, valga la
redundancia, insertar la información de su operando siguiente al stream correspondiente
al objeto.

El operador está sobrecargado (entendamos por el momento: "puede ser usado") para todos
los tipos estándar: char, char *, void *, int, long, short, bool, double y float.

cout.
El cout es un objeto de la clase iostream, el cual utiliza un stream el cual maneja
información la cual es dirigida directamente al flujo de salida standar, que como ya
se mencionó es la pantalla.

Su sintaxis de uso es:

cout << operando [ << operando << operando ...];

endl.
Es un stream manipulator. Es una función que se encarga de colocar un caracter de fin
de linea y de realizar un "flush" (vaciado) del stream.

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
  cout << "Clase 45 - Input-Output cout \n\n";

  int   entero    = 10;
  char  caracter  = 'c';
  char  cadena[]  = "Hola";
  float pifloat   = 3.1416;

  cout << "entero   = " << entero   << endl;
  cout << "caracter = " << caracter << endl;
  cout << "cadena   = " << cadena   << endl;
  cout << "pifloat  = " << pifloat  << endl;


  // Finaliza la Aplicación
  return 0;
}
