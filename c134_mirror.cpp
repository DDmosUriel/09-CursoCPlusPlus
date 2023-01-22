/*
Ejercicios de C++
c134 - mirror
       función recursiva que despliega una cadena al reves
*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Fn("cat") = Fn("at");  imprimir c
// Fn("at")  = Fn("t");   imprimir a
// Fn("t")   = imprimir t
 
// Function
void fn_mirror(string message)
{
    cout << "analizando:" << message << endl;
    if (message.size()>1)
    {
       // Llama a la función con el resto de las letras
       fn_mirror(message.substr(1)); 

       // Imprime la primer letra
       cout << message.at(0);       
    }
    else
       cout << message;
    cout << "terminando:" << message << endl;   
}


// Declaramos la función main
int main ()
{
    // Call Function
    fn_mirror("cat");
    cout << endl;

    // Finaliza la Aplicación
    return 0;
}

