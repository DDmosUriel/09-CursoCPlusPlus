/*

Curso de C++
Autor: JAOR
Clase 41 - Strings

C++ introduce una nueva forma de manejar cadenas
utilizando la Clase String.

Para declarar un objeto de una clase String; se
realiza de la misma forma como se declara una
variable:

string strNombre="Juan";
string strApellido="Perez";
string strApellidoCompleto;

Una vez declarado el Objeto, es posible asignarle
valores de la misma forma que a las variables.

strApellidoCompleto = strNombre + " " + strApellido

Los objetos, a diferencia de las variables; ya
tienen integradas funciones; que nos permiten
realizar acciones con ellos. Esto ya es un
avance de lo que veremos en el tema de Clases.

En esta clase veremos las funciones mas importantes
que tiene la Clase String.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

int main ()
{

	// Mandamos un mensaje a la Pantalla
	cout << "Curso de C++ \n";
	cout << "Clase 41 - String \n\n";

    // Declaro objetos de la Clase String
    string strNombre="Juan";
    string strApellido="Perez";
    string strCompleto;

    // Asignaciones
    strCompleto= strNombre + " " + strApellido;

    // Desplegando
    cout << "Nombre  : " << strNombre   << endl;
    cout << "Apellido: " << strApellido << endl;
    cout << "Completo: " << strCompleto << endl << endl;

    // Accediendo a la Función de Longitud
    cout << "Longitud de Nombre   :" << strNombre.length()   << endl;
    cout << "Longitud de Apellido :" << strApellido.length() << endl;
    cout << "Longitud de Completo :" << strCompleto.length() << endl << endl;

    // Accediendo a la Función de SubString
    cout << "Substring desde el 1, 2 de Nombre   :" << strNombre.substr(1,2)   << endl;
    cout << "Substring desde el 2, 3 de Apellido :" << strApellido.substr(2,3) << endl;
    cout << "Substring desde el 3, 1 de Completo :" << strCompleto.substr(3,1) << endl << endl;

    // Accediendo a la Función Compare
    cout << "Comparando Nombre con Apellido   :" << strNombre.compare(strApellido)   << endl;
    cout << "Comparando Nombre con Nombre     :" << strNombre.compare(strNombre)     << endl;
    cout << "Comparando Apellido con Completo :" << strApellido.compare(strCompleto) << endl << endl;

    // Accediendo a las Funciones de búsqueda
    cout << "Encuentra erez en Apellido :" << (int)strApellido.find("erez",2) << endl;
    cout << "Encuentra re en Apellido desde la Derecha :" << (int)strApellido.rfind("re",1)  << endl;
    cout << "Encuentra la ultima u en Completo :" << (int)strCompleto.find_last_of("x")  << endl;



    // Finaliza la aplicación
    return 0;

}
