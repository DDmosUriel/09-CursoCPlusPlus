/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 82 - Miembros Estáticos

En esta clase veremos el uso del modificador static, al definir un
miembro de una clase.

Cuando definimos un miembro estático en una Clase,  este dato será
único para todos los objetos que se construya de la Clase; y todos
los elementos podrán acceder al mismo objeto.

Veremos como es posible acceder a estos elementos sin haber creado
un objeto de la Clase.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Definimos una Clase para Personas
class Personas
{
    // Elementos Privados
    private:

        // Datos Generales de la Persona
        string sNombre;
        string sApellido;

    // Miembros Públicos
    public:

        // Constructor
        Personas(string sNom, string sApe)
        {
           // Coloca los valores por default
           sNombre=sNom;
           sApellido=sApe;

           // Incrementa el Contador de Personas
           iPersonasContador++;
        }

        // Contador de Personas.
        static int iPersonasContador;

        // Obtiene el Nombre
        string getNombre()
        {
            // Retorna el Nombre
            return sNombre;
        }

        // Obtiene el Apellido
        string getApellido()
        {
            // Retorna el Nombre
            return sApellido;
        }

};


// Inicializamos el Contador de Personas.
int Personas::iPersonasContador = 0;


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 82 - Miembros Estáticos" << endl << endl;

    // Accediendo a Elemento Static desde una función
    //Personas::iPersonasContador = 10;

    // Creamos una Persona
    Personas xPersona1("Juan","Pérez");
    cout << "Info desde Personas desde 1: " << endl;
    cout << "Nombre   : " << xPersona1.getNombre()           << endl;
    cout << "Apellido : " << xPersona1.getApellido()         << endl;
    cout << "Contador : " << xPersona1.iPersonasContador     << endl;
    cout << endl;

    // Creamos otra Persona
    Personas xPersona2("Benito","Juárez");
    cout << "Info desde Personas desde 2: " << endl;
    cout << "Nombre   : " << xPersona2.getNombre()           << endl;
    cout << "Apellido : " << xPersona2.getApellido()         << endl;
    cout << "Contador : " << xPersona2.iPersonasContador     << endl;
    cout << endl;

    // Creamos una Persona
    Personas xPersona3("María","Morales");
    cout << "Info desde Personas desde 3: " << endl;
    cout << "Nombre   : " << xPersona3.getNombre()           << endl;
    cout << "Apellido : " << xPersona3.getApellido()         << endl;
    cout << "Contador : " << xPersona3.iPersonasContador     << endl;
    cout << endl;

    // Modifico el Contador a 100
    xPersona3.iPersonasContador=100;


    // Creamos otra persona
    Personas xPersona4("Josefa","Ortiz");

    cout << "Info desde Personas desde 4: " << endl;
    cout << "Nombre   : " << xPersona4.getNombre()           << endl;
    cout << "Apellido : " << xPersona4.getApellido()         << endl;
    cout << "Contador : " << xPersona4.iPersonasContador     << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;

}
