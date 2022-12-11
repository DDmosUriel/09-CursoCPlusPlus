/*

Curso de C++
Autor: JAOR
Clase 04 - Literales

Se conoce como literales, a los valores que podemos asignar
a las variables según el tipo de dato.

LITERALES BOOL

Solo existe 2 valores posibles: true y false;

LITERALES INTEGER

Una literal Entera, puede ser representada de 3 formas: en
decimal, octal y hexadecimal.

Las literales en octal, deben de ir precedidas de un "0";
las hexadecimales de "0x". Ejemplos:

017
0x17
17

LITERALES EN PUNTO FLOTANTE
Las literales en Punto Flotante, tienen una parte entera(opcional),
un "." y una parte decimal. Opcionalmente puede ser
seguida de una letra "e" y un número indicando el exponente.
Ejemplos:

3.1416
3.1416e3
0.15
.10


LITERALES CARACTER
Las literales caracter, son delimitadas por comillas simples,(')
Si está precedida por una "L"; entonces se trata de una literal
del tipo wchar_t.
Una literal caracter, puedes ser de 3 tipos:
- Un caracter sencillo:'x',L'x';
- Una secuencia de escape: '\n','\t';
- Un caracter universal:"\u02C0";

LITERALES STRING
Las literales cadena, son delimitadas por comillas dobles,(")
y las hemos utilizado para desplegar mensajes.
No hemos visto al momento un tipo de dato que nos permite
almacenar una cadena, lo veremos mas adelante. Ejemplo

"Hola Mundo"


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
   cout << "Clase 04 - Literales"<<endl<<endl;

   // Desplegando los valores de las variables
   cout << "Desplegando Literales Booleanas"<< endl;
   cout << "FALSE       :"<<     false << endl;
   cout << "TRUE        :"<<      true << endl<<endl;

   cout << "Desplegando Literales Enteras"<< endl;
   cout << "Decimal     :"<<        19 << endl;
   cout << "Octal       :"<<       023 << endl;
   cout << "Hexadecimal :"<<      0x13 << endl<<endl;

   cout << "Desplegando Literales en Punto Flotante"<< endl;
   cout <<   3.1416   << endl;
   cout <<   3.1416e3 << endl;
   cout << 314.16e-2  << endl;
   cout <<   0.16     << endl;
   cout <<    .16     << endl<<endl;

   cout << "Desplegando Literales Caracter"<< endl;
   cout << "Literal Caracter  x           :"<<       'x' << endl;
   cout << "Literal Caracter  \\           :"<<      '\\' << endl;
   cout << "Literal Caracter  \'          :"<<      '\'' << endl;
   cout << "Literal Caracter BackSpace    :"<<      '\b' << "Hola" << endl;
   cout << "Literal Caracter Tab          :"<<      '\t' << "Hola" << endl;
   cout << "Literal Caracter Return       :"<<      '\r' << "Hola" << endl;
   cout << "Literal Caracter Universal    :"<<  "\u00BE" << endl;
   cout << "Literal Caracter Octal        :"<<     '\50' << endl;
   cout << "Literal Caracter Hexadecimal  :"<<    '\x50' << endl<<endl;
   cout << "Desplegando Literales Cadena"<< endl;
   cout << "Hola Mundo"  << endl;



    /* Se finaliza la aplicación */
   return 0;
}
