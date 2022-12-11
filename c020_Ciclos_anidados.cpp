/*

Curso de C++
Autor: JAOR
Clase 20 - Ciclos Anidados

En programación se le conoce como anidar un ciclo,
al hecho de colocar un ciclo dentro de otro.

Veamos algunos ejemplos:

while(condicion)
{
    instrucciones;
    while(condicion)
    {
        instrucciones;
    }
    instrucciones;
{

for ( inicializa ; condicion; incremento )
{
    instrucciones;
    for ( inicializa ; condicion; incremento )
    {
        instrucciones;
    }
    instrucciones;
}

do
{
    instrucciones;
    do
    {
        instrucciones;
    }while( condicion );
    instrucciones;

}while( condicion );

Los Ciclos pueden ser combinados, es decir;
puede haber ciclos for, dentro de ciclos while
o do while, y viceversa.


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
    cout << "Clase 20 - Ciclos Anidados \n\n";

    // Ciclo Inicial
    int iTabla;
    int iMultiplicador;

    // Ciclo para recorrer las tablas
    for (iTabla=1; iTabla <= 10; iTabla++)
    {
        // Despliega el Número de la Tabla
        cout << "Desplegando la Tabla :" << iTabla << endl;

        // Inicializa el Multiplicador
        iMultiplicador=1;
        while (iMultiplicador <= 10)
        {
           // Tabla de Multiplicar
           cout << iTabla << " X " << iMultiplicador++ << " = " << iTabla * iMultiplicador << endl;

        }
        // Deja un espacio cuando termina la tabla
        cout << endl;
    }

    /* Se finaliza la aplicación */
    return 0;
}
