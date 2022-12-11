/*
Curso de C++
Autor: JAOR
Clase 115 - OutputFileStream
*/

// Librerias
#include <iostream>
#include <fstream>

// Espacio de Nombres
using namespace std;

// Función Principal
int main()
{
    // Variable de finalización
    int retorno = 0;

    // Archivo de Salida
    ofstream outputFileStream;

    // Nombre del Archivo
    string archivo;

    // Variable para lectura de linea a grabar
    string linea;

    // Solicita el nombre del Archivo de Salida
    cout << "Capture el nombre del archivo a crear:";
    cin >> archivo;

    // Abre el archivo
    outputFileStream.open(archivo);

    // Verifica que lo pudo abrir
    if (!outputFileStream.is_open())
    {
        // Mensaje de Error
        cout << "Error al abrir archivo de escritura ..." << endl;

        // Coloca valor de variable de retorno
        retorno = 1;
    }
    else
    {
        // Mensaje
        cout << "Capture datos a grabar al archivo presionando Enter al final." << endl;
        cout << "Para finalizar deje una linea en blanco y presione Enter" << endl;

        // Libera el buffer
        cin.ignore();

        // Ciclo para leer los datos
        do
        {
            // lee una linea
            getline(cin,linea);

            // Verifica que haya capturado
            if (linea!="")
               // Graba al archivo
               outputFileStream << linea;

        } while (linea!="");        

        // Cierra el archivo
        outputFileStream.close();

        // Mensaje
        cout << "Se ha finalizado de capturar el archivo ..." << endl;
    }

    // Sale de la Aplicación
    return retorno;
}