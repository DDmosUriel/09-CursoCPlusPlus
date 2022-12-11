/*
Curso de C++
Autor: JAOR
Clase 113 - StringStream
*/

// Librerias
#include <iostream>
#include <sstream>

// Espacio de Nombres
using namespace std;

// Función Principal
int main()
{
    // Variable 
    stringstream ssObjeto;

    // Agregamos una fecha separadamente
    ssObjeto << "Jueves " << "| " << "17 " << "| "<< "Noviembre " << "| " << "2022"; 

    // Desplegamos todo
    cout << "Fecha:" << endl;
    cout << ssObjeto.str() << endl;

    // Declaramos variables para obtener los datos
    string diaSemana;
    int    dia;
    string mes;
    int    anio;
    string aux;
    
    // Obtenemos cada dato de la fecha
    ssObjeto >> diaSemana >> aux >> dia >> aux >> mes >> aux >> anio;

    // Desplegamos los datos
    cout << "Dia Semana:" << diaSemana << endl;
    cout << "Dia       :" << dia       << endl;
    cout << "Mes       :" << mes       << endl;
    cout << "Año       :" << anio      << endl << endl;
    
    // Mas Claro
    ssObjeto.clear();

    // Asignamos usando operador pacman
    ssObjeto << "Lunes 26 Agosto 2019";
    
    // Obtenemos cada dato
    ssObjeto >> diaSemana;
    ssObjeto >> dia;
    ssObjeto >> mes;
    ssObjeto >> anio;

    // Desplegamos los datos
    cout << "Dia Semana:" << diaSemana << endl;
    cout << "Dia       :" << dia       << endl;
    cout << "Mes       :" << mes       << endl;
    cout << "Año       :" << anio      << endl << endl;    
}