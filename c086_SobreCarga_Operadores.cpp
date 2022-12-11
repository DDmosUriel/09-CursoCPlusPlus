/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 86 - Sobrecarga de Operadores

En Clases anteriores se aprendió a como poder sobrecargar una función.

Los Operadores tambien tienen la posibilidad de ser sobrecargados.

La sintaxis para poder sobrecargar un operador es la siguiente:

<tipo> operator <operador> (<argumentos>)
{
   <sentencias>;
}

A continuación, algunas consideraciones con respecto a la sobrecarga
de operadores:

a) Los siguientes operadores no pueden ser sobrecargados:
   ".", ".*", "::" y "?:".

b) Los operadores "=", "[]", "->", "()", "new" y "delete", sólo pueden ser
   sobrecargados cuando se definen como miembros de una clase.

c) Los argumentos deben ser tipos, enumerados o estructurados: int, struct, union o class.

d) El número de argumentos viene predeterminado dependiendo del operador.

e) El Tipo de datos de los parámetros y el valor de retorno, puede ser diferente.

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
        static Personas xPersonaAux2;

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
        Personas operator + (Personas xPersona)
        {
           // Declaramos una variable de tipo persona
           //Personas xPersonaAux("NombreNull","ApellidoNull");

           // Intentamos modificar xPersona1
           xPersona.setNombre("Modificado");

           // Suma el Nombre de la Primera Persona al pa
           //xPersonaAux.setNombre(this->getNombre()+"."+xPersona.getNombre());
           //xPersonaAux.setApellido(this->getApellido()+"."+xPersona.getApellido());
           xPersonaAux2.setNombre(this->getNombre()+"."+xPersona.getNombre());
           xPersonaAux2.setApellido(this->getApellido()+xPersona.getApellido());

           // Retorna el Resultado
           //return xPersonaAux;
           return xPersonaAux2;
        }

};

// Inicializamos el Contador
int Personas::iPersonasContador=0;
Personas Personas::xPersonaAux2("Vacio","Vacio");


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 86 - Sobrecarga de Operadores" << endl << endl;

    // Creamos dos objetos Persona
    Personas xPersona1("Juan","Pérez");
    Personas xPersona2("Benito","Canales");
    Personas xPersona3("Maria","Morales");

    // Llamamos al Operador
    xPersona3 = xPersona1+xPersona2;

    // Hacemos uso del objeto desde el Apuntador
    cout << "Nombre    : " << xPersona3.getNombre() << endl;
    cout << "Apellido  : " << xPersona3.getApellido() << endl;
    cout << "Contador  : " << xPersona3.getContadorPersonas() << endl << endl;

    // Llamamos al Operador
    xPersona3 = xPersona2+xPersona1;

    // Hacemos uso del objeto desde el Apuntador
    cout << "Nombre    : " << xPersona3.getNombre() << endl;
    cout << "Apellido  : " << xPersona3.getApellido() << endl;
    cout << "Contador  : " << xPersona3.getContadorPersonas() << endl << endl;


    // Llamamos al Operador
    xPersona3 = xPersona2+xPersona2;

    // Hacemos uso del objeto desde el Apuntador
    cout << "Nombre    : " << xPersona3.getNombre() << endl;
    cout << "Apellido  : " << xPersona3.getApellido() << endl;
    cout << "Contador  : " << xPersona3.getContadorPersonas() << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
