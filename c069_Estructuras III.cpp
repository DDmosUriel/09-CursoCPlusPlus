/*

Curso de C++
Autor: JAOR
Clase 69 - Estructuras III

En esta clase veremos como es posible definir apuntadores a estructuras.

La sintaxis para realizarlo es la siguiente:

struct PERSONA *pPersona.

La anterior sentencia define un apuntador a una variable que sea del tipo
de struct PERSONA.

Para acceder a los valores de los elementos de la estructura a través del
apuntador; lo podemos hacer de 2 formas:

1a) Con el uso del operador "->". Ejemplo:
    pPersona->iEdad=14;

2a) Con el uso del operador "*". Ejemplo:
   (*pPersona).iEdad=14;

Estas 2 formas de acceso, al igual que con los apuntadores a variables
vistas anteriormente, nos permiten modificar los datos de la variable
a la que apuntan.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Variable
int xDato;

// Estructura TEST
struct TEST
{
   int yDato=25;
   int *pInteger=&yDato;
};

// Declaramos una Estructura para Manejar Información Web
struct WEB_INFO
{
   string sCorreo;
   string sPagina;
   string sFacebook;
   string sTwitter;
   int    *pInteger=&xDato;
   struct TEST xTest;
};


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 69 - Estructuras III " << endl << endl;

    // Declaramos una variable WebInfo
    struct WEB_INFO  xWebInfo;

    // Colocando los datos en la Variable WebInfo
    xWebInfo.sCorreo   = "nick@hotmail.com";
    xWebInfo.sFacebook = "facebook/nick";
    xWebInfo.sPagina   = "www.nick.com";
    xWebInfo.sTwitter  = "twitter/nick";



    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Variable" << endl;
    cout << "Correo    : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina    : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter   : "  << xWebInfo.sTwitter  << endl;
    cout << "xDato Dir : "  << xWebInfo.pInteger << endl;
    cout << "xDato Con : "  << (*xWebInfo.pInteger) << endl;
    *(xWebInfo.pInteger)=30;
    cout << "xDato Con : "  << *(xWebInfo.pInteger) << endl;
    cout << "yDato     : "  << xWebInfo.xTest.yDato    << endl;
    cout << "pInteger  : "  << xWebInfo.xTest.pInteger << endl;
    cout << "pInteger  : "  << *xWebInfo.xTest.pInteger << endl << endl;

    // Modificamos el Dato
    *xWebInfo.xTest.pInteger = 125;
    cout << "yDato     : "  << xWebInfo.xTest.yDato    << endl;
    cout << "pInteger  : "  << xWebInfo.xTest.pInteger << endl;
    cout << "pInteger  : "  << *xWebInfo.xTest.pInteger << endl << endl;




    // Declaramos una variable apuntador a WebInfo
    struct WEB_INFO  *pWebInfo;

    // Asignamos al Apuntador la dirección de la Variable
    pWebInfo = &xWebInfo;

    // Desplegando los Datos desde el Apuntador
    cout << "WebInfo desde el Apuntador" << endl;
    cout << "Correo   : "  << pWebInfo->sCorreo   << endl;
    cout << "Facebook : "  << pWebInfo->sFacebook << endl;
    cout << "Pagina   : "  << pWebInfo->sPagina   << endl;
    cout << "Twitter  : "  << pWebInfo->sTwitter  << endl << endl;

    // Desplegando los Datos desde el Apuntador 2a Forma
    cout << "WebInfo desde el Apuntador 2a Forma" << endl;
    cout << "Correo   : "  << (*pWebInfo).sCorreo   << endl;
    cout << "Facebook : "  << (*pWebInfo).sFacebook << endl;
    cout << "Pagina   : "  << (*pWebInfo).sPagina   << endl;
    cout << "Twitter  : "  << (*pWebInfo).sTwitter  << endl << endl;

    // Modificando desde las 2 formas
    pWebInfo->sCorreo     = "email@hotmail.com";
    (*pWebInfo).sFacebook = "facebook/modificado";


    // Desplegando los Datos Modificados
    cout << "WebInfo Modificados" << endl;
    cout << "Correo   : "  << (*pWebInfo).sCorreo   << endl;
    cout << "Facebook : "  << pWebInfo->sFacebook << endl;

    // Finaliza la Aplicación
    return 0;

}
