/*

Curso de C++
Autor: JAOR
Clase 97 - Constructor de Copia II

En esta clase veremos bajo que circunstancia, debe de utilizarse el Constructor
de Copia.

La Circunstancia Especial, básicamente se presenta cuando uno de sus elementos
es un apuntador.

Al realizar la copia un objeto a otro, en el momento de la instanciación, lo
que se hace es que en los 2 objetos; su elemento apuntador tienen la
misma dirección; y entonces al tener la misma dirección, existe un conflicto
de manejo de información entre ellos.

Ejemplo. Suponga un objeto que para manejar el Nombre de una Persona, lo hace
a través de un apuntador:

Objeto 1 pNombre Dir:0x9898766   "Juan"

Cuando realizamos la instanciación del Segundo objeto, este tambien contiene
en el apuntador la misma dirección:

Objeto 2 pNombre Dir:0x9898766   "Juan"

Cuando modificamos el nombre del Objeto 1, lo que hacemos es modificar "Juan"
pero la dirección sigue siendo la misma; y entonces modificamos automática
mente el nombre en todos los demás objeto.

Para resolver esto, hay que Construir el Constructor de Copia, para que este
le genere una nueva dirección al nuevo objeto; y ahí copie el nombre.

*/

// Incluímos las librerías
#include <iostream>
#include <string.h>

// Definición de espacios de nombre
using namespace std;

// Clase Empleado
class Empleado
{
    // Estable Acceso Privado
    private: // No es necesario indicar porque es el default

        // Miembros Privados
        char*  sEmpleadoNombre;
        char*  sEmpleadoApellido;

    // Acceso Público
    public:

        // Constructor por Defecto
        Empleado(char *strNombre, char *strApellido)
        {

            // Mensaje de Constructor por Defecto
            cout << "Constructor por defecto ..." << endl;

            // Reserva Memoria para el Nombre y Apellido
            sEmpleadoNombre   = new char[50];
            sEmpleadoApellido = new char[50];

            // Copia los datos
            strcpy(sEmpleadoNombre,strNombre);
            strcpy(sEmpleadoApellido,strApellido);

        }

        // Obtiene el Nombre del Empleado
        char * FnStrGetNombreEmpleado()
        {
            // Variable Auxiliar
            char *sAux;
            sAux = new char[100];

            // Devuelve el Nombre y el Apellido
            strcat(sAux,sEmpleadoNombre);
            strcat(sAux,".");
            strcat(sAux,sEmpleadoApellido);
            return sAux;
        }

        // Establece el Nombre
        void FnSetNombreEmpleado(char *sNombre, char *sApellido)
        {

            // Establece el Nombre y Apellido del Empleado
            strcpy(sEmpleadoNombre,sNombre);
            strcpy(sEmpleadoApellido,sApellido);

        }

        // Constructor de Copia
        Empleado (const Empleado &xEmpleado)
        {
            // Variable entera para la Longitud
            //int iLongitudCadena;

            // Mensaje
            cout << "Constructor de Copia ..." << endl;

            // Reserva Memoria para el Nombre y Apellido
            //iLongitudCadena = strlen(xEmpleado.sEmpleadoNombre) + 1;
            sEmpleadoNombre   = new char[50];  // Asignamos una nueva dirección
            //iLongitudCadena = strlen(xEmpleado.sEmpleadoApellido) + 1;
            sEmpleadoApellido = new char[50];

            // Copia los datos
            strcpy(sEmpleadoNombre,xEmpleado.sEmpleadoNombre);
            strcpy(sEmpleadoApellido,xEmpleado.sEmpleadoApellido);
        }
};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 97 - Constructor de Copia" << endl << endl;


    // Crea el objeto de la Clase
    Empleado xEmpleado1("Juan","Olmedo");
    Empleado xEmpleado2=xEmpleado1;
    Empleado xEmpleado3(xEmpleado1);

    // Desplegamos los datos del Empleado
    cout << "Nombre Empleado 1 : " << xEmpleado1.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 2 : " << xEmpleado2.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 3 : " << xEmpleado3.FnStrGetNombreEmpleado() << endl;
    cout << endl;

    // Cambiamos los Nombres del Empleado 2 y 3
    xEmpleado2.FnSetNombreEmpleado("Alberto","Cortes");
    xEmpleado3.FnSetNombreEmpleado("María","Morales");

    cout << "Nombre Empleado 1 : " << xEmpleado1.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 2 : " << xEmpleado2.FnStrGetNombreEmpleado() << endl;
    cout << "Nombre Empleado 3 : " << xEmpleado3.FnStrGetNombreEmpleado() << endl;
    cout << endl;

    // Finaliza la Aplicación
    return 0;

}
