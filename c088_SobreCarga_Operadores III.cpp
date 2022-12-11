/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 88 - Sobrecarga de Operadores III

En esta Clase Veremos como sobrecargar un operador sin que
esto sea parte de la Clase.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Clase Personas
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

        // Establecemos el Nombre
        void setNombre(string sNombre)
        {
            // Establece el Nombre
            this->sNombre = sNombre;
        }

        void setApellido(string sApellido)
        {
            // Establece el Apellido
            this->sApellido = sApellido;
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

// Sobrecargamos operador
Personas operator + (const Personas xPersona1, const Personas xPersona2)
{
   // Declaramos una variable de tipo persona
   Personas xPersonaAux("NombreNull","ApellidoNull");

   // Suma el Nombre de la Primera Persona al pa
   xPersonaAux.setNombre(xPersona1.getNombre()+xPersona2.getNombre());
   xPersonaAux.setApellido(xPersona1.getApellido()+xPersona2.getApellido());

   // Devuelve xPersonaAux que tiene el resultado de la operación
   return xPersonaAux;
}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 88 - Sobrecarga de Operadores III" << endl << endl;

    // Creamos dos objetos Persona
    Personas xPersona1("Juan","Pérez");
    Personas xPersona2("Benito","Canales");
    Personas xPersona3("Maria","Morales");

    // Sumamos
    xPersona3 = xPersona1 + xPersona2;

    // Hacemos uso del objeto desde el Apuntador
    cout << "Nombre    : " << xPersona3.getNombre() << endl;
    cout << "Apellido  : " << xPersona3.getApellido() << endl;
    cout << "Contador  : " << xPersona3.getContadorPersonas() << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
