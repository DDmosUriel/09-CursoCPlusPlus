/*

Curso de C++
Autor: JAOR

Clase 103 - Files_Stream_VI

En esta aplicación de ejemplo, veremos como utilizar
un archivo de lectura y escritura, para poder leer
o grabar en el, desde cualquier posición que nosotros
le indiquemos.

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
    cout << "Clase 103 - Files_Stream_VI" << endl << endl;

    // Variable para archivo
    fstream fArchivo("afile.dat");

    // Variable para caracter
    char   cKey;

    // Variable para leer datos
    string sDato;

    // Variable para leer datos enteros
    int    iDato;

    // Variable para el buffer de lectura de disco
    char   *buffer;

    // Variabla para saber la posició actual del apuntador del archivo
    int    iPosActual=0; // Sabemos que abre en 0

    // Para saber donde es el final del archivo
    int    iPosFinal;

    // Navega al Final para obtener la longitud del archivo
    fArchivo.seekg (0, fArchivo.end);

    // Obtiene la Posición Final
    iPosFinal = fArchivo.tellg();

    // Regresa el Inicio el archivo
    fArchivo.seekg (0, fArchivo.beg);

    // Ciclo del Menu
    while (cKey!=48) // 48 es el ASCII del 0
    {

        // Desplegamos el Menu
        cout << " ------------------------" << endl;
        cout << "      Menu Principal     " << endl;
        cout << " ------------------------" << endl;
        cout << " 1.- Ir       " << endl;
        cout << " 2.- Leer     " << endl;
        cout << " 3.- Escribir " << endl;
        cout << " 4.- Posición " << endl;
        cout << " 0.- Finalizar" << endl;
        cout << " Seleccione:  ";

        // Lee la opción del Menu
        cKey = cin.get();// Leemos desde el teclado
        cin.ignore();    // Ignoramos el Enter


        // Procesa respuesta
        switch(cKey)
        {

          // Mensaje de que la aplicación ha finalizado
          case 48:// Se cierra el Archivo
                  fArchivo.close();
                  cout << "Se ha cerrado el archivo ..." << endl;
                  break;

          // Opción de Posicionamiento
          case 49:cout << "Indique I=Inicio, F=Final o un Número para desplazamiento " << endl;
                  cin >> sDato;
                  cin.ignore();    // Ignoramos el Enter

                  // Verifica si desea navegar al inicio
                  if (sDato.compare("I")==0 || sDato.compare("i")==0)
                  {

                     // Se ubica de nuevo en el inicio
                     fArchivo.seekg (0, fArchivo.beg);

                     // Se ha navegado al Inicio del Archivo
                     cout << "Se ha navegado al Inicio del Archivo .." << endl;
                  }
                  else

                      // Verifica si desea navegar al inicio
                      if (sDato.compare("F")==0 || sDato.compare("f")==0)
                      {
                         // Se ubica de nuevo en el inicio
                         fArchivo.seekg (0, fArchivo.end);

                         // Se ha navegado al Inicio del Archivo
                         cout << "Se ha navegado al Final del Archivo .." << endl;
                      }
                      else
                      {
                         // Conviert a Entero y Desplaza
                         iDato = atoi(sDato.c_str());

                         // Verifica que no trate de desplazarse mas alla
                         if (iPosActual + iDato > iPosFinal || iPosActual + iDato < 0)
                            // Mensaje de Error
                            cout << "La posición que indicas es fuera de los alcances del archivo ..." << endl;
                         else
                             // Se ubica en la posición indicada
                             if (!fArchivo.seekg (iDato, fArchivo.cur))
                                 cout << "Error al posicionarse ..." << endl;
                             else
                                 // Se ha navegado a la posición indicada
                                 cout << "Se ha desplazado desde el cursor:" << iDato << endl;
                      }

                      // Obtengo la Posición actual
                      iPosActual = fArchivo.tellg();

                  // Sale del Switch
                  break;

          case 50:// Mensaje de petición de caracteres a leer
                  cout << "Cuantos caracteres desea leer:" << endl;
                  cin >> iDato;
                  cin.ignore();

                  // Valida que no esté tratando de leer mas alla
                  if (iPosActual + iDato > iPosFinal)
                     // Mensaje
                     cout << "La lectura desborda el fin de archivo ..." << endl;
                  else
                  {
                      // Prepara memoria de acuerdo a la longitud del Archivo
                      buffer = new char [iDato];

                      // Lee desde el Archivo
                      if (! fArchivo.read (buffer,iDato))
                         cout << "Error al Leer del Archivo ..." << endl;
                      else
                         // Despliega los datos leidos
                         cout << "Los datos leidos:" << buffer << endl << endl;

                      // Elimina el Buffer
                      delete buffer;
                  }

                  // Sale del switch
                  break;

          case 51:cout << "Indique los caracteres a escribir:" << endl;
                  cin >> sDato;
                  cin.ignore();

                  // Valida que no esté tratando de leer mas alla
                  if (iPosActual + sDato.length() > iPosFinal)
                     // Mensaje
                     cout << "La escritura desborda el fin de archivo ..." << endl;
                  else
                      // Graba al Archivo
                      if (!fArchivo.write (sDato.c_str(),sDato.length()))
                         // Mensaje de Error
                         cout << "Error al grabar ..." << endl;
                      else
                         // Despliega los datos leidos
                         cout << "Se han grabado los datos al archivo ..." << endl << endl;
                  break;

          case 52:// Obtiene la posición
                  iDato = fArchivo.tellg();

                  // Verifica que no hubo error
                  if (iDato < 0)
                     // Mensaje de Error
                     cout << "Error al obtener la posición, dio negativo:" << iDato << endl;
                  else
                     // Mensaje
                     cout << "Estas en la posición:" << iDato << endl << endl;
                  break;

          // Opción Erronea
          default:cout << "Opción Erronea ..." << endl;
                  break;
        }
    }


    // Mensaje
    cout << "La aplicación ha finalizado ... " << endl;

    // Finaliza la Aplicación
    return 0;

}
