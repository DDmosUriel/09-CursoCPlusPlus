/*

Curso de C++
Autor: JAOR
Clase 37 - Funciones inline

Cuando una función es declarada inline, el compilador
coloca en cada parte de la llamada a la función, el código
correspondiente a la misma; o sea que realmente,
la función no existe o no es definida como un código aparte
al que se accede a través de una llamada.

Los cánones indican que estas funciones deben de utilizarse
cuando sean muy cortas; prácticamente una línea, y cuando
se necesita que se ejecuten muy rápidamente, ya que el programa
no tendrá que realizar salto alguno y regresar.

Si la definición de la función, es de mas de una linea, aunque
se indique que es inline, el compilador la ignorará.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función que calcula el maximo de 2 numeros
int Max(int x, int y)
{
    // Mensaje
    cout << "Buscando el Numero Max" << endl;

    // Retorna el mayor
    return (x > y)? x : y;
}

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 37 - Funciones inline \n\n";

    cout << "Max (20,10): "    << Max(20,10) << endl;
    cout << "Max (0,200): "    << Max(0,200) << endl;
    cout << "Max (100,1010): " << Max(100,1010) << endl;

    cout << "Max (20,10): "    << Max(20,10) << endl;
    cout << "Max (0,200): "    << Max(0,200) << endl;
    cout << "Max (100,1010): " << Max(100,1010) << endl;

    cout << "Max (20,10): "    << Max(20,10) << endl;
    cout << "Max (0,200): "    << Max(0,200) << endl;
    cout << "Max (100,1010): " << Max(100,1010) << endl;

    /* Se finaliza la aplicación */
    return 0;
}
