/*

Curso de C++
Autor: JAOR
Clase 70 - Estructuras IV

En esta clase se ve como pasar una estructura como un parámetro
en una función.
Se muestra como pasarla por Valor, por Referencia y como apuntador.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Declaramos una Estructura para Manejar Información Web
struct WEB_INFO
{
   string sCorreo;
   string sPagina;
   string sFacebook;
   string sTwitter;
};

// Despliega la Información de la variable estructura y la va a modificar
void FnTestEstructura(struct WEB_INFO xInfo)
{

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función" << endl;
    cout << "Correo    : "  << xInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xInfo.sFacebook << endl;
    cout << "Pagina    : "  << xInfo.sPagina   << endl;
    cout << "Twitter   : "  << xInfo.sTwitter  << endl << endl;

    // Modificamos el Contenido de la Variable
    xInfo.sCorreo   = "nick@hotmail.com****";
    xInfo.sFacebook = "facebook/nick****";
    xInfo.sPagina   = "www.nick.com****";
    xInfo.sTwitter  = "twitter/nick****";

    // Desplegando los Datos desde la Variable Modificados
    cout << "WebInfo desde la Función habiendo modificado" << endl;
    cout << "Correo    : "  << xInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xInfo.sFacebook << endl;
    cout << "Pagina    : "  << xInfo.sPagina   << endl;
    cout << "Twitter   : "  << xInfo.sTwitter  << endl << endl;


}

// Despliega la Información de la variable estructura
void FnTestEstructura2(struct WEB_INFO &xInfo)
{

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función 2" << endl;
    cout << "Correo    : "  << xInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xInfo.sFacebook << endl;
    cout << "Pagina    : "  << xInfo.sPagina   << endl;
    cout << "Twitter   : "  << xInfo.sTwitter  << endl << endl;

    // Modificamos el Contenido de la Variable
    xInfo.sCorreo   = "nick@hotmail.com****";
    xInfo.sFacebook = "facebook/nick****";
    xInfo.sPagina   = "www.nick.com****";
    xInfo.sTwitter  = "twitter/nick****";

    // Desplegando los Datos desde la Variable Modificados
    cout << "WebInfo desde la Función 2 Habiendo Modificado" << endl;
    cout << "Correo    : "  << xInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xInfo.sFacebook << endl;
    cout << "Pagina    : "  << xInfo.sPagina   << endl;
    cout << "Twitter   : "  << xInfo.sTwitter  << endl << endl;

}

// Despliega la Información de la variable estructura
void FnTestEstructura3(struct WEB_INFO *xInfo)
{

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función 3" << endl;
    cout << "Correo    : "  << xInfo->sCorreo   << endl;
    cout << "Facebook  : "  << xInfo->sFacebook << endl;
    cout << "Pagina    : "  << xInfo->sPagina   << endl;
    cout << "Twitter   : "  << xInfo->sTwitter  << endl << endl;

    // Modificamos el Contenido de la Variable
    xInfo->sCorreo   = "nick@hotmail.com.....";
    xInfo->sFacebook = "facebook/nick.....";
    xInfo->sPagina   = "www.nick.com.....";
    xInfo->sTwitter  = "twitter/nick....";

    // Desplegando los Datos desde la Variable Modificados
    cout << "WebInfo desde la Función 3 Habiendo Modificado" << endl;
    cout << "Correo    : "  << xInfo->sCorreo   << endl;
    cout << "Facebook  : "  << xInfo->sFacebook << endl;
    cout << "Pagina    : "  << xInfo->sPagina   << endl;
    cout << "Twitter   : "  << xInfo->sTwitter  << endl << endl;
}


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 70 - Estructuras IV " << endl << endl;

    // Declaramos una variable WebInfo
    struct WEB_INFO  xWebInfo;
    struct WEB_INFO  *pWebInfo=&xWebInfo;

    // Colocando los datos en la Variable WebInfo
    xWebInfo.sCorreo   = "nick@hotmail.com";
    xWebInfo.sFacebook = "facebook/nick";
    xWebInfo.sPagina   = "www.nick.com";
    xWebInfo.sTwitter  = "twitter/nick";

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función main" << endl;
    cout << "Correo    : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina    : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter   : "  << xWebInfo.sTwitter  << endl << endl;

    // Llamamos a la Función
    FnTestEstructura(xWebInfo);

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función main despues de llamar a la Función" << endl;
    cout << "Correo    : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina    : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter   : "  << xWebInfo.sTwitter  << endl << endl;

    // Llamamos a la Función
    FnTestEstructura2(xWebInfo);

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función main despues de llamar a la Función" << endl;
    cout << "Correo    : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina    : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter   : "  << xWebInfo.sTwitter  << endl << endl;

    // Llamamos a la Función
    //FnTestEstructura3(&xWebInfo);
    FnTestEstructura3(pWebInfo);

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función main despues de llamar a la Función" << endl;
    cout << "Correo    : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook  : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina    : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter   : "  << xWebInfo.sTwitter  << endl << endl;

    // Desplegando los Datos desde la Variable
    cout << "WebInfo desde la Función main despues de llamar a la Función" << endl;
    cout << "Correo    : "  << pWebInfo->sCorreo   << endl;
    cout << "Facebook  : "  << pWebInfo->sFacebook << endl;
    cout << "Pagina    : "  << pWebInfo->sPagina   << endl;
    cout << "Twitter   : "  << pWebInfo->sTwitter  << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
