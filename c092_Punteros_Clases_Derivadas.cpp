/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 92 - Punteros a Clases Derivadas

El Manejo de Punteros a Clases, tiene una circunstancia muy especial que los
diferencía del resto.

Como se aprendió anteriormente, un puntero de un tipo generalmente no puede apuntar
a un objeto de otro tipo. Sin embargo, los punteros a clases son la excepción.

En C++, un puntero de la clase base podría ser usado para apuntar a un objeto de cualquier
clase derivada de esa base.

Cuando el puntero es declarado de la Clase Base, es posible acceder hacia los
miembros de la clase derivada que estén disponibles, realizando un cast de la clase
correspondiente.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Clase Persona
class Persona
{
    // Miembros Privados
    private:
        string sNombre;
        string sApellido;

    // Miembros Públicos
    public:

        // Constructor
        Persona(string sNom, string sApe)
        {
           // Asigna el Sueldo
           sNombre=sNom;
           sApellido=sApe;
        }

        // Metodo de Clase Base
        void FnDespliegaNombreCompleto()
        {
           // Despliega el Nombre
           cout << "Nombre:" << sNombre << " " << sApellido << endl;
        }
};

// Clase Empleado
class Empleado : public Persona
{

    private:
        float fSueldo;

    public:

        // Constructor
        Empleado(string sNombre, string sApellido) : Persona(sNombre,sApellido)
        {
          // Asigna el Sueldo
          fSueldo=49.50;
        }

        // Calcula y despliega el Sueldo
        void FnDespliegaSueldo()
        {
           // Despleiga
           cout << "Sueldo: " << fSueldo << endl;
        }
};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ " << endl;
    cout << "Clase 92 - Punteros a Clases Derivadas" << endl << endl;

    // Declaramos un apuntador a Personas
    Persona  *pPersona;

    // Declaramos un apuntador a Empleado
    Empleado *pEmpleado;

    // Declaramos un objeto Personas
    Persona xPersona("Juan","Perez");

    // Despliego el Nombre de la Persona
    xPersona.FnDespliegaNombreCompleto();
    cout << endl;

    // Declaramos un objeto Empleados
    Empleado xEmpleado("Alberto","Lopez");

    // Despliego nombre y sueldo
    xEmpleado.FnDespliegaNombreCompleto();
    xEmpleado.FnDespliegaSueldo();
    cout << endl;

    // Apuntamos hacia persona
    pPersona = &xPersona;

    // Podermos utilizar los recursos de la Clase Base Persona
    pPersona->FnDespliegaNombreCompleto();

    // Apuntamos hacia Empleado
    pPersona = &xEmpleado; // Error si no apuntamos a xEmpleado

    // Podemos utilizar los recursos de la Clase Base Persona
    pPersona->FnDespliegaNombreCompleto();

    // Podemos hacer un cast para acceder a la Clase Derivada
    ((Empleado *)pPersona)->FnDespliegaSueldo();
    cout << endl;

    // Obtenemos la dirección del Empleado en su apuntador
    pEmpleado = &xEmpleado;

    // Podemos utilizar los recursos de la Clase Base Persona
    pEmpleado->FnDespliegaNombreCompleto();
    pEmpleado->FnDespliegaSueldo();
    cout << endl;

    // Obtenemos la dirección del Empleado en su apuntador
    pEmpleado = &xPersona; // Esto no tiene mucha utilidad pero lo permite

    // Desplegamos su nombre y error al poder acceder al Sueldo
    pEmpleado->FnDespliegaNombreCompleto();
    pEmpleado->FnDespliegaSueldo(); // Error

    // Finaliza la Aplicación
    return 0;

}
