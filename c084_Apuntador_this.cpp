/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 84 - Apuntador this

Cada objeto en C++ tiene su propia dirección, y esta dirección
es manejada a través del apuntador this.

Este apuntador es un parámetro implicito para todas las funciones
miembro de la Clase.

Las Funciones Amigas no tienen un apuntador this, porque estas no
son parte de la clase, tal y como ya lo aprendimos anteriormente.

Únicamente las funciones miembro de una clase tienen su apuntador
this.

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
        Personas(string sNombre, string sApellido)
        {
           // Coloca los valores por default
           this->sNombre   = sNombre;
           this->sApellido = sApellido;

           // Llama a la función
           cout << this->getNombre() << endl;

           // Incrementa el Contador de Personas
           this->iPersonasContador++;
        }

        // Obtiene el Nombre
        string getNombre()
        {
            // Retorna el Nombre
            return this->sNombre;
        }

        // Obtiene el Apellido
        string getApellido()
        {
            // Retorna el Nombre
            return this->sApellido;
        }

        // Metodo Estático Inicializa el Contador
        static void setContadorReset()
        {
            // Mensaje de Inicialización
            cout << "Inicializando Contador de Personas ..." << endl << endl;

            // Inicializa el Contador
            //this->iPersonasContador=0;
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
    cout << "Clase 84 - Apuntador this" << endl << endl;

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
