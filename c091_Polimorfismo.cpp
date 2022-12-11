/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 91 - Polimorfismo

La palabra Polimorfismo significa que tiene muchas formas.
En C++ el Polimorfismo significa que cuando llamemos a una función
miembro, esta se comportará diferente dependiendo del objeto que
la ejecute.

Para que exista el Polimorfismo, debe de existir Jerarquía de Clases
a través de la Herencia.

En palabras de JAOR, esto significa sobrecargar una función pero en
clases derivadas. Cuando Sobrecargamos un Método en una misma clase
es simplemente Sobrecarga; cuando Sobrecargamos un Método en clases
derivadas es Polimorfismo.

Las 2 condiciones para que se cumpla el polimorfismo en una clase
especifica son:
a) La Clase debe ser hija de otra
b) En la clase debe haber un método com el mismo nombre que en la
   la clase padre.

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

        float FnflCalculaSueldo(float dias) // Extra Nov-2022
        {
           // Retorna el Sueldo
           return (fSueldo * dias);
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
    cout << "Clase 91 - Polimorfismo" << endl << endl;


    // Crea 3 objetos
    Empleado xEmpleado(400);
    cout << "Sueldo Empleado General :" << xEmpleado.FnflCalculaSueldo();
    cout << endl;

    EmpleadoVtas xEmpleadoVtas(400,.20);
    cout << "Sueldo Empleado Ventas  :" << xEmpleadoVtas.FnflCalculaSueldo();
    cout << endl;

    EmpleadoContab xEmpleadoContab(400,.20,500);
    cout << "Sueldo Empleado Contab  :" << xEmpleadoContab.FnflCalculaSueldo();
    cout << endl;


    // Finaliza la Aplicación
    return 0;

}
