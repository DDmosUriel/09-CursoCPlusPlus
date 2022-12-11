/*

Curso de C++
Autor: JAOR

Clase 101 - Files_Stream_IV

En esta clase veremos como obtener la longitud de un archivo
en bytes.

Veremos metodos para leer o grabar "n" cantidad de caracteres de un archivo
en la posición que nosotros indiquemos.

Veremos como posicionar el cursor del archivo, hacia adelante o hacia
atrás desde el inicio, desde el fin o desde la posición actual.

*/

// Incluimos las librerías necesarias
#include <fstream>
#include <iostream>

// El nombre de Espacio
using namespace std;

// Definimos función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 101 - Files_Stream_IV" << endl << endl;

    // Abre el archivo de lectura y binario
    fstream fLectura ("afile.dat");

    // Verifica si lo pudo abrir
    if (fLectura)
    {
        // Se ubica al final del Archivo
        fLectura.seekg (0, fLectura.end);

        // Obtiene la Longitud del Archivo
        int iLongitud = fLectura.tellg();

        // Se ubica de nuevo en el inicio
        fLectura.seekg (0, fLectura.beg); // Los otros posibles son: cur y end.
        //fLectura.seekg (iLongitud / 2, fLectura.beg);

        // Prepara memoria de acuerdo a la longitud del Archivo
        char *buffer = new char [iLongitud];

        // Lee desde el Archivo
        fLectura.read (buffer,iLongitud);

        // Se ubica de nuevo en el inicio
        fLectura.seekg (10, fLectura.beg);

        // Regresa 10
        //fLectura.seekp (-10, fLectura.end);

        // Graba al Archivo
        fLectura.write("1234567890",10);

        // Cierra el Archivo
        fLectura.close();

        // Despliega el Contenido del Archivo en la Pantalla
        cout.write (buffer,iLongitud);

        // Elimina el Buffer
        delete buffer;

        // despliega la longitud del Archivo
        cout << "La Longitud del Archivo es:" << iLongitud << endl;

    }

    // Finaliza con Return
    return 0;
}
