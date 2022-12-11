/*
Curso de C++
Autor: JAOR
Clase 116 - EjecutandoExterno
*/

// Librerias
#include <iostream>


// Espacio de Nombres
using namespace std;

// Función Principal
int main()
{
    // Variable de retorno
    int retorno=0;

    // Variable para el comando
    string comando;

    // Ejecutando externo
    cout << "Ejecutando test ..."<< endl;

    // Mensaje de Comando
    cout << "Captura el comando a ejecutar ..." << endl;
    getline(cin,comando);

    //int x = system("./test");
    int x = system(comando.c_str());

    cout << "Lo que devuelve system:" << (x/256) << endl;


    // Sale de la Aplicación
    return retorno;
}