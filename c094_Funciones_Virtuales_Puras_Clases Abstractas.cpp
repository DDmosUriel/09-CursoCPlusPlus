/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 94 - Funciones Virtuales Puras / Clases Abstractas

Una función virtual pura es aquella que se declara en una clase base,
pero no se define; y que obliga a las clases derivadas a definirla.

Al no tener definición, no es posible usar la función en la clase
base, únicamente en las clases derivadas, que es donde se encuentra
definida.

Si una clase tiene al menos una funcion virtual pura, entonces esa clase
se dice que es 'abstracta'.

Una clase abstracta tiene una caracteristica importante: no puede haber
objetos de esa clase, aunque apuntadores si.

Una clase abstracta debe ser usada solo como una base, para otras clases
que heredaran.

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

        // Función Virtual Pura Declarada pero no definida; el "=0" la define como pura
        virtual float FnflCalculaSueldo()=0;

        // Función Test
        virtual void Test()=0;
//        {
//           cout << "Test Clase Base ..." << endl << endl;
//        }
};

// Clase Empleado Ventas
class EmpleadoVtas : public Empleado
{

    private:
        float fComision;

    public:

        // Constructor
        // Boeing737(Ppon todos los parametros):Cargo(Con sus parametros)
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

        // Función Test
        void Test2()
        {
           cout << "Test Clase Derivada Ventas ..." << endl << endl;
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

        // Función Test
        void Test()
        {
           cout << "Test Clase Derivada Contabilidad ..." << endl << endl;
        }
};


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ " << endl;
    cout << "Clase 94 - Funciones Puras Virtuales / Clases Abstractas" << endl << endl;


    // Crea 3 objetos
    //Empleado       xEmpleado(400); Ya no es posible instanciar de esta clase
    EmpleadoVtas   xEmpleadoVtas(400,.20);
    EmpleadoContab xEmpleadoContab(400,.20,500);

    // Apuntador a Clase Base
    Empleado       *pEmpleado; // Si es posible crear un apuntador a la Clase Abstracta

    // Lo siguiente ya no funciona porque no creamos el objeto
    // asignamos la Dirección de la Clase Base
    // pEmpleado = &xEmpleado;
    // Desplegamos el Sueldo del Empleado
    // cout << " Sueldo del Empleado:" << pEmpleado->FnflCalculaSueldo() << endl << endl;

    // asignamos la Dirección de la Clase Base
    pEmpleado = &xEmpleadoVtas;

    // Desplegamos el Sueldo del Empleado
    cout << "Sueldo del Empleado:" << pEmpleado->FnflCalculaSueldo() << endl;
    pEmpleado->Test();

    // asignamos la Dirección de la Clase Base
    pEmpleado = &xEmpleadoContab;

    // Desplegamos el Sueldo del Empleado
    cout << "Sueldo del Empleado:" << pEmpleado->FnflCalculaSueldo() << endl;
    pEmpleado->Test();

    // Finaliza la Aplicación
    return 0;

}
