/*
Curso de C++
Autor: JAOR
c124_ test uso de Seek

*/

// Incluimos librerias
#include <fstream>
#include <iostream>

// espacio de nombres
using namespace std;
 
// Función Principal
int main(int argc, char** argv)
{
    // Abrimos un archivo de entrada y salida que lo trunca si existe
    fstream myFile("test.txt",ios::in | ios::out | ios::trunc);
 
    // Grabamos en el archivo un mensaje
    //         0123456789012345678901234567890123
    myFile << "En un canal de youtube, del cual .";

    // Desplegamos la posición
    cout << "Posicion:" << myFile.tellg() << endl;
 
    // Movemos el apuntador al inicio (beg) con un desplazamiento de 6
    myFile.seekg(6, ios::beg);

    // Desplegamos la posición
    cout << "Posicion:" << myFile.tellg() << endl;
 
    // Variable para lerr
    char datos[255];

    // Leemos 5 caracteres desde el archivo
    myFile.read(datos, 5);

    // Desplegamos los datos
    cout << myFile.tellg() << endl;
 
    // Finalizamos la cadena
    datos[5] = 0;
 
    // Desplegamos
    cout << "Datos:" << datos << endl;

    // Retrocedemos 9 caracteres desde el final
    myFile.seekg(-9, ios::end);

    // Desplegamos la posición
    cout << "Posicion:" << myFile.tellg() << endl;
 
    // Leemos 5 caracteres
    myFile.read(datos, 5);
 
    // Finalizamos cadena
    datos[5] = 0;
 
    // Output the contents read from the file and close it
    cout << "Datos:"<< datos << endl;

    // Retrocedemos 9 caracteres desde donde se está
    myFile.seekg(-9, ios::cur);

    // Desplegamos la posición
    cout << "Posicion:" << myFile.tellg() << endl;
 
    // Leemos 5 caracteres
    myFile.read(datos, 5);
 
    // Finalizamos cadena
    datos[5] = 0;
 
    // Output the contents read from the file and close it
    cout << "Datos:"<< datos << endl;

    // Cerramos el archivo
    myFile.close();

}