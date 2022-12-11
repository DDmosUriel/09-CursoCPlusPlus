/*

Curso de C++
Autor: JAOR
Clase 100 - Files_Stream_III

En esta clase veremos como copiar un Archivo; para lo cual
tendremos que leer del que se va a copiar, y grabar en el
nuevo archivo.

Para realizar lo anterior, utilizaremos métodos de lectura
y escritura, caracter por caracter.

Tambien veremos otra forma de validar que un archivo se ha
abierto correctamente.

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
    cout << "Clase 100 - Files_Stream_II" << endl << endl;

    // Variables para nombres de archivo
    string sArchivo;

    // Variable caracter
    char c;

    // Contador de Caracteres
    int iContadorCaracteres = 0;

    // Solicita archivo a Copiar
    cout << "Captura Archivo a Copiar :" << endl;
    cin  >> sArchivo;

    // Declaramos una variable para lectura de archivos
    ifstream fLectura(sArchivo);

    // Verificamos si lo pudo abrir
    if (!fLectura.is_open())
    {
       // Mensaje de Error
       cerr << "Ocurrió un Error al Intentar abrir el Archivo " << sArchivo << endl;

       // Codigo de Retorno de Error
       return 1;
       // exit (1);

    }

    // Solicita archivo a crear
    cout << "Captura Archivo Destino :" << endl;
    cin  >> sArchivo;

    // Declaramos una variable para escritura de archivos
    ofstream fEscritura(sArchivo,ios::app);

    // Verificamos si lo pudo abrir
    if (!fEscritura.is_open())
    {
       // Mensaje de Error
       cerr << "Ocurrió un Error al Intentar abrir para escritura el Archivo " << sArchivo << endl;

       // Codigo de Retorno de Error
       return 2;
       // exit (2);

    }


    // Ciclo para leer caracter por caracter
    while ( fLectura.get(c) )
    {

      // Graba el Caracter Leido al Archivo Destino
      fEscritura.put(c);

      // Incrementa el Contador de Caracteres
      iContadorCaracteres++;

      // Imprime un punto por cada caracter
      cout << ".";

      // Cambia de linea si lleva 80
      if (iContadorCaracteres % 80 == 0)
         cout << endl;

    }

    // Cambia de linea al terminar
    cout << endl;

    // Despliega cuantos caracteres se han copiado
    cout << "Se han copiado :" << iContadorCaracteres << " caracteres" << endl;

    // Cerrar los Archivos
    fLectura.close();
    fEscritura.close();

    // Finaliza con Return
    return 0;
}
