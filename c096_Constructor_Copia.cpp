/*

Curso de C++
Autor: JAOR
Clase 96 - Constructor de Copia

Existe  un  caso  particular de Constructor, que nos permite inicializar un objeto
a partir de otro objeto de la misma clase; llamado Constructor de Copia.

Por  definición,  un Constructor de Copia, tiene un único argumento, el cual es una
referencia constante a un objeto de su misma clase. Su declaración es la siguiente:

Clase (const &xClase)

Podemos decir que simplemente es una sobrecarga del Constructor.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Clase Empleado
class Empleado
{
    // Estable Acceso Privado
    private:

        // Miembros Privados
        string sEmpleadoNombre;
        string sEmpleadoApellido;

    // Acceso Público
    public:

        // Constructor
        Empleado(string strNombre, string strApellido)
        {
            // Mensaje de Constructor
            cout << "Constructor ..." << endl;

            // Asigna el nombre y el apellido
            sEmpleadoNombre   = strNombre;
            sEmpleadoApellido = strApellido;

        }

        // Obtiene el Nombre del Empleado
        string FnStrGetNombreEmpleado()
        {
            // Devuelve el Nombre y el Apellido
            return sEmpleadoNombre+"."+sEmpleadoApellido;
        }

        // Establece el Nombre
        void FnSetNombreEmpleado(string sNombre, string sApellido)
        {

            // Establece el Nombre y Apellido del Empleado
            sEmpleadoNombre   = sNombre;
            sEmpleadoApellido = sApellido;

        }

        // Constructor de Copia
        Empleado (const Empleado &xEmpleado)
        {

            // Mensaje
            cout << "Constructor de Copia ..." << endl;

            // Realiza las mismas acciones
            // Asigna el nombre y el apellido
            sEmpleadoNombre   = xEmpleado.sEmpleadoNombre;
            sEmpleadoApellido = xEmpleado.sEmpleadoApellido;

        }
};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 96 - Constructor de Copia" << endl << endl;


    // Crea el objeto de la Clase
    Empleado xEmpleado1("Juan","Perez");
    Empleado xEmpleado2=xEmpleado1;
    Empleado xEmpleado3(xEmpleado1);

    // Desplegamos los datos del Empleado
    cout << "Nombre Empleado 1 : " << xEmpleado1.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 2 : " << xEmpleado2.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 3 : " << xEmpleado3.FnStrGetNombreEmpleado() << endl;
    cout << endl;

    // Cambiamos los Nombres del Empleado 2 y 3
    xEmpleado2.FnSetNombreEmpleado("Alberto","Cortes");
    xEmpleado3.FnSetNombreEmpleado("Maria","Morales");

    cout << "Nombre Empleado 1 : " << xEmpleado1.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 2 : " << xEmpleado2.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 3 : " << xEmpleado3.FnStrGetNombreEmpleado() << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;

}
