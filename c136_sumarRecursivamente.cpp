/*
Ejercicios de C++
c136 - sumarRecursivamente
       función recursiva que suma los numeros de una cadena
*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// FnSumar("564") = 5 + FnSumar("64") => 5 + 10 = 15
// FnSumar("64")  = 6 + FnSumar("4")  => 6 + 4  = 10
// FnSumar("4")   = 4 
 
// Function
int fn_sumar(string numeros)
{      
    // Variable para resultado
    int resultado;

    cout << "Sumando:" << numeros << endl;

    // Verify    
    if (numeros.size()>1)
    {
        resultado = stoi(numeros.substr(0,1)) + fn_sumar(numeros.substr(1));  
    }
    else
        resultado = stoi(numeros.substr(0,1));        

    cout << "Resultado de " << numeros << ":" << resultado << endl;
    return resultado;

}


// Declaramos la función main
int main ()
{
    // Call Function
    fn_sumar("564");

    // Cambio de Linea
    cout << endl;

    // Finaliza la Aplicación
    return 0;
}

