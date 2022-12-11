/*

Curso de C++
Autor: JAOR
Clase 50 - Apuntadores Aritmética

Como ya vimos anteriormente, un Apuntador es una variable que almacena la
dirección de memoria de otra variable.

Así como podemos realizar operaciones aritméticas con otros tipos de operandos,
con los apuntadores tambien podemos realizar ciertas operaciones.

Los operadores que podemos utilizar con los apuntadores son:++,--,+ y -.

Si observamos, lo que nos permite hacer una variable apuntador es realizar
sumas y restas; es decir; incrementar o decrementar una dirección.

Cuando incrementamos o decrementamos un apuntador, la dirección se modifica
de acuerdo al número de bytes, que ocupa el tipo de dato al que apunta.
Es decir. Si tenemos un apuntador de tipo char, y lo incrementamos en 1;
la dirección se incrementará en 1; ya que el tipo de dato al que apunta es
de 1.

*/

// Incluímos las librerías
#include <iostream>
//#include <iomanip>


// Definición de espacios de nombre
using namespace std;

// Declaramos la función main
int main ()
{

  // Mandamos un mensaje a la Pantalla
  cout << "Curso de C++ \n";
  cout << "Clase 50 - Apuntadores Aritmética \n\n";

  // Declara una variable entera y un caracter
  int       iEdad   = 30;
  short int siPeso  = 45;
  char      cLetra = 'x';

  // Declara un apuntador de Integer
  int  *pInt =  &iEdad;

  // Declara un apuntador de Integer
  short int  *psInt =  &siPeso;

  // Declara un apuntador de letra
  char *pChar = &cLetra;

  // Despliega el size of de la variable entera y de la variable char
  cout << "Sizeof variable       Integer : " << sizeof(iEdad)   << endl;
  cout << "Sizeof variable Short Integer : " << sizeof(siPeso)  << endl;
  cout << "Sizeof variable       Char    : " << sizeof(cLetra)  << endl;
  cout << endl;

  // Despliega las direcciones
  cout << "Dirección del Apuntador       Integer : " << pInt  << endl;
  cout << "Dirección del Apuntador Short Integer : " << psInt << endl;
  cout << "Dirección del Apuntador       Char    : " << hex << showbase << (long)pChar << endl;
  cout << endl;

  // Incrementamos los valores de los apuntadores
  pInt++;
  psInt++;
  pChar++;


  // Despliega las direcciones
  cout << "Dirección del Apuntador       Integer : " << pInt  << endl;
  cout << "Dirección del Apuntador Short Integer : " << psInt << endl;
  cout << "Dirección del Apuntador       Char    : " << hex << showbase << (long)pChar << endl;
  cout << endl;

  // Decrementamos los valores de los apuntadores
  pInt--;
  psInt--;
  pChar--;

  // Despliega las direcciones
  cout << "Dirección del Apuntador       Integer : " << pInt  << endl;
  cout << "Dirección del Apuntador Short Integer : " << psInt << endl;
  cout << "Dirección del Apuntador       Char    : " << hex << showbase << (long)pChar << endl;
  cout << endl;

  // Incrementamos los valores de los apuntadores
  pInt  = pInt  + 2 ;
  psInt = psInt - 2;
  pChar = pChar + 4;

  // Despliega las direcciones
  cout << "Dirección del Apuntador       Integer : " << pInt  << endl;
  cout << "Dirección del Apuntador Short Integer : " << psInt << endl;
  cout << "Dirección del Apuntador       Char    : " << hex << showbase << (long)pChar << endl;
  cout << endl;


  // Es posible realizar restas entre apuntadores
  cout << pInt      << endl;
  cout << pInt - 1  << endl;
  cout << pInt - 2  << endl;
  cout << pInt - (pInt - 2) << endl;
  cout << pInt - (pInt + 2) << endl;
  //  cout << pInt + (pInt +2) << endl;

  // Finaliza la Aplicación
  return 0;
}
