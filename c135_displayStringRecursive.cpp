/*
Ejercicios de C++
c135 - displayStringRecursive
       función recursiva que despliega recursivamente una cadena
*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// FnImprime("cat") = imprimir c y llamar a FnImprime("at");
// FnImprime("at")  = imprimir a y llamar a FnImprime("t");
// FnImprime("t")   = imprimir t
 
// Function
void fn_imprimir(string message)
{   
    cout << "Imprimiendo:" << message << endl; 
    if (message.size()>1)
    {
       // Imprime la primer letra
       cout << message.at(0) << endl;       

       // Llama a la función con el resto de las letras
       fn_imprimir(message.substr(1));        
    }
    else
       // Imprime cuando es solo una letra
       cout << message << endl;    

    cout << "Terminando:" << message << endl;   
}


// Declaramos la función main
int main ()
{
    // Call Function
    fn_imprimir("cat");

    // Cambio de Linea
    cout << endl;

    // Finaliza la Aplicación
    return 0;
}

