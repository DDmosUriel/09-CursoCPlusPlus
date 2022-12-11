/*

Curso de C++
Autor: JAOR
Clase 73 - Clases Encapsulamiento

En C++ se conoce como encapsulamiento, ocultamiento o abstracción
de datos, a la capacidad de poder indicar que miembros de una clase
son elementos privados o públicos; esto se realiza a través de los
modificadores de acceso; indicados en la definición de una clase.

El encapsulamiento se utiliza para poder proteger a la información
de modificaciones no deseadas, ya que cuando esta se define como
privada; solo puede ser accedida desde la misma clase en que se
define y no desde otras clases, o desde el objeto de la clase.

Los miembros de una clase se pueden dividir en públicos y privados.
(Es posible tambien protegidos, y se verá mas adelante).

Los miembros públicos son aquellos a los que se puede acceder libremente
desde la misma clase y desde fuera de la clase.

Los miembros privados, por el contrario, solamente pueden ser accedidos
por los métodos ( ahora así llamamos a las funciones ) de la propia clase.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Clase Empleado
class Empleado
{
    // Estable Acceso Privado
    private: // No es necesario indicar porque es el default

       // Miembros Privados
       string sEmpleadoNombre;
       string sEmpleadoApellido;

       // Función para establecer apellido por default
       void FnEmpleadoApellidoDefault()
       {
           // Establece el Apellido por Default
           sEmpleadoApellido="Pérez";
       }

    // Acceso Público
    public:

        // Miembros Públicos
        int   iEmpleadoEdad;
        float fEmpleadoPeso;
        float fEmpleadoEstatura;

        // Método para Establecer el Nombre (Setter)
        void FnEmpleadoNombreSet(string sNom, string sApe)
        {
             // Valida que el Nombre no sea JAOR
             if (sNom.find("JAOR")==string::npos)
             //if ((int)sNom.find("JAOR")<0)
             {
                // Coloca el Nombre
                sEmpleadoNombre = sNom;

                // Verifica si está vacío
                if (sApe.empty())
                {
                   // Llama al Método que establece el Apellido por Default
                   FnEmpleadoApellidoDefault();

                   // Mensaje de Apellido por Default
                   cout << "El Apellido no puede estar vacío.\nSe asignó Apellido por default" << endl << endl;
                }
                else
                   // Establece el Apellido
                   sEmpleadoApellido = sApe;
             }
             else
                cout << "El Nombre no puede ser JAOR.\nNo se asignó Nombre ni Apellido" << endl << endl;

        }

        // Método para Obtener el Nombre del Empleado (Getter)
        string FnStringEmpleadoNombreGet()
        {

            // Retorna el Nombre y Apellido del Empleado
            return sEmpleadoNombre+ "." + sEmpleadoApellido;

        }


};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 73 - Clases Definición" << endl << endl;


    // Crea el objeto de la Clase
    Empleado xEmpleado;

    // Accede a los Miembros Públicos
    xEmpleado.iEmpleadoEdad      = 33;
    xEmpleado.fEmpleadoPeso      = 88.50;
    xEmpleado.fEmpleadoEstatura  = 1.82;

    // Accede al Nombre del Empleado a través de la Función
    xEmpleado.FnEmpleadoNombreSet("JAOR","SOFTWARE");

    // Desplegamos los datos del Empleado
    cout << "Nombre   : " << xEmpleado.FnStringEmpleadoNombreGet() << endl;
    cout << "Edad     : " << xEmpleado.iEmpleadoEdad << endl;
    cout << "Estatura : " << xEmpleado.fEmpleadoEstatura << endl;
    cout << "Peso     : " << xEmpleado.fEmpleadoPeso << endl << endl;

    // Intenta establecer apellido vacío
    xEmpleado.FnEmpleadoNombreSet("Juan","");

    // Desplegamos los datos del Empleado
    cout << "Nombre   : " << xEmpleado.FnStringEmpleadoNombreGet() << endl;
    cout << "Edad     : " << xEmpleado.iEmpleadoEdad << endl;
    cout << "Estatura : " << xEmpleado.fEmpleadoEstatura << endl;
    cout << "Peso     : " << xEmpleado.fEmpleadoPeso << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
