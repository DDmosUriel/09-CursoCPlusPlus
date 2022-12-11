/*

Curso de C++
Autor: JAOR
Clase 21 - Sentencia if

Existen sentencias o instrucciones que nos
permiten controlar el flujo del programa;
es decir que dependiendo de alguna circunstancia,
se deberan de ejecutar instrucciones o no.

Por ejemplo, si un programa tiene que imprimir
solo las facturas con un total mayor de 1000,
entonces habrá alguna sentencia de flujo que
controle esto.

La Sentencia por excelencia en la mayoría de los
lenguajes de programación para controlar el flujo
de un programa es la sentencia if.

La sintaxis de uso de la sentencia if es:

if (expresión)
{
   instruccion(es);
}

expresión.
Es cualquier expresión que al final devuelva un
valor de true o false; o como ya se ha mencionado
anteriormente; si es un valor numérico el que
devuelve, entonces si es 0 será considerado como
false y si no será considerado como true.

instruccion(es).
Son las instrucciones que se ejecutarán en caso
de que la expresión resulte verdadera.
Las llaves "{}" no son necesarias si es solo una
instrucción

Ejemplo:

if (x % 2 == 0)
   cout << x << "es un número par";

La anterior instrucción evalúa el valor
de x y si el residuo al dividir por 2, es 0;
entonces se despliega el mensaje de que
es un número par.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 21 - Sentencia if \n\n";

    // Mensaje de Evaluación
    cout << "Evaluando sentencia if \n";

    // Declaración de variable
    int iNumero=30;

    // Verifica si es par
    if (iNumero % 2==0)
       cout << iNumero << " es un número par";
    cout << endl;

    // Verifica si es múltiplo de3
    if (iNumero % 3==0)
       cout << iNumero << " es un número múltiplo de 3";
    cout << endl;

    // Verifica si es múltiplo de 5
    if (iNumero % 5==0)
       cout << iNumero << " es un múltiplo de 5";
    cout << endl;

    // Verifica si es múltiplo de 7
    if (iNumero % 7==0)
       cout << iNumero << " es un múltiplo de 7";
    cout << "Finaliza" << endl;

    /* Se finaliza la aplicación */
    return 0;
}
