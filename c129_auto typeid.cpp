/*
Curso de C++
Autor: JAOR
c129_ auto y typeid()
*/


// Librerias
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

// Espacio de Nombres
using namespace std;


// función principal
int main () 
{
   // Declaramos un mapa (diccionario en python)
   map<string, string> airportCode;

   // Agregamos key, value al mapa
   airportCode.emplace("ALB", "Albany, USA");
   airportCode.emplace("MLN", "Melilla, Spain");
   airportCode.emplace("GRX", "Granada, Spain");

   // Desplegamos la descripción de 2 llaves
   cout << "MLN: " << airportCode.at("MLN") << endl;
   cout << "GRX: " << airportCode.at("GRX") << endl;
   // Lanza una exception
   //cout << "GRX?: " << airportCode.at("GRX?") << endl;

   // No se pueden tener 2 llaves duplicadas 
   airportCode.emplace("GRX", "Graz, Austria");

   // Esto no funciona
   //cout << airportCode.emplace("GRX", "Graz, Austria");

   // la variable auto
   auto result = airportCode.emplace("GRX", "Graz, Austria");

   // Descubri qye tiene first y second
   
   //cout << "first :" << result.first << endl;
   cout << "second:" << result.second << endl;

   // Validamos
   if (result.second)
      cout << "Si se pudo cambiar " << endl;
   else
      cout << "No se pudo cambiar " << endl;   

   // tipo de datos   
   cout << "a[" << typeid(result).name() << "]" << endl;
   int x = 19;
   cout << "b[" << typeid(x).name() <<"]" << endl;
   string y = "Hola Mundo";
   cout << "b[" << typeid(y).name() <<"]" << endl;
   
}