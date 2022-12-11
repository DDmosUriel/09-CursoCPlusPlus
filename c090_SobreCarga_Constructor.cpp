/*

Curso de C++
Autor: JAOR
Clase 89 - SobreCarga Constructores

En Clases anteriores vimos como es posible sobrecargar una función.

Los Métodos de una Clase, tambien pueden ser sobrecargados de la
misma forma, e inclusive el Constructor.

SobreCargar el Constructor es lo que nos permite crear un objeto,
teniendo mas de una opción para realizarlo.

Se llama Constructor por Defecto a un constructor que no necesita
que se le pasen parámetros o argumentos para inicializar las variables
miembro de la clase.

Un Constructor por Defecto es pues un constructor que no tiene argumentos o que,
si los tiene, todos sus argumentos tienen asignados un valor por defecto en
la declaración del constructor. En cualquier caso, puede ser llamado sin
tenerle que pasar ningún argumento.

Un Constructor de Oficio, es aquel que el Compilador crea, cuando no se ha
establecido un constructor para la Clase; y este asigna los valores por defecto
según el tipo de dato del elemento.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Definimos una Clase para Personas
class Personas
{

    // Elementos Privados
    private:
        string sNombre;
        string sApellido;

    public:

        // Constructor por Defecto (Que no tiene parametros)
        Personas ()
        {
           // Asignamos Valores por Default
           sNombre="Juan";
           sApellido="Perez";
        }

//        // Constructor por Defecto con todos sus parametros con valores default
//        Personas (string sNom="Juan", string sApe="Perez")
//        {
//           // Asignamos Valores por Default
//           sNombre=sNom;
//           sApellido=sApe;
//        }

        // SobreCarga del Constructor
        Personas (string sNom, string sApe)
        {
           // Asigmamos los valores
           sNombre=sNom;
           sApellido=sApe;
        }

        // Getter para el Nombre de la Persona
        string getNombreCompleto()
        {
            // Retornamos el Nombre Completo
            return sNombre + "." + sApellido;
        }

        // Getter para el Nombre de la Persona
        string getNombreCompleto(string sSeparador)
        {
            // Retornamos el Nombre Completo
            return sNombre + sSeparador + sApellido;
        }
};

class Empleados : public Personas
{

    // Define elementos Privados
    private:
       string sDepartamento;
       float  fSueldoDiario;

    public:

        // Constructor
        Empleados(string sNom, string sApe)
                  :Personas(sNom,sApe) // Definimos Constructor Padre
        {
            // Asignamos Valores por Default al Departamento y Sueldo
            sDepartamento = "General";
            fSueldoDiario = 49.50;
        }

        // Constructor con Sueldo y Departamento
        Empleados(string sNom, string sApe,string sDepto,float fSueldo)
                 :Personas(sNom,sApe) // Definimos Constructor Padre
        {

            // Asignamos Valores por Default al Departamento y Sueldo
            sDepartamento = sDepto;
            fSueldoDiario = fSueldo;
        }

        // Obtenemos Departamento
        string getDepartamento()
        {
            // Obtiene el Departamento
            return sDepartamento;
        }

        // Obtenemos Sueldo
        float getSueldo()
        {
            // Obtiene el Departamento
            return fSueldoDiario;
        }

};


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 90 - SobreCarga Constructor" << endl << endl;

    // Creamos una persona con valores por default
    Personas xPersona1;

    // Desplegamos el Nombre Completo
    cout << "Nombre Completo Persona 1:";
    cout << xPersona1.getNombreCompleto() << endl << endl;

    // Creamos una persona con Nombre y Apellido
    Personas xPersona2("Alberto","Cortes");

    // Desplegamos el Nombre Completo
    cout << "Nombre Completo Persona 2:";
    cout << xPersona2.getNombreCompleto() << endl << endl;

    // Creamos Empleados
    Empleados xEmpleado1("Maria","Morales");
    cout << "Nombre Completo Empleado 1:";
    cout << xEmpleado1.getNombreCompleto() << endl;
    cout << "Departamento   :";
    cout << xEmpleado1.getDepartamento() << endl;
    cout << "Sueldo         :";
    cout << xEmpleado1.getSueldo() << endl << endl;


    // Creamos Empleados con Sueldo y Departamento
    Empleados xEmpleado2("Marco","Polo","Ventas",79.90);
    cout << "Nombre Completo Empleado 2:";
    cout << xEmpleado2.getNombreCompleto() << endl;
    cout << "Departamento   :";
    cout << xEmpleado2.getDepartamento() << endl;
    cout << "Sueldo         :";
    cout << xEmpleado2.getSueldo() << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
