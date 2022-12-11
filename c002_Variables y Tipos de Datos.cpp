/*

Curso de C++
Autor: JAOR
Clase 02 - Variables y Tipos de Datos

Una Variable es un lugar de memoria en el cual se almacena
información y se le asocia un nombre.

La información que se almacena en una variable, puede ser de
diferentes tipos.

Estos los los tipos que maneja C++

bool.
Para valores booleanos; es decir true y false.

char, wchart_t.
Para caracteres; char para el ascii utilizando 1 Byte y wchar_t
para manejar caracteres UNICODE con 2-4 bytes.

short, int y long.
Para números enteros.

float,double y long double.
Para números en punto flotante

Si observamos, con respecto a C, se agregan bool y wchart_t

Los Tipos de Datos, pueden ser modificados utilizando los
modificadores de tipo; los cuales son los mismos de C:

-signed
-unsigned
-short
-long


Acá esta la tabla de todas las combinaciones posibles

---------------------------------------------------------------------
Tipo 	            Bytes           Rango
---------------------------------------------------------------------
char 	            1byte 	        -127 to 127 or 0 to 255
unsigned char 	    1byte 	        0 to 255
signed char 	    1byte 	        -127 to 127
int 	            4bytes 	        -2147483648 to 2147483647
unsigned int 	    4bytes 	        0 to 4294967295
signed int 	        4bytes 	        -2147483648 to 2147483647
short int 	        2bytes 	        -32768 to 32767
unsigned short int 	2bytes    	    0 to 65,535
signed short int 	2bytes 	        -32768 to 32767
long int 	        4bytes 	        -2,147,483,647 to 2,147,483,647
signed long int 	4bytes 	        same as long int
unsigned long int 	4bytes 	        0 to 4,294,967,295
float 	            4bytes 	        +/- 3.4e +/- 38 (~7 digits)
double 	            8bytes 	        +/- 1.7e +/- 308 (~15 digits)
long double 	    8bytes 	        +/- 1.7e +/- 308 (~15 digits)
wchar_t 	        2 or 4 bytes 	1 wide character

Estos valores pueden variar dependiendo del Compilador y Sistema Operativo.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{
   // Se despliega el Nombre del Curso y la Clase
   cout << "Curso de C++ \n";
   cout << "Clase 02 - Variables y Tipos de Datos \n";

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

   /* Se finaliza la aplicación */
   return 0;
}
