/*
Curso de C++
Autor: JAOR
c121_ Excepcione Generales y String Stream Exception
*/

// Librerias
#include <iostream>
#include <string>
#include <sstream>

// Espacio de nombres
using namespace std;

// Funcion principal
int main() 
{
   // declaramos objeto String Stream
   stringstream ss;

   // Variable para lectura de Datos
   string entradaDatos=" ";

   // Variable para convertir a un valor
   int value;
   
   // Lanza excepción si no puede convertir
   ss.exceptions(ios::failbit);
      
   // Verificamos que no esté vacío
   while (true) 
   {
      // Mensaje de Solicitud de Captura
      cout << "Capture un Dato para Divisor de 60:" << endl;
      getline(cin, entradaDatos);

      // Verifica salida del Programa
      if (entradaDatos == "")
         break;
   
      // Capturamos el error
      try 
      {
         // Limpiamos el String Stream
         ss.str("");
         ss.clear();       
         
         // Pasamos el dato capturado a entrada de Datos  
         ss << entradaDatos;

         // Lo sacamos a valor
         value=5;
         ss >> value;

         // Verificamos si es 0
         if (value == 0) 
         {
            // Lanzamos una exception
            throw runtime_error("La División en 0 no está definida");
         }         

         // Se realiza la división
         cout << "Resultado:" << 60 / value << endl;
      }

      // Captura de la conversión
      catch (ios_base::failure& excpt) 
      {
         // No pudo realizar la conversión
         cout << "No se pudo realizar la conversión en String Stream" << endl;         
      }      

      
      // Captura del Error
      catch (runtime_error& excpt) 
      {
         // Mensaje
         cout << "Error:" << excpt.what() << endl;      
      }

      // Captura cualquier excepción
      catch(...)
      {
         // Mensaje 
         cout << "Ocurrió una excepcion " << endl;
      }

      // Deja un linea
      cout << endl;
   }

   // Salida del Programa
   cout << "Programa terminado ..." << endl;
   
   // Finaliza retornando 0
   return 0;
}


// Input
// -2
// 0
// eight
// 10
// end

//Input Output
// -2 -30
// 0 z
// eight t
// 10 6
// end OK

