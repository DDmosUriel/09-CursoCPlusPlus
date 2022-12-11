/*

Curso de C++
Autor: JAOR

Clase 102 - Files_Stream_V

En esta clase veremos como grabar ya un registro específico definido
en una estructura de datos.

Analizaremos como esta grabación, ya no es realizada exactamente como
un texto plano, y por esta razón se debe utilizar un nuevo modo
de apertura y que es el modo binario.(ios::binary)

Veremos como grabar varios registros, y como leerlos en forma
consecutiva, así como acceder a uno de ellos específicamente.

*/

// Incluimos las librerías necesarias
#include <fstream>
#include <iostream>
#include <string.h>

// El nombre de Espacio
using namespace std;

// Estructura del Registro
struct stcProductos
{
   // Definición de la información del Producto
   int     iIde;        // Identificación
   char    sNombre[30]; // Nombre
   float   fPrecio;     // Precio
};



// Definimos función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 102 - Files_Stream_V" << endl << endl;

    // Declaramos una variable de Productos
    struct stcProductos xProducto;

    // Para longitud del registro
    int iLonRegistro = sizeof(xProducto);

    // Lo abrimos como append
    fstream xFile( "Registro.dat",ios::out|ios::in|ios::app|ios::binary );

    if (!xFile)
    {
       // Mensaje de Error en Apertura de Archivo
       cerr << "Error al abrir el archivo de Registro !" << endl;
       return 1;
    }
    else
    {
        // Define los datos a grabar
        xProducto.iIde = 1;
        strcpy(xProducto.sNombre,"Lapiz Mirado");
        xProducto.fPrecio = 1.90;

        // Intenta grabar a el archivo
        if (!xFile.write( (char*) &xProducto,sizeof(xProducto)) )
        {
               // Mensaje de Error
               cerr << "! Error al grabar producto ! " << endl;
               return 2;
        }

        // Despliega el Mensaje
        cout << "Se ha grabado un Registro al archivo" << endl;

        // Define los datos del siguiente registro
        xProducto.iIde = 2;
        strcpy(xProducto.sNombre,"Goma Mirado");
        xProducto.fPrecio = 1.24;

        // Intenta grabar a el archivo
        if (!xFile.write((char *) &xProducto,sizeof(xProducto)) )
        {
               // Mensaje de Error
               cerr << "! Error al grabar producto ! " << endl;
               return 2;
        }

        // Despliega el Mensaje
        cout << "Se ha grabado un Registro al archivo \n" << endl;

        // Define los datos del siguiente registro
        xProducto.iIde = 3;
        strcpy(xProducto.sNombre,"Pluma Vic Azul");
        xProducto.fPrecio = 1.5;

        // Intenta grabar a el archivo
        if (!xFile.write((char *) &xProducto,sizeof(xProducto)) )
        {
               // Mensaje de Error
               cerr << "! Error al grabar producto ! " << endl;
               return 2;
        }

        // Despliega el Mensaje
        cout << "Se ha grabado un Registro al archivo \n" << endl;


        // Define los datos del siguiente registro
        xProducto.iIde = 4;
        strcpy(xProducto.sNombre,"Pluma Vic Roja");
        xProducto.fPrecio = 2.24;

        // Intenta grabar a el archivo
        if (!xFile.write((char *) &xProducto,sizeof(xProducto)) )
        {
               // Mensaje de Error
               cerr << "! Error al grabar producto ! " << endl;
               return 2;
        }

        // Despliega el Mensaje
        cout << "Se ha grabado un Registro al archivo \n" << endl;

    }

    // Cierro el Archivo
    //outFile.close();

    // Lo Abro para ahora leerlo
    //ifstream inFile( "Registro.dat", ios::in|ios::binary );

    // Verifica que pudo abrir el Archivo
    //if(!inFile)
    //{
    //    // Mensaje de Error en Apertura de Archivo
    //    cerr << "Error al abrir el archivo de Registro !" << endl;
    //    return 3;
    //}
    //else
    //{

        // Variable para Registro a Leer
        int iRegLeer = 1;

        // Coloco en una posición determinada del archivo
        xFile.seekg (iLonRegistro * (iRegLeer-1), xFile.beg);

        // Define los datos a grabar
        xProducto.iIde = 0;
        strcpy(xProducto.sNombre,"");
        xProducto.fPrecio = 0;

        // Intenta leer del archivo
        if (!xFile.read( (char*) &xProducto,sizeof(xProducto)) )
        {
            // Mensaje de Error de Lectura del Archivo
            cerr << "Error al leer del archivo de Registro !" << endl;
            return 4;
        }

        // Despliega el Mensaje
        cout << "Se ha leido un Registro del archivo" << endl;

        // Despliega la Información Leída
        cout << "Información del Producto" << endl;
        cout << "------------------------" << endl;
        cout << "Ide    :" << xProducto.iIde     << endl;
        cout << "Nombre :" << xProducto.sNombre  << endl;
        cout << "Precio :" << xProducto.fPrecio  << endl << endl;

        // Intenta leer del archivo
        if (!xFile.read( (char*) &xProducto,sizeof(xProducto)) )
        {
            // Mensaje de Error de Lectura del Archivo
            cerr << "Error al leer del archivo de Registro !" << endl;
            return 4;
        }

        // Despliega el Mensaje
        cout << "Se ha leido un Registro del archivo" << endl;

        // Despliega la Información Leída
        cout << "Información del Producto" << endl;
        cout << "------------------------" << endl;
        cout << "Ide    :" << xProducto.iIde     << endl;
        cout << "Nombre :" << xProducto.sNombre  << endl;
        cout << "Precio :" << xProducto.fPrecio  << endl << endl;

    //}

    // Variable para Registro a Leer
    iRegLeer = 4;

    // Coloco en una posición determinada del archivo
    xFile.seekg (iLonRegistro * (iRegLeer-1), xFile.beg);

    // Intenta leer del archivo el tercer registro
    if (!xFile.read( (char*) &xProducto,sizeof(xProducto)) )
    {
        // Mensaje de Error de Lectura del Archivo
        cerr << "Error al leer del archivo de Registro !" << endl;
        return 4;
    }

    // Despliega el Mensaje
    cout << "Se ha leido el Registro 4 del archivo" << endl;

    // Despliega la Información Leída
    cout << "Información del Producto" << endl;
    cout << "------------------------" << endl;
    cout << "Ide    :" << xProducto.iIde     << endl;
    cout << "Nombre :" << xProducto.sNombre  << endl;
    cout << "Precio :" << xProducto.fPrecio  << endl << endl;

    // Cierra el Archivo de Lectura
    xFile.close();

    // Finaliza la Aplicación
    return 0;

}
