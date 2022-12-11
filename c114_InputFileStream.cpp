/*
Curso de C++
Autor: JAOR
Clase 114 - InputFileStream
*/

// Librerias
#include <iostream>
#include <fstream>
#include <sstream>

// Espacio de Nombres
using namespace std;

// Función Principal
int main()
{
    // Variable 
    ifstream inputFileStream;

    // Variable para leer datos
    string atributos="";
    string identificador;
    string propietario;
    string ejecutador;
    string proceso;
    string mes;
    string dia;
    string hora;
    string archivo;

    // Para leer una linea
    string linea;
    
    // Declara una variable is
    istringstream inputString;

    // Abre el Archivo
    inputFileStream.open("datos.txt");

    // Verifica apertura de archivo
    if (!inputFileStream.is_open())
       cout << "Error al abrir el archivo ..." << endl;
    else
    {
        // Ciclo para lectura del archivo
        while (inputFileStream >> atributos)
        {            
            // leo el resto de los datos
            inputFileStream >> identificador >> propietario >> ejecutador >> proceso;
            inputFileStream >> mes           >> dia         >> hora       >> archivo;

            // Despliego los datos
            cout << atributos << " "  << identificador << " " << propietario << " ";
            cout << ejecutador << " " << proceso << " " << mes << " " << dia << " ";
            cout << hora << " " << archivo << endl;           

            // Inicializamos datos
            atributos="";
            identificador="";
            propietario="";
            ejecutador="";
            proceso="";
            mes="";
            dia="";
            hora="";
            archivo="";
        }
        // Deja un espacio
        cout << endl;           

        // Cierra el archivo
        inputFileStream.close();    

        // Pausa
        cout << "Enter para continuar" << endl;
        getchar();
        
        // Abre el Archivo
        inputFileStream.open("datos3.txt");

        // Ciclo para lectura del archivo
        while (!inputFileStream.eof())
        {   
            // Leemos una linea
            getline(inputFileStream,linea);

            // Coloca la linea en el inputString
            inputString.clear();
            inputString.str(linea);

            // leo el resto de los datos
            inputString >> atributos >> identificador >> propietario >> ejecutador;
            inputString >> proceso   >> mes           >> dia;
            inputString >> hora      >> archivo;

            // Despliego los datos
            cout << atributos  << " " << identificador << " " << propietario << " ";
            cout << ejecutador << " " << proceso       << " " << mes         << " ";
            cout << dia        << " " << hora          << " " << archivo << endl;            

            // Inicializamos datos
            atributos="";
            identificador="";
            propietario="";
            ejecutador="";
            proceso="";
            mes="";
            dia="";
            hora="";
            archivo="";
        }
        // Cierra el archivo
        inputFileStream.close();
    }
    // Sale de la Aplicación
    return 0;
}