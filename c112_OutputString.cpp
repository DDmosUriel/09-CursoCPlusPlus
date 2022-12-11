/*
Curso de C++
Autor: JAOR
Clase 112 - OutputString 
*/

// Librerias
#include <iostream>
#include <sstream>

// Espacio de nombres
using namespace std;

// Función Principal
int main() 
{
   // Declara una variable is
   ostringstream outputString;

   // Variable para cada palabra
   string palabra;

   // Ciclo
   while (true)
   {
      // Mensaje de Captura
      cout << "Capture una palabra; \"Enter\" para terminar " << endl;

      // Lee una linea
      getline(cin,palabra);

      // Valida que desea salir
      if (palabra=="")
      {
         //Sale
         break;
      }


      // Agrega la palabra al objeto ouput
      outputString << "{" << palabra << "}";

   }
   
   // Despliega las palabras capturadas
   cout << "Las palabras capturadas son:" << endl;
   cout << outputString.str();

   // Finaliza
   return 0;
}