/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 92 - Funciones Virtuales


*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Clase Empleado
class Empleado
{
    // Miembros Privados
    protected:  // Lo coloco protected para acceder a el ya que no tiene getter
        float fSueldo;

    // Miembros Públicos
    public:

        // Constructor
        Empleado(float fSueldo)
        {
           // Asigna el Sueldo
           this->fSueldo=fSueldo;
        }

        // Calcula el Sueldo
        virtual float FnflCalculaSueldo()
        {
           // Mensaje de Sueldo
           cout << "Retornando Sueldo de Empleado.." << endl;
           // Retorna el Sueldo
           return (fSueldo * 30);
        }
};

// Clase Empleado Ventas
class EmpleadoVtas : public Empleado
{

    private:
        float fComision;

    public:

        // Constructor
        EmpleadoVtas(float fSueldo, float fComision) : Empleado(fSueldo)
        {
          // Asigna la comisión
          this->fComision=fComision;
        }

        // Calcula el Sueldo
        float FnflCalculaSueldo()
        {
           // Mensaje de Sueldo
           cout << "Retornando Sueldo de Empleado de Ventas.." << endl;

           // Retorna el Sueldo
           return (fSueldo * 30 * (1+fComision));
        }
};

// Clase Empleado Contabilidad
class EmpleadoContab : public Empleado
{

    private:
        float fComision;
        float fBono;

    public:

        // Constructor
        EmpleadoContab(float fSueldo, float fComision,float fBono) : Empleado(fSueldo)
        {
          // Asigna la comisión y el Bono
          this->fComision = fComision;
          this->fBono = fBono;
        }

        // Calcula el Sueldo
        virtual float FnflCalculaSueldo()
        {
           // Mensaje de Sueldo
           cout << "Retornando Sueldo de Empleado de Contabilidad.." << endl;

           // Retorna el Sueldo
           return ((fSueldo * 30 * (1+fComision)) + fBono);
        }
};



// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ " << endl;
    cout << "Clase 91 - Polimorfismo" << endl << endl;


    // Crea 3 objetos
    Empleado xEmpleado(400);
    cout << "Sueldo Empleado General :" << xEmpleado.FnflCalculaSueldo();
    cout << endl;
    cout << endl;

    EmpleadoVtas xEmpleadoVtas(400,.20);
    cout << "Sueldo Empleado Ventas  :" << xEmpleadoVtas.FnflCalculaSueldo();
    cout << endl;
    cout << endl;

    EmpleadoContab xEmpleadoContab(400,.20,500);
    cout << "Sueldo Empleado Contab  :" << xEmpleadoContab.FnflCalculaSueldo();
    cout << endl;
    cout << endl;

    // Declaramos un apuntador a la Clase
    Empleado *pEmpleado;

    // Obtiene la Dirección del Empleado
    pEmpleado = &xEmpleado;

    // Despliega con el apuntador
    cout << "Sueldo Empleado  :" << pEmpleado->FnflCalculaSueldo() << endl;
    cout << endl;

    // Obtiene la dirección del Empleado de Ventas
    pEmpleado = &xEmpleadoVtas;

    // Despliega con el apuntador
    cout << "Sueldo Empleado  :" << pEmpleado->FnflCalculaSueldo() << endl;
    cout << endl;


    // Obtiene la dirección del Empleado de Contabilidad
    pEmpleado = &xEmpleadoContab;

    // Despliega con el apuntador
    cout << "Sueldo Empleado  :" << pEmpleado->FnflCalculaSueldo() << endl;
    cout << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;

}
