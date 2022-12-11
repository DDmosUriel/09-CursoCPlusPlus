/*

Curso de C++
Autor: JAOR
Clase 74 - Métodos - Funciones Miembro

En Clases anteriores hemos visto como definir Métodos o Funciones
miembro, dentro de una Clase.

Ahora veremos como es posible realizarlo fuera de la Declaración
de la Clase.

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
       void FnEmpleadoApellidoDefault();

    // Acceso Público
    public:

        // Miembros Públicos
        int   iEmpleadoEdad;
        float fEmpleadoPeso;
        float fEmpleadoEstatura;

        // Método para Establecer el Nombre (Setter)
        void FnEmpleadoNombreSet(string sNom, string sApe);

        // Método para Obtener el Nombre del Empleado (Getter)
        string FnStringEmpleadoNombreGet();

};

// Definiendo Métodos Fuera de la Clase

// Función para establecer apellido por default
void Empleado::FnEmpleadoApellidoDefault()
{
   // Establece el Apellido por Default
   sEmpleadoApellido="Pérez";
}

// Método para Establecer el Nombre (Setter)
void Empleado::FnEmpleadoNombreSet(string sNom, string sApe)
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
string Empleado::FnStringEmpleadoNombreGet()
{

    // Retorna el Nombre y Apellido del Empleado
    return sEmpleadoNombre+ "." + sEmpleadoApellido;

}


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 74 - Clases Métodos Funciones Miembro" << endl << endl;


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
