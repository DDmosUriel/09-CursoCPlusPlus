/*

Curso de C++
Autor: JAOR
Clase 43 - Ciclo for extendido

En esta clase veremos un ciclo for, el cual se le conoce
como extendido, basado en rangos, o for each.

Este ciclo lo que hace es declarar una variable dentro
del ciclo, la cual va tomando cada uno de los valores
de una COLECCIÓN de datos.

Para que este tipo de for, sea permitido por el compilador
se debe de activar una bandera de compilación.

Veremos ejemplos con arrays y con vectores.

*/

// Inclusión de Librerías
#include <iostream>
#include <vector>

// Definición de espacios de nombre
using namespace std;

// Función para desplegar una tabla de Multiplicar
void FnDespliegaTabla(int xTabla, int xTope)
{

    // Ciclo
    for (int iIndice=1; iIndice <= xTope; iIndice++)
        cout << xTabla << " X " << iIndice << " = " << xTabla * iIndice << endl;

    // Salta la Linea
    cout << endl;
}


// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 43 - Ciclo for extendido \n\n";

    // Declara un Vector de Edades
    int iEdades[]={2,34,56,78,98,65,43,21};

    cout << "Imprimiendo las Edades con For usando una Función \n\n";

    // Definición del Ciclo
    for (int x=1; x< 8; FnDespliegaTabla(x++,10))
    {

        // Mensaje de la Tabla
        cout << "Desplegando la Tabla del " << x << endl;

    };
    cout << endl;

    // Desplegando con for extendido las Edades
    cout << "Desplegando las Edades \n";
    // Ciclo for extendido
    for (int x: iEdades)
        cout << x << endl;

    // Cambio de Línea
    cout << endl;

    // Declarando un Vector
    vector<float> vecPesos;
    vecPesos.push_back( 88.5 );
    vecPesos.push_back( 99.5 );
    vecPesos.push_back( 77.5 );
    vecPesos.push_back( 66.5 );
    vecPesos.push_back( 55.5 );
    vecPesos.push_back( 44.5 );

    // Ciclo para desplegar Pesos
    cout << "Desplegando el Vector Pesos \n";
    for (float xPeso : vecPesos )
    {
       cout << xPeso << endl;
    }

    /* Se finaliza la aplicación */
    return 0;
}
