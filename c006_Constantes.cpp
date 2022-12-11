/*

Curso de C++
Autor: JAOR
Clase 06 - Constantes

Una constante es una forma de establecer
un valor fijo en un programa, el cual no
puede ser modificado.

Existen 2 formas en C++ para definir
constantes.

- Usando la directiva del preprocesador #define
- Usando la palabra reservada const.

USANDO #define.

Cuando usamos la directiva del preprocesador,
definimos una referencia a la cual se le asocia un valor;
el cual no necesariamente tiene que ser una literal
acorde a algún tipo.

Cuando usamos la referencia, en el programa;
antes de compilarlo, la referencia es sustituida
con el valor indicado.

Ejemplo:

#define LONGITUD 10

En el ejemplo anterior definimos la referencia Longitud
la cual podremos usar en cualquier parte del programa
y lo que hacer el Compilador antes de compilar,
es sustituir en el programa en donde aparezca el nombre
LONGITUD; con el valor de 10.


USANDO const

Cuando definimos una Constante con la palabra reservada
const, se reserva un espacio de memoria para este dato
al igual que con una variable; con la diferencia de que
este valor no puede ser modificado con el programa.

Para definir una constante, se sigue la siguiente sintaxis:

const tipo_dato nombre_constante = valor;

Como observamos, al igual que con una variable; se debe de
indicar el tipo de dato; posteriormente el valor de la
constante y finalmente su valor o su literal.
Ejemplo:

const int LONGITUD = 10;


DIFERENCIA ENTRE #define y const.

- Las constantes con #define, no son necesariamente correspondientes
  a un tipo de dato. Ejemplo:
  #define CAMBIO_LINEA "\n";

- Las constantes definidas con const, si reservan un espacio de
  memoria correspondiente al tipo de dato con el cual se define.

- Funciones, como por ejemplo; sizeof, pueden ser utilizadas con
  las constantes definidas con const; pero no SIEMPRE con #define.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Incluye el archivo con las REFERENCIAS
//#include "lenguaje.hpp"

// Definiendo Referencias
#define CAMBIO_LINEA endl
#define FIN_LINEA ;
#define DESPLIEGA cout <<
#define MAS <<
#define FINALIZA return 0;
// Referencias para palabras reservadas
#define FN_INICIAL int main()
#define BLOQUE_INI {
#define BLOQUE_FIN }
#define LONG_BYTES sizeof
#define CONST_INT const int


// Define una Constante
CONST_INT INT_EDAD = 33;

// Función Principal
FN_INICIAL
BLOQUE_INI

   // Se despliega el Nombre del Curso y la Clase
   DESPLIEGA "Curso de C++ " FIN_LINEA
   DESPLIEGA "Clase 06 - Constantes" MAS CAMBIO_LINEA MAS CAMBIO_LINEA FIN_LINEA

   // Despliega el Valor de la Constante
   DESPLIEGA "El Valor de la Constante INT_EDAD :" MAS INT_EDAD MAS CAMBIO_LINEA FIN_LINEA
   DESPLIEGA "El Tamaño en Bytes de INT_EDAD    :" MAS LONG_BYTES(INT_EDAD) MAS CAMBIO_LINEA FIN_LINEA

    /* Se finaliza la aplicación */
   FINALIZA

BLOQUE_FIN
