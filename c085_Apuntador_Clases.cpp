/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 85 - Apuntador a Clases

Así como hemos creado apuntadores para tipos de datos
tambien es posible crear apuntadores a Clases.

Se sigue exactamente la misma lógica.

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
    cout << "Clase 85 - Apuntadores a Clases" << endl << endl;

    // Creamos dos objetos Persona
    Personas xPersona1("Juan","Pérez");
    Personas xPersona2("Benito","Canales");

    // Creo un apuntador a la Clase
    Personas *ptrPersona;

    // Obtenemos la dirección del objeto de la Primera Persona
    ptrPersona = &xPersona1;

    // Hacemos uso del objeto desde el Apuntador
    cout << "Nombre    : " << ptrPersona->getNombre() << endl;
    cout << "Apellido  : " << ptrPersona->getApellido() << endl;
    cout << "Contador  : " << ptrPersona->getContadorPersonas() << endl << endl;

    // Obtenemos la dirección de la Segunda Persona
    ptrPersona = &xPersona2;

    // Hacemos uso del objeto desde el Apuntador
    cout << "Nombre    : " << ptrPersona->getNombre() << endl;
    cout << "Apellido  : " << ptrPersona->getApellido() << endl;
    cout << "Contador  : " << ptrPersona->getContadorPersonas() << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
