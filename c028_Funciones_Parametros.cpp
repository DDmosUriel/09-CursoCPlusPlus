/*

Curso de C++
Autor: JAOR
Clase 28 - Funciones Parámetros


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
void DespliegaTabla(int iTabla)
{

    // Variable utilizada para multiplicar
    int iMultiplicador;

    // Despliega Titulo
    cout << "Tabla del " << iTabla << endl;

    // Ciclo para desplegar la tabla
    for (iMultiplicador=1; iMultiplicador<=10; iMultiplicador++)

        // Despliega la Multiplicación
        cout << iTabla <<" X " << iMultiplicador << " = " << iTabla * iMultiplicador << endl;

    // Salta un línea
    cout << endl;

    //DespliegaMensaje("Fin de la Tabla \n");

}

// Define la función
void DespliegaMensaje(char* sMensaje)
{

    // Despliega Mensaje
    cout << sMensaje << endl;

}


// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 28 - Funciones Parámetros \n\n";


    // Mensaje Inicial
    DespliegaMensaje("Iniciando \n");

    // Llama a la Función
    DespliegaTabla(5);

    // Llama a la Función
    DespliegaTabla(7);

    // Mensaje Final
    DespliegaMensaje("Final \n");

    /* Se finaliza la aplicación */
    return 0;
}
