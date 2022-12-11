/*
Curso de C++
Autor: JAOR
Clase 111 - InputString 
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
   istringstream inputString;

   // Declaramos una variable para leer una linea
   string linea;

   // Variable para cada palabra
   string palabra;


   // Solicita la captura de los datos
   cout << "Capture diversas palabras separadas por espacios" << endl;

   // Solicita captura de datos separados por espacios
   getline(cin,linea);

   // Coloca la cadena leida en el inputString
   inputString.str(linea);
   
   // Desplegamos las palabras
   cout << "Las palabras capturadas son las siguientes:" << endl;

   // Ciclo para extraer cada una de las palabras separadas por espacios
   while (inputString >> palabra)
   {
      // Despliega las palabras en el esto capturado.
      cout << palabra << endl;
   }

   // Deja un espacio
   cout << endl;
   getchar();

  
   // Asignamos directamente al crear el objeto
   istringstream inputString2("Este es un texto asignado");


   // Desplegamos las palabras
   cout << "Las palabras asignadas son las siguientes:" << endl;

   // Ciclo para extraer cada una de las palabras separadas por espacios
   while (inputString2 >> palabra)
   {
      // Despliega las palabras en el esto capturado.
      cout << palabra << endl;
   }

   // Deja un espacio
   cout << endl;
   getchar();

   // Limpiamos la variable
   inputString.clear();

   // Declaramos variables para nombre apellido y edad
   string nombre, apellido;
   int    edad;

   // Ciclo
   while (true)
   {
      // Mensaje de Captura
      cout << "Captura \"Nombre Apellido Edad\" por cada linea " << endl;
      cout << "Enter para terminar " << endl;

      // Lee una linea
      getline(cin,linea);

      // Coloca la linea en el inputString
      inputString.str(linea);

      // Obtiene el nombre
      nombre="";
      inputString >> nombre;

      // Valida que sea salir
      if (nombre=="")
      {
         //Sale
         break;
      }
      
      // Inicializa
      apellido="";

      // Verifica que haya datos
      if (!inputString.eof())
         // Obtiene el apellido         
         inputString >> apellido;
      else
         cout << "No hay apellido para leer" << endl;

      // Inicializa la Edad
      edad=0;      

      // Verifico que haya datos
      if (!inputString.eof())
         // Obtiene la edad
         inputString >> edad;
      else
         cout << "No hay edad para leer" << endl;

      // Despliega los datos
      cout << "Nombre   :" << nombre   << endl;
      cout << "Apellido :" << apellido << endl;
      cout << "Edad     :" << edad     << endl << endl;

      // Limpia
      inputString.clear();         
   }
   
   // Inicialziar
   nombre="";
   apellido="";
   edad = -1;
   
   // Leer en una sola instruccion
   istringstream inputString3("Juan Perez 34");

   // Obtiene en una sola instruccion
   inputString3 >> nombre >> apellido >> edad;
   cout << "Los 3 datos leidos de una sola vez" << endl;

   cout << "Nombre   :" << nombre   << endl;
   cout << "Apellido :" << apellido << endl;
   cout << "Edad     :" << edad     << endl << endl;

   inputString3.clear();
   inputString3.str("Pedro Picapiedra 45");
   inputString3 >> nombre >> apellido >> edad;
   cout << "Los 3 datos leidos de una sola vez" << endl;
   
   cout << "Nombre   :" << nombre   << endl;
   cout << "Apellido :" << apellido << endl;
   cout << "Edad     :" << edad     << endl << endl;

      
   // Finaliza
   return 0;
}