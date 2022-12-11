/*

Curso de C++
Autor: JAOR
Clase 59 - Referencias

Una variable de tipo REFERENCIA, es un alias de otra variable; es decir
que podemos acceder a la información de la variable desde esta referencia.

Al ser un alias de una variable, nos permite acceder a la misma información
que la variable a la que está referenciada.

Cuando una variable referencia es definida, de inmediato debe inicializarse
referenciándola a una variable.

Alguien pudiera comentar, que una referencia es como un apuntador; ya que
en cierta forma maneja una dirección de memoria de otra variable; por lo
que a continuación, se indican las diferencias al respecto entre un Apuntador y
una Referencia, y que nos permite posteriormente dar un definición personal.

- No es posible tener referencias a NULL.

- Una vez que una referencia es asociada a una variable, esta referencia no puede
  cambiarse; tal y como sucede con los apuntadores que si es posible cambiar la
  dirección que contienen para apuntar a otra variable distinta.

- Una referencia DEBE ser inicializada al ser creada o definida. Un apuntador puede
  inicializarse en el momento en que se desee.

Tomando en cuenta estas diferencias, podemos decir (segun JAOR) que una referencia
es simplemente una VARIABLE APUNTADOR CONSTANTE; es decir; que al definirla hay que
darle un valor y que este valor no puede ser cambiado durante la ejecución del
programa.

Para definir una referencia se utiliza el operador & tal y como se muestra en el
siguiente ejemplo:

// Declaro variable entera
int iVariable;

// Declaro una referencia a la anterior variable entera
int& rInteger=iVariable;

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 59 - Referencias \n\n";

    // Declaro variable entera
    int iVariable  = 234;
    int iVariable2 = 123;

    // Declaro una referencia a la anterior variable entera
    int& rInteger=iVariable;
    //int& rInteger;

    // Desplegando los valores
    cout << "El valor de la variable entera       :" << iVariable << endl;
    cout << "El valor de la referencia entera     :" << rInteger  << endl  << endl;

    // Desplegando los valores
    cout << "La dirección de la variable entera   :" << &iVariable << endl;
    cout << "L dirección de la referencia entera  :" << &rInteger  << endl  << endl;

    // Tratando de cambiar la referencia
    rInteger = iVariable2;

    // Desplegando los valores
    cout << "El valor de la variable entera       :" << iVariable   << endl;
    cout << "El valor de la variable entera2      :" << iVariable2  << endl;
    cout << "El valor de la referencia entera     :" << rInteger    << endl;
    cout << "La dirección de la referencia entera :" << &rInteger   << endl;
    cout << "La dirección de la variable  entera  :" << &iVariable  << endl;
    cout << "La dirección de la variable2 entera  :" << &iVariable2 << endl << endl;

    // Modifico iVariable
    iVariable2=890;

    // Desplegando los valores
    cout << "El valor de la variable entera       :" << iVariable   << endl;
    cout << "El valor de la variable entera2      :" << iVariable2  << endl;
    cout << "El valor de la referencia entera     :" << rInteger    << endl;
    cout << "La dirección de la referencia entera :" << &rInteger   << endl;
    cout << "La dirección de la variable  entera  :" << &iVariable  << endl;
    cout << "La dirección de la variable2 entera  :" << &iVariable2 << endl << endl;


    // Comentar Protegida

    // Finaliza la Aplicación
    return 0;

}
