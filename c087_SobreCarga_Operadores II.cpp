/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 87 - Sobrecarga de Operadores II

En esta Clase Veremos un ejemplo en el cual los parámetros
y el resultado son distintos.

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

        // Sobrecargamos el Operador +
        int operator +(const Personas xPersona)
        {
           // Declaramos una variable de tipo persona
           Personas xPersonaAux("NombreNull","ApellidoNull");

           // Suma el Nombre de la Primera Persona al pa
           xPersonaAux.setNombre(this->getNombre()+xPersona.getNombre());
           xPersonaAux.setApellido(this->getApellido()+xPersona.getApellido());

           // Retorna el Resultado
           cout << xPersonaAux.getNombre();
           cout << xPersonaAux.getApellido();

           return xPersonaAux.getNombre().length()+xPersonaAux.getApellido().length();
        }

        // Sobrecargamos el Operador +
        int operator *(int xInteger)
        {
           // Declara una variable auxiliar
           int iAuxiliar;
           //xInteger=2;

           // Obtiene la longitud y la Multiplica por el Parámetro
           iAuxiliar = this->getNombre().length() * xInteger;

           // Retorna el Resultado
           return iAuxiliar;
        }

};

// Inicializamos el Contador
int Personas::iPersonasContador=0;


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 87 - Sobrecarga de Operadores II" << endl << endl;

    // Creamos dos objetos Persona
    Personas xPersona1("J","é");
    Personas xPersona2("B","C");
    Personas xPersona3("Maria","Morales");

    // Declara una Variable Integer
    int xDato;
    int x=3;

    // Obtiene la Lontigud del Nombre de Persona Multiplicado por 10
    xDato = xPersona1 * x;

    // Despliega el Dato
    cout << "Longitud del Nombre de xPersona1 [" << xPersona1.getNombre() << "] * 3=" << xDato << endl;

    // Suma una Persona con 10
    xDato = xPersona2 * x;

    // Despliega el Dato
    cout << "Longitud del Nombre de xPersona2 [" << xPersona2.getNombre() << "] * 3=" << xDato << endl;

    // Suma una Persona con 10
    xDato = xPersona3 * x * 10 * (xPersona1 * 5);

    // Despliega el Dato
    cout << "Longitud del Nombre de xPersona3 [" << xPersona3.getNombre() << "] * 3=" << xDato << endl;

    xDato = xPersona1 + xPersona2;

    // Despliega el Dato
    cout << "Longitud:" << xDato << endl;
    cout << xPersona1.getNombre()+xPersona1.getApellido() << endl;
    cout << xPersona2.getNombre()+xPersona2.getApellido() << endl;

    // Finaliza la Aplicación
    return 0;

}
