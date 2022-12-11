/*

Curso de C++
Autor: JAOR
Clase 60 - Referencias como parámetros

En esta clase veremos como utilizar las referencias como
parámetros, y se verá la similitud que existe cuando se ha
utilizado el paso de parámetros por refencia vistos en
clases anteriores.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Funcion para Intercambiar valores
void FnIntercambia(int &x, int &y)
{
   // Declaramos una variable de tipo entero
   int temp;

   // Colocamos el valor de x en la variable temporal
   temp = x;

   // Colocamos el valor de x en y
   x = y;

   // Colocamos el valor de la variable temporal en x
   y = temp;

   // Finaliza la aplicación
   return;
}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 60 - Referencias como parámetros \n\n";

    // Declaro variable entera
    int iVar1 = 111;
    int iVar2 = 222;

    // Declaro una referencia a la anterior variable entera
    int& rInt1 = iVar1;
    int& rInt2 = iVar2;

    // Desplegando los valores
    cout << "El Valor de iVar1 :" << iVar1 << endl;
    cout << "El Valor de rInt1 :" << rInt1 << endl;
    cout << "El Valor de iVar2 :" << iVar2 << endl;
    cout << "El Valor de rInt2 :" << rInt2 << endl  << endl;

    // Es posible modificar el valor de la Variable referenciada desde la referencia
    rInt1=555;
    rInt2=777;

    // Desplegando los valores
    cout << "El Valor de iVar1 :" << iVar1 << endl;
    cout << "El Valor de rInt1 :" << rInt1 << endl;
    cout << "El Valor de iVar2 :" << iVar2 << endl;
    cout << "El Valor de rInt2 :" << rInt2 << endl  << endl;

    // Llamamos a la función de Intercambio con las variables referencias
    FnIntercambia(rInt1,rInt2);

    // Desplegando los valores
    cout << "El Valor de iVar1 :" << iVar1 << endl;
    cout << "El Valor de rInt1 :" << rInt1 << endl;
    cout << "El Valor de iVar2 :" << iVar2 << endl;
    cout << "El Valor de rInt2 :" << rInt2 << endl  << endl;

    // Y la misma función usadada con las variable referenciadas
    FnIntercambia(iVar1,iVar2);

    // Desplegando los valores
    cout << "El Valor de iVar1 :" << iVar1 << endl;
    cout << "El Valor de rInt1 :" << rInt1 << endl;
    cout << "El Valor de iVar2 :" << iVar2 << endl;
    cout << "El Valor de rInt2 :" << rInt2 << endl  << endl;

    // Finaliza la Aplicación
    return 0;

}
