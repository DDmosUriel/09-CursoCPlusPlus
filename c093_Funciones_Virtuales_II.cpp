/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 93 - Funciones Virtuales

Una función virtual es aquella que nos permite que un objeto
apuntador de una Clase Base; puede comportarse de muchas formas
cuando apunta a clases derivadas, y utiliza la misma función.

Esta capacidad de las Funciones Virtuales, nos van a permitir utilizar
el polimofismo a su definición mas detallada y que es, que un mismo
objeto pueda comportarse de diversas formas.

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
        float FnflCalculaSueldo()
        {
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
        float FnflCalculaSueldo()
        {
           // Retorna el Sueldo
           return ((fSueldo * 30 * (1+fComision)) + fBono);
        }
};


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ " << endl;
    cout << "Clase 93 - Funciones Virtuales" << endl << endl;


    // Crea 3 objetos
    Empleado       xEmpleado(400);
    EmpleadoVtas   xEmpleadoVtas(400,.20);
    EmpleadoContab xEmpleadoContab(400,.20,500);

    // Apuntador a Clase Base
    Empleado       *pEmpleado;

    // asignamos la Dirección de la Clase Base
    pEmpleado = &xEmpleado;

    // Desplegamos el Sueldo del Empleado
    cout << " Sueldo del Empleado:" << pEmpleado->FnflCalculaSueldo() << endl << endl;

    // asignamos la Dirección de la Clase Base
    pEmpleado = &xEmpleadoVtas;

    // Desplegamos el Sueldo del Empleado
    cout << " Sueldo del Empleado:" << pEmpleado->FnflCalculaSueldo() << endl << endl;

    // asignamos la Dirección de la Clase Base
    pEmpleado = &xEmpleadoContab;

    // Desplegamos el Sueldo del Empleado
    cout << " Sueldo del Empleado:" << pEmpleado->FnflCalculaSueldo() << endl << endl;


    // Desplegamos el Sueldo del Empleado
    cout << " Sueldo del Empleado:" << xEmpleado.FnflCalculaSueldo() << endl << endl;

    // Desplegamos el Sueldo del Empleado
    cout << " Sueldo del Empleado:" << xEmpleadoVtas.FnflCalculaSueldo() << endl << endl;

    // Desplegamos el Sueldo del Empleado
    cout << " Sueldo del Empleado:" << xEmpleadoContab.FnflCalculaSueldo() << endl << endl;




    // Finaliza la Aplicación
    return 0;

}
