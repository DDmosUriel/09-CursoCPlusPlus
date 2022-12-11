/*

Curso de C++
Autor: JAOR
Clase 76 - Constructor Sobrecarga

Como cualquier otra función, un Constructor tambien puede Sobrecargarse;
es decir; que podemos definirlo en más de una ocasión y con parámetros distintos.

Cuando un objeto es creado; puede utilizarse cualquier de las definiciones
del Constructor.

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

        // Definimos el Constructor de la Clase
        Empleado()
        {
          // Inicializa los valores de los miembros
          sEmpleadoNombre   = "Juan";
          sEmpleadoApellido = "Pérez";
          iEmpleadoEdad = 33;
          fEmpleadoEstatura = 1.75;
          fEmpleadoPeso = 70;
        }

        // SobreCargando el Constructor
        Empleado(string sNombre)
        {
             // Valida que el Nombre no sea JAOR
             if (sNombre.find("JAOR")==string::npos)
             {
                // Coloca el Nombre
                sEmpleadoNombre = sNombre;

             }
             else
             {
                sEmpleadoNombre="Juan";
                cout << "El Nombre no puede ser JAOR.\n Se asigno Juan" << endl << endl;
             }
             sEmpleadoApellido = "Ramírez";
             iEmpleadoEdad = 44;
             fEmpleadoEstatura = 1.85;
             fEmpleadoPeso = 80;
        }
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
    cout << "Clase 76 - Clases Constructor Sobrecarga" << endl << endl;


    // Crea el objeto de la Clase
    Empleado xEmpleado("JUAN");
    string xString("OtroConstructor");


    // Desplegamos los datos del Empleado
    cout << "Nombre   : " << xEmpleado.FnStringEmpleadoNombreGet() << endl;
    cout << "Edad     : " << xEmpleado.iEmpleadoEdad << endl;
    cout << "Estatura : " << xEmpleado.fEmpleadoEstatura << endl;
    cout << "Peso     : " << xEmpleado.fEmpleadoPeso << endl << endl;
    cout << "sString  : " << xString << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
