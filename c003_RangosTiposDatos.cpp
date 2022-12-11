/*

Curso de C++
Autor: JAOR
Clase 03 - Constantes para Rangos de Tipos de Datos

En esta clase veremos como C++ nos permite acceder
a los rangos de los Tipos de Datos a través de
Constantes

A continuación se muestran las constantes con los
Límites por tipo

CHAR_BIT	Número de bits en un objeto char (byte)	8 o mayor
SCHAR_MIN	Valor mínimo de un objeto de tipo signed char
SCHAR_MAX	Valor máximo de un objeto de tipo signed char
UCHAR_MAX	Valor máximo de un objeto de tipo unsigned char
CHAR_MIN	Valor mínimo de un objeto de tipo char
CHAR_MAX	Valor mínimo de un objeto de tipo char (SCHAR_MAX o UCHAR_MAX)
MB_LEN_MAX	Máximo número de bytes en un caracter multibyte
SHRT_MIN	Valor mínimo de un objeto de tipo short int
SHRT_MAX	Valor máximo de un objeto de tipo short int
USHRT_MAX	Valor máximo de un objeto de tipo unsigned short int
INT_MIN	    Valor mínimo de un objeto de tipo int
INT_MAX	    Valor máximo de un objeto de tipo int
UINT_MAX	Valor máximo de un objeto de tipo unsigned int
LONG_MIN	Valor mínimo de un objeto de tipo long int
LONG_MAX	Valor máximo de un objeto de tipo long int
ULONG_MAX	Valor máximo de un objeto de tipo unsigned long int
LLONG_MIN	Valor mínimo de un objeto de tipo long long int
LLONG_MAX	Valor máximo de un objeto de tipo long long int
ULLONG_MAX	Valor mínimo de un objeto de tipo unsigned long long int


*/

// Inclusión de Librerías
#include <iostream>

// Librería para las constantes de los límites
#include <climits>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{
   // Se despliega el Nombre del Curso y la Clase
   cout << "Curso de C++ \n";
   cout << "Clase 03 - Constantes para Rangos de Tipos de Datos"<<endl<<endl;

   cout << "CHAR_BIT  : " <<CHAR_BIT << endl;
   cout << "CHAR_MIN  : " <<CHAR_MIN << endl;
   cout << "CHAR_MAX  : " <<CHAR_MAX << endl;
   cout << "SHRT_MIN  : " <<SHRT_MIN << endl;
   cout << "SHRT_MAX  : " <<SHRT_MAX << endl;
   cout << "USHRT_MAX : " <<USHRT_MAX << endl;
   cout << "INT_MIN   : " <<INT_MIN << endl;
   cout << "INT_MAX   : " <<INT_MAX << endl;
   cout << "UINT_MAX  : " <<UINT_MAX << endl;
   cout << "LONG_MIN  : " <<LONG_MIN << endl;
   cout << "LONG_MAX  : " <<LONG_MAX << endl;
   cout << "ULONG_MAX : " <<ULONG_MAX << endl;
   cout << "LLONG_MIN  : " <<LLONG_MIN << endl;
   cout << "LLONG_MAX  : " <<LLONG_MAX << endl;
   cout << "ULLONG_MAX : " <<ULLONG_MAX << endl;

   /* Se finaliza la aplicación */
   return 0;
}
