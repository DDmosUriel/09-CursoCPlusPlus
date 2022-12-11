/*

Curso de C++
Autor: JAOR
Clase 71 - Definiendo Tipos con typedef

En esta clase veremos como definir nuestros propios tipos de datos
utilizando la palabra reservada typedef.

La sintaxis para usar typedef es la siguiente:

typedef TIPO_DATO NuevoTipoDato

La anterior instrucción lo que hace realmente es darle un nuevo
nombre o crear una referencia al TIPO_DATO a través de
NuevoTipoDato

Una vez que hemos hecho lo anterior, podemos declarar variables
del NuevoTipoDato como lo hacemos normalmente con los anteriores.

Ejemplos:

typedef int    ENTERO;
typedef string CADENA;

ENTERO xEdad;
CADENA sNombre;

Al igual que con las variables, si definimos un tipo de dato
dentro de una función, este tipo de dato solo estará disponible
para esa función. Para que esté disponible en toda la aplicación
debe declararse fuera de todas las funciones.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Defino 2 tipos
typedef int    ENTERO;
typedef string CADENA;


// Declaramos una Estructura para Manejar Información Web
struct WEB_INFO
{
   CADENA sCorreo;
   CADENA sPagina;
   CADENA sFacebook;
   CADENA sTwitter;
};

// Definiendo un tipo dentro de una función
void FnTest()
{
   // Define el Tipo de Dato
   typedef struct WEB_INFO webinfo;

   // Declara la variable del Tipo de Dato
   webinfo xWebInfo;
}

// No podemos usar el tipo webinfo, porque está dentro de una función
// webinfo xWebInfo;

// Es posible al momento de indicar el typedef, definir la estructura
typedef struct
{
   CADENA sTitulo;
   CADENA sAutor;
   CADENA sEditorial;
   ENTERO iIDE;
}libros;

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 71 - Definiendo Tipos con typedef" << endl << endl;

    // Definimos el Tipo Localmente
    typedef struct WEB_INFO webinfo;

    // Declaramos la Variable de WebInf
    webinfo xWebInfo;

    // Colocando los datos en la Variable WebInfo
    xWebInfo.sCorreo   = "nick@hotmail.com";
    xWebInfo.sFacebook = "facebook/nick";
    xWebInfo.sPagina   = "www.nick.com";
    xWebInfo.sTwitter  = "twitter/nick";

    // Desplegando los Datos desde la Variable
    cout << "WebInfo" << endl;
    cout << "Correo    : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina    : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter   : "  << xWebInfo.sTwitter  << endl << endl;

    // Declaramos la Variable de WebInf
    libros xLibro;

    // Colocando los datos en la Variable WebInfo
    xLibro.sAutor     = "jaor";
    xLibro.sEditorial = "limusa";
    xLibro.sTitulo    = "programming in c/c++";
    xLibro.iIDE       = 127;

    // Desplegando los Datos desde la Variable
    cout << "Libro" << endl;
    cout << "Autor      : "  << xLibro.sAutor     << endl;
    cout << "Editorial  : "  << xLibro.sEditorial << endl;
    cout << "Título     : "  << xLibro.sTitulo    << endl;
    cout << "IDE        : "  << xLibro.iIDE       << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
