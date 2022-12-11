/*

Curso de C++
Autor: JAOR
Clase 29 - Funciones return

Al inicio del tema de funciones, indicamos que estas
pueden retornar valores.

Para que esto sea posible, cuando se define la función,
se debe indicar el tipo de dato que devolverá.

El código de la función debe de contener la instrucción
return, la cual indicará cual es el valor que retornará.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Define la función
int Suma2Numeros(int iNumero1, int iNumero2)
{

    // Variable utilizada para multiplicar
    int iSuma;
    int iSuma2;


    // Calculamos la Suma
    iSuma = iNumero1 + iNumero2;

    // Verificamos otra suma
    iSuma2 = iNumero1 +100;

    if (false)
       return 10;
    else
       cout << "Hola";

}


// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 29 - Funciones return \n\n";

    int iResultado;

    // Mensaje Inicial
    cout <<  "Ejecutando Suma \n";


    // Llama a la Función
    iResultado = Suma2Numeros(15,7);

    cout << iResultado;

    /* Se finaliza la aplicación */
    return 0;
}
