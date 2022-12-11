/*

Curso de C++
Autor: JAOR

Clase 105 - namespaces

Un namespace, o espacio de nombres, es una forma de poder clasificar código, lo cual
nos permite tener mas de una función que se llame igual, pero que al encontrarse definida
en un espacio de nombres distinto, no causa conflictos al lenguaje, para que este sepa
cual utilizar.

Suponga que 2 librerías que van a utilizarse, tienen en común muchas funciones; es decir;
que hay varias funciones con el mismo nombre. Cuando el lenguaje trata de usar una función
que se encuentra en 2 librerías, puede distinguirlas por el nombre de espacio en que se
encuentra definida cada una de ellas.

Para definir un namespace, se utiliza la siguiente sintaxis:

namespace nombre_espacio {
  // Codigo correspondiente al nombre de espacio
}

Para llamar a una función o a una variable, que se encuentre dentro de un nombre de espacio,
se hace lo siguiente:

namespace::función_o_variable;

*/

// Incluimos las librerías necesarias
#include <fstream>
#include <iostream>

// El nombre de Espacio
//using namespace std;

// declaramos un nombre de espacio
namespace espacio_01
{

    // Declaramos una función dentro de este espacio
    void fnDespliegaMensaje()
    {
       // Despliega un Mensaje
       std::cout << "Función dentro de espacio_01" << std::endl;
    }
}

// declaramos otro nombre de espacio
namespace espacio_02
{
    // Declaramos una función con el mismo nombre
    void fnDespliegaMensaje()
    {
       // Despliega un Mensaje
       std::cout << "Función dentro de espacio_02" << std::endl;
    }
}

// Hacemos uso de espacio_02
//using namespace espacio_01;
using namespace espacio_02;

// Definimos función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    std::cout << "Curso de C++ "              << std::endl;
    std::cout << "Clase 105 - Memoria Dinámica" << std::endl << std::endl;

    // Llamamos a la función en el primer espacio
    espacio_01::fnDespliegaMensaje();
    fnDespliegaMensaje();

    // Llamamos a la función en el segundo espacio
    //espacio_02::fnDespliegaMensaje();

    // Finaliza la Aplicación
    return 0;

}
