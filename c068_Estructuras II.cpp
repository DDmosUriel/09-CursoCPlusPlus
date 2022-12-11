/*

Curso de C++
Autor: JAOR
Clase 68 - Estructuras II

Es posible definir variables de tipo Estructuras, dentro de la definición
de una estructura; y de esta forma poder aprovechar las declaraciones previas;
si es que estas se adecuan a la información que queremos establecer; así
tambien es posible definir estructuras dentro de Estructuras.

A diferencia de C, en C++ cuando declaramos estructuras internas; no podemos
hacer referencia a ellas para declarar variables, tal y como C lo permite.

En esta clase tambien veremos como para asignar una variable de una estructura
a otra de la misma estructura; se realiza de la misma forma que con cualquier
otro tipo de dato, utilizando el operador de aśignación "=".

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

// Definiendo la Estructura de Editorial
struct EDITORIAL
{
   int    iIde;
   string sNom;
   struct WEB_INFO xWebInfo;
   struct DIRECCION
   {
      string sCalle;
      string sNumero;
      string sCiudad;
      string sEstado;
      string sCP;
   }xDireccion;
};

// Definiendo la Estructura de LIBRO
struct LIBRO
{
   string sISBN;
   string sTit;
   string sAut;
   int    iEdi;
   int    iAnio;
   struct FECHA
   {
     int Dia,Mes,Anio;
   }xFechaCompra;
};


// Estructura del Cliente
struct CLIENTE
{
   int    iIde;
   string sNombre;
   struct
   {
      string sCalle;
      string sNumero;
      string sCiudad;
      string sEstado;
      string sCP;
   }xDireccion;
   struct WEB_INFO xWebInfo;
};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 68 - Estructuras II " << endl << endl;

    // Declaramos Variables
    //struct FECHA xFecha;
    //struct DIRECCION xDireccion;

    struct WEB_INFO  xWebInfo;
    struct EDITORIAL xEditorial;
    struct LIBRO     xLibro;
    struct CLIENTE   xCliente;

    // Colocando los datos en la Variable WebInfo
    xWebInfo.sCorreo   = "nick@hotmail.com";
    xWebInfo.sFacebook = "facebook/nick";
    xWebInfo.sPagina   = "www.nick.com";
    xWebInfo.sTwitter  = "twitter/nick";

    // Desplegando los Datos
    cout << "WebInfo " << endl;
    cout << "Correo   : "  << xWebInfo.sCorreo   << endl;
    cout << "Facebook : "  << xWebInfo.sFacebook << endl;
    cout << "Pagina   : "  << xWebInfo.sPagina   << endl;
    cout << "Twitter  : "  << xWebInfo.sTwitter  << endl << endl;


    // Colocando los datos en la Variable Editorial
    xEditorial.iIde = 1;
    xEditorial.sNom = "LIMUSA";
    xEditorial.xWebInfo.sCorreo   = "admin@limusa.com";
    xEditorial.xWebInfo.sFacebook = "facebook/editorial_limusa";
    xEditorial.xWebInfo.sPagina   = "www.limusa.com";
    xEditorial.xWebInfo.sTwitter  = "twitter/limusa";
    xEditorial.xDireccion.sCalle   = "Avenida Hidalgo";
    xEditorial.xDireccion.sNumero  = "14";
    xEditorial.xDireccion.sCiudad  = "Mexico";
    xEditorial.xDireccion.sEstado  = "Distrito Federal";
    xEditorial.xDireccion.sCP      = "56890";

    // Desplegando los Datos
    cout << "Editorial " << endl;
    cout << "Ide      : "  << xEditorial.iIde   << endl;
    cout << "Nombre   : "  << xEditorial.sNom   << endl;
    cout << "Correo   : "  << xEditorial.xWebInfo.sCorreo   << endl;
    cout << "Facebook : "  << xEditorial.xWebInfo.sFacebook << endl;
    cout << "Pagina   : "  << xEditorial.xWebInfo.sPagina   << endl;
    cout << "Twitter  : "  << xEditorial.xWebInfo.sTwitter  << endl;
    cout << "Correo   : "  << xEditorial.xDireccion.sCalle  << endl;
    cout << "Facebook : "  << xEditorial.xDireccion.sNumero << endl;
    cout << "Ciudad   : "  << xEditorial.xDireccion.sCiudad << endl;
    cout << "Estado   : "  << xEditorial.xDireccion.sEstado << endl;
    cout << "Twitter  : "  << xEditorial.xDireccion.sCP     << endl << endl;

    // Colocando los datos en la Variable Libro
    xLibro.sISBN = "1234567890123";
    xLibro.sTit  = "Programming in C/C++";
    xLibro.sAut  = "JAOR";
    xLibro.iEdi  = 1;
    xLibro.iAnio = 2012;
    xLibro.xFechaCompra.Anio = 2012;
    xLibro.xFechaCompra.Mes  = 10;
    xLibro.xFechaCompra.Dia  = 14;

    // Desplegando los Datos
    cout << "Libro "     << endl;
    cout << "ISBN     : "  << xLibro.sISBN   << endl;
    cout << "Título   : "  << xLibro.sTit    << endl;
    cout << "Autor    : "  << xLibro.sAut    << endl;
    cout << "Año      : "  << xLibro.iAnio   << endl;
    cout << "Editorial: "  << xLibro.iEdi    << endl;
    cout << "Fecha de Compra " << endl;
    cout << "Dia      : "  << xLibro.xFechaCompra.Dia  << endl;
    cout << "Mes      : "  << xLibro.xFechaCompra.Mes  << endl;
    cout << "Anio     : "  << xLibro.xFechaCompra.Anio << endl << endl;

    // Colocando los datos en la Variable Cliente
    xCliente.iIde               = 10;
    xCliente.sNombre            = "Juan Pérez";
    xCliente.xWebInfo.sCorreo   = "juan_perez@hotmail.com";
    xCliente.xWebInfo.sFacebook = "facebook/juan_perez";
    xCliente.xWebInfo.sPagina   = "www.juan_perez.com";
    xCliente.xWebInfo.sTwitter  = "twitter/juan_perez";
    xCliente.xDireccion.sCalle  = "Benito Juarez";
    xCliente.xDireccion.sNumero = "234-A";
    xCliente.xDireccion.sCiudad = "Mexico";
    xCliente.xDireccion.sEstado = "Mexico";
    xCliente.xDireccion.sCP     = "12345";

    // Desplegando los Datos
    cout << "Cliente " << endl;
    cout << "Ide      : "  << xCliente.iIde    << endl;
    cout << "Nombre   : "  << xCliente.sNombre << endl;
    cout << "Correo   : "  << xCliente.xWebInfo.sCorreo   << endl;
    cout << "Facebook : "  << xCliente.xWebInfo.sFacebook << endl;
    cout << "Pagina   : "  << xCliente.xWebInfo.sPagina   << endl;
    cout << "Twitter  : "  << xCliente.xWebInfo.sTwitter  << endl;
    cout << "Correo   : "  << xCliente.xDireccion.sCalle  << endl;
    cout << "Facebook : "  << xCliente.xDireccion.sNumero << endl;
    cout << "Ciudad   : "  << xCliente.xDireccion.sCiudad << endl;
    cout << "Estado   : "  << xCliente.xDireccion.sEstado << endl;
    cout << "Twitter  : "  << xCliente.xDireccion.sCP     << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
