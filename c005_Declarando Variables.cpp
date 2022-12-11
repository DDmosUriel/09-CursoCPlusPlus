/*

Curso de C++
Autor: JAOR
Clase 05 - Declarando Variables

Ahora que ya hemos visto los tipos de datos,
y las literales correspondientes a cada uno
de ellos, veremos como declarar una variable
y como asignarle valores utilizando las literales.

Recordemos que una variables es un lugar en donde
vamos a poder almacenar algo, del tipo de dato que
indiquemos.

Los Nombres de las Variables deben seguir las siguientes
reglas:

- El primer caracter debe ser una letra o un underscore(_);
- Contener letras(sin acento),núeros o underscore's (_).
- No hay restricciones en la longitud del nombre.
- No puede haber una variable similar a una palabra reservada.

La sintaxis para declarar una variable es la siguiente:

tipo lista_de_variables;

tipo. indica el tipo de dato (o clase esto lo veremos
mas adelante).

lista de variables. nombres de las variables que se
van a crear, separadas cada una de ellas por ",".

Ejemplos:

int  i, j, k;
char c, ch;
float f, salary;
double d;

Se recomienda que cuando se declare una variable,
se indique con un prefijo, el tipo de dato de la
variable y un nombre que indique para que se va
a utilizar la variable. A esto se le conoce como
estándares de codificación. Ejemplo:

int   iEdad;
char  cTecla;
float fPeso;


A las variables se les puede asignar un valor al
momento de declararlas; a esto se le conoce como
inicializarlas. Para realizar esto se coloca la
variable seguida de un símbolo de "=" y posteriormente
la literal o valor que se le asigna. Ejemplo:

int    iEdad = 34, iSuma=0;
char   cVocal ='A';
float  fPeso = 82.5, fEstatura=1.82;


*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{

   // Se recomienda que las variables se declaren al inicio de la función
   int     iEdad = 34, iSuma=0+iEdad-30;
   char    cVocal ='A';
   wchar_t wcUniversal='\u00BE';
   string  sUniversal="\u00BE";
   bool    bSalida=true;
   float   fPeso = 82.5, fEstatura=1.82;

   // Se despliega el Nombre del Curso y la Clase
   cout << "Curso de C++ \n";
   cout << "Clase 05 - Declarando Variables"<<endl<<endl;

   // Desplegando los valores de las variables
   cout << "Desplegando las Variables"   << endl;
   cout << "iEdad       :"<< iEdad       << endl;
   cout << "cVocal      :"<< cVocal      << endl;
   cout << "wcUniversal :"<< wcUniversal << endl;
   cout << "sUniversal  :"<< sUniversal  << endl;
   cout << "iSuma       :"<< iSuma       << endl;
   cout << "bSalida     :"<< bSalida     << endl;
   cout << "cVocal      :"<< cVocal      << endl;
   cout << "fPeso       :"<< fPeso       << endl;
   cout << "fEstatura   :"<< fEstatura   << endl<<endl;

   // Modificamos las Variables
   iEdad = 50;
   bSalida = false;
   iSuma = iEdad -45;
   cVocal = 'B';
   wcUniversal=wcUniversal-1;
   sUniversal="\u00BD";
   fPeso = fPeso -iEdad;
   fEstatura = fEstatura -1;

   // Desplegando los valores de las variables
   cout << "Desplegando las Variables"    << endl;
   cout << "iEdad     :"<< iEdad          << endl;
   cout << "wcUniversal :"<< wcUniversal << endl;
   cout << "sUniversal:"<< sUniversal     << endl;
   cout << "bSalida   :"<< bSalida        << endl;
   cout << "iSuma     :"<< iSuma          << endl;
   cout << "iSuma     :"<< iSuma + cVocal << endl;
   cout << "cVocal    :"<< cVocal         << endl;
   cout << "cVocal    :"<< cVocal+1       << endl;
   cout << "cVocal    :"<< char(cVocal+1) << endl;
   cout << "fPeso     :"<< fPeso          << endl;
   cout << "fEstatura :"<< fEstatura      << endl<<endl;

   // Declaramos una variable similar;
   int iedad = 45;

   cout << "iEdad     :"<< iEdad          << endl;
   cout << "iedad     :"<< iedad          << endl;
   bSalida = iEdad;
   cout << "bSalida   :"<< bSalida        << endl;
   bSalida = -19;
   cout << "bSalida   :"<< bSalida        << endl;
   bSalida = 0;
   cout << "bSalida   :"<< bSalida        << endl;


    /* Se finaliza la aplicación */
   return 0;
}
