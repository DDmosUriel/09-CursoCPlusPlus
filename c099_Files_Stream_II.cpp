/*

Curso de C++
Autor: JAOR
Clase 99 - Files_Stream_II

En esta clase veremos como leer todo el contenido de un archivo,
verificar su existencia y utilizaremos otro método de lectura, que es
mas funcional que utilizar el operador de extracción.

Tambien veremos una función que nos permite verificar cuando se
ha llegado al final de un archivo, al realizar una operación
de lectura.

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
    cout << "Clase 99 - Files_Stream_II" << endl << endl;

    // Declaramos una variable para lectura de archivos
    ifstream fLectura;
    string   sArchivo;
    char     sLinea[80];
    int      iContadorLineas = 1;

    // Solicitamos el nombre del archivo a desplegar
    cout << "Captura el nombre del archivo a mostrar:" << endl;
    cin  >> sArchivo;
    cout << endl;

    // Elimina que se quede el Enter en el Buffer
    cin.ignore();

    // Mensaje de apertura de archivo
    cout << "Verificando Existencia del Archivo:" << sArchivo << endl << endl;
//
//    // Intenta abrir el archivo
//    fLectura.open(sArchivo);
//
//    // Verificamos que haya podido abrir el archivo
//    if (!fLectura)
//    {
//        // Mandamos el Mensaje de Error
//        cerr << "Un error ocurrió al intentar abrir el archivo; verifique que exista." << endl;
//
//        // Retornamos 1 que será el código de error para esta circunstancia
//        return 1;
//    }
//
//    // Desplegando el Archivo
//    cout << "Desplegando el Archivo..." << endl << endl;
//
//    // Ciclo para leer del archivo con extracción
//    while( !fLectura.eof()) // Verificamos que no esté en fin de archivo
//    {
//        // Leemos con operador de extracción
//        fLectura >> sLinea;
//
//        // Envía los caracteres leídos a la Pantalla
//        cout << iContadorLineas << ">" << sLinea << endl;
//
//        // Verifica si ha desplegado 10 lineas
//        if( iContadorLineas % 10 == 0)
//        {
//
//            // Solicita presionar una tecla para continuar el Despliegue
//            cout << "\n\t ---- <return> para continuar ---- " << endl;
//
//            // Espera a que se pulse una tecla
//            cin.get();
//
//        }
//
//        // Incrementa el Contador
//        iContadorLineas++;
//
//    }
//
//    // Cerramos el Archivo
//    fLectura.close();

    // Reabrimos el archivo
    fLectura.open(sArchivo);

    // Ciclo para leer del archivo; lee 256 caracteres
    while( !fLectura.eof())
    {

        // Leemos con getline
        if (!fLectura.getline(sLinea, 80))
            break;

        // Envía los caracteres leídos a la Pantalla
        cout << iContadorLineas << ">" << sLinea << endl;

        // Verifica si ha desplegado 20 lineas
        if( iContadorLineas% 10 == 0)
        {

            // Solicita presionar una tecla para continuar el Despliegue
            cout << "\n\t ---- <return> to continue ---- " << endl;

            // Espera se pulse una tecla
            cin.get();

        }

        // Inicializa el Contador
        iContadorLineas++;

    }

    // Verificamos que haya llegado al fin de archivo correctamente
    if( !fLectura.eof() )
    {
        // Hubo error al verificar fin de archivo
        cerr << "Error reading the file " << endl;

        // Retornamos codigo de error
        return 2;

    }

    // Finaliza con Return
    return 0;
}
