/*

Curso de C++
Autor: JAOR
Clase 27 - Funciones Parámetros


En muchas ocasiones, una función va a necesitar
información para realizar su actividad.

Para este caso se utilizan los parámetros, los cuales
tienen que indicarse tal y como si fueran variables.

Al ejecutar una función, deben de indicarse la misma
cantidad de parámetros que han sido señalados cuando
fué declarada la función; salvo excepción que veremos
mas adelante.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Define la función
void DespliegaTablaDel5()
{

    // Variable utilizada para multiplicar
    int iMultiplicador;

    // Despliega Titulo
    cout << "Tabla del 5" << endl;

    // Ciclo para desplegar la tabla
    for (iMultiplicador=1; iMultiplicador<=10; iMultiplicador++)

        // Despliega la Multiplicación
        cout << "5 X " << iMultiplicador << " = " << 5 * iMultiplicador << endl;

    // Salta un línea
    cout << endl;

}

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 27 - Funciones \n\n";

    // Llama a la Función
    DespliegaTablaDel5();

    // Mensaje Final
    cout << "Final ";

    /* Se finaliza la aplicación */
    return 0;
}


