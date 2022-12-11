/*

Curso de C++
Autor: JAOR
Clase 77 - Destructor

Un Destructor de una Clase, al contrario de el Constructor, es una función
que se ejecuta al momento en que un objeto de una clase es destruido.
Así de simple.

Para definir un Destructor, debe de colocarse una ~ antes del Nombre, el cual
debe ser idéntico al nombre de la Clase.

Sigue las mismas reglas del Constructor, no se le define un tipo de dato
de retorno, y a diferencia del constructor; no puede tener parámetros; y por lo
tanto no puede sobrecargarse.

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


        // Destructor de la Clase
        ~Empleado()
        {
             // Mensaje
             cout << "Se ha ejecutado el Destructor de la Clase " << endl << endl;
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


// Función Test
void Test()
{

    // Declara una Variable
    Empleado yEmpleado("Nombre en el Test");

    // Desplegamos los datos del Empleado
    cout << "Nombre   : " << yEmpleado.FnStringEmpleadoNombreGet() << endl;
    cout << "Edad     : " << yEmpleado.iEmpleadoEdad << endl;
    cout << "Estatura : " << yEmpleado.fEmpleadoEstatura << endl;
    cout << "Peso     : " << yEmpleado.fEmpleadoPeso << endl << endl;

}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 77 - Clases Destructor" << endl << endl;

    // Llama a la Función que realiza el Test de Creación y Destrucción
    Test();

    // Crea el objeto de la Clase
    Empleado xEmpleado("JUAN");

    // Desplegamos los datos del Empleado
    cout << "Nombre   : " << xEmpleado.FnStringEmpleadoNombreGet() << endl;
    cout << "Edad     : " << xEmpleado.iEmpleadoEdad << endl;
    cout << "Estatura : " << xEmpleado.fEmpleadoEstatura << endl;
    cout << "Peso     : " << xEmpleado.fEmpleadoPeso << endl << endl;


    // Finaliza la Aplicación
    return 0;

    cout <<  "nO SE EJECUTA"  << endl << endl;


}
