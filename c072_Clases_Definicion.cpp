/*

Curso de C++
Autor: JAOR
Clase 72 - Clases Definición

El Avance Principal del Lenguaje C++ con respecto a su predecedor; el
lenguaje C, fue la incorporación de las Clases y con ella la progra-
mación orientada a Objetos.

Como siempre, estos avances tienen que ver con una de las características
principales de la programación en cualquier lenguaje, y que es el
almacenamiento de la información.

Veamos como fue avanzando el almacenamiento de información en un lenguaje:

Variables.
Lugar donde se almacena información de tipos de datos nativos.

Arreglos.
Lugar donde se almacena mas de una información del mismo tipo.

Estructuras.
Lugar donde se almacena información con diversos tipos de datos; la cual
puede almacenar variables, arreglos, y estructuras mismas.

Clase.
Lugar en donde se almacena información de diversos tipos de datos, la cual
puede almacenar variables, arreglos, estructuras y adicionalmente FUNCIONES.

Existen otras muchas mas características que son exclusivas de las clases, y
que las iremos viendo poco a poco al estudiarlas.

La definición de una Clase se inicia utilizando la palabra reservada class,
y encerrando entre "{ }", el inicio y final de su definición.

Sintaxis:

class NOMBRE_CLASE
{
  [especificador_acceso:]
      miembros;
}[objetos];

El especificador de acceso indica quienes podrán acceder al dato. Esto
se verá en la siguiente clase. El valor por default es "private" y el que
utilizaremos en esta clase es public.

Los miembros de la clase pueden ser variables, arreglos, estructuras e inclusive
objetos de otras clases; y por supuesto funciones.

Al finalizar la declaración de la Clase, podemos definir de inmediato objetos, para
ella, tal y como lo haríamos con una estructura; cada uno de ellos separados por ",".

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Estructura Ejemplo
struct stcTest
{
   int    iDato;
   string sDato;
};

// Clase Ejemplo
class Test
{
    // Establecemos objetos Públicos
    public:

        // Definiendo Miembros
        int            xInteger=10;                   // Variable
        int            xArreglo[3]={1,2,3};           // Arreglo
        struct stcTest xStruct={20,"sDato"};          // Estructura
        string         xString ="String";             // Objeto

        // Función miembro retorna el Doble de Integer
        int    FnIntDobleInteger()
        {
               // Retorna el Doble
               return xInteger * 2;
        }

        // Función miembro Despliega String
        void   FnDespliegaString()
        {
               // Desplegar String
               cout << xString << endl << endl;

        }
}xObjeto1;

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 72 - Clases Definición" << endl << endl;

    // Accedemos a los miembros del Ojeto xEjemplo
    cout << "Accedemos a los Elementos del Objeto1" << endl;
    cout << "xInteger          : " << xObjeto1.xInteger            << endl;
    cout << "xArreglo[0]       : " << xObjeto1.xArreglo[0]         << endl;
    cout << "xArreglo[1]       : " << xObjeto1.xArreglo[1]         << endl;
    cout << "xArreglo[2]       : " << xObjeto1.xArreglo[2]         << endl;
    cout << "xStruct.iDato     : " << xObjeto1.xStruct.iDato       << endl;
    cout << "xStruct.sDato     : " << xObjeto1.xStruct.sDato       << endl;
    cout << "xString           : " << xObjeto1.xString             << endl;
    cout << "FnIntDobleInteger : " << xObjeto1.FnIntDobleInteger() << endl;
    cout << "FnDespliegaString : ";
    xObjeto1.FnDespliegaString();

    // Declaramos un objeto de la Clase
    Test xObjeto2;

    // Accedemos a los Elementos del Objeto Nuevo
    xObjeto2.xInteger      = 25;
    xObjeto2.xArreglo[0]   = 99;
    xObjeto2.xString       = "String Objeto 2";
    xObjeto2.xStruct.sDato = "Cadena de Estructura";

    cout << "Accedemos a los Elementos del Objeto2" << endl;
    cout << "xInteger          : " << xObjeto2.xInteger            << endl;
    cout << "xArreglo[0]       : " << xObjeto2.xArreglo[0]         << endl;
    cout << "xArreglo[1]       : " << xObjeto2.xArreglo[1]         << endl;
    cout << "xArreglo[2]       : " << xObjeto2.xArreglo[2]         << endl;
    cout << "xStruct.iDato     : " << xObjeto2.xStruct.iDato       << endl;
    cout << "xStruct.sDato     : " << xObjeto2.xStruct.sDato       << endl;
    cout << "xString           : " << xObjeto2.xString             << endl;
    cout << "FnIntDobleInteger : " << xObjeto2.FnIntDobleInteger() << endl;
    cout << "FnDespliegaString : ";
    xObjeto2.FnDespliegaString();

    // Finaliza la Aplicación
    return 0;

}
