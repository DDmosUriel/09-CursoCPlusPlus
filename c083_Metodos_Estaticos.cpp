/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 83 - Métodos Estáticos

Un Método Estático puede ser llamado sin haber creado un objeto
de la Clase, y puede ser accedido utilizando el nombre de la clase,
y el operador de resolución ::.

Un Método Estático sólo puede acceder a miembros estáticos.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

class Personas
{
    private:

        // Contador de Personas.
        static int iPersonasContador;

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

        // Metodo Estático Inicializa el Contador
        static void setContadorReset()
        {
            // MEnsaje de Inicialización
            cout << "Inicializando Contador de Personas ..." << endl << endl;

            // Inicializa el Contador
            iPersonasContador=0;
        }

        // Metodo Estático Obtiene el Contador
        static int getContadorPersonas()
        {
            // Inicializa el Contador
            return iPersonasContador;

        }


};

// Inicializamos el Contador
int Personas::iPersonasContador=0;


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 83 - Métodos Estáticos" << endl << endl;

    cout << "Despliego el Contador de Personas:" << endl;
    cout << Personas::getContadorPersonas() << endl << endl;

    // Creamos una Persona
    Personas xPersona1("Juan","Pérez");
    cout << "Info desde Personas desde 1: " << endl;
    cout << "Nombre   : " << xPersona1.getNombre()           << endl;
    cout << "Apellido : " << xPersona1.getApellido()         << endl;
    cout << "Contador : " << xPersona1.getContadorPersonas()     << endl;
    cout << endl;

    // Creamos otra Persona
    Personas xPersona2("Benito","Juárez");
    cout << "Info desde Personas desde 2: " << endl;
    cout << "Nombre   : " << xPersona2.getNombre()           << endl;
    cout << "Apellido : " << xPersona2.getApellido()         << endl;
    cout << "Contador : " << xPersona2.getContadorPersonas()     << endl;
    cout << endl;

    // Inicializo el Contador de Personas
    Personas::setContadorReset();
    cout << "Despliego el Contador de Personas:" << endl;
    cout << Personas::getContadorPersonas() << endl << endl;

    // Creamos otra Persona
    Personas xPersona3("Benito","Perez");
    cout << "Info desde Personas desde 3: " << endl;
    cout << "Nombre   : " << xPersona3.getNombre()           << endl;
    cout << "Apellido : " << xPersona3.getApellido()         << endl;
    cout << "Contador : " << xPersona3.getContadorPersonas()     << endl;
    cout << endl;

    Personas::setContadorReset();
    cout << xPersona3.getContadorPersonas();

    // Finaliza la Aplicación
    return 0;

}
