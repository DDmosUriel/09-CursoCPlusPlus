/*

Curso de C++
Autor: JAOR
Clase 78 - Funciones Amiga

Una función Amiga de una Clase, es aquella que se encuentra definida
fuera de la Clase, pero que tiene como parámetro a esta Clase,
permitiendo de esta forma que esta función amiga, pueda acceder
a los miembros privados de la clase.

Dicho de otra forma y mas a detalle, una función friend de una clase
es una función que no pertenece a la clase, pero que tiene permiso
para acceder a sus variables y funciones miembro privadas por medio
de los operadores punto (.) y flecha (->), sin tener que recurrir a
las funciones miembro públicas de la clase, que acceden a los elementos
privados.

El modificador friend es el que nos permite realizar esta indicación.
Es importante indicar que las funciones amigas no son publicas, ni
privadas; ya que se encuentran fuera de la Clase.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Definimos una Clase
class Test {

  // Elementos Privados
  private:
    int xPrivate;

  // Elementos Públicos
  public:

    // Constructor
    Test()
    {
       // Asigna un Valor a Elemento Privado
       xPrivate = 10;
    }

    // Función Miembro que Despliega Variable Privada
    void FnDespliegaPrivado()
    {
       // Despliega el Elemento Privado
       cout << "El Elemento Privado al Doble: "  << xPrivate * 2 << endl;
    }

    // Función Friend
    friend void FnAccesoAmigo(int, Test);
};

// Definición
void FnAccesoAmigo(int xExtra, Test xTest)
{
   // La función puede acceder a miembros privados
   // de la clase Test, ya que ha sido declarada "amiga"
   cout << "Desplegando xPrivate desde Función Amiga: " << xTest.xPrivate * xExtra << endl;
   
}

// Función no Amiga
void FnAccesoNoAmigo(Test xTest)
{
   // Esto marca error el Compilador
   //cout << "Intentando Desplegar xPrivate desde Función Amiga: " << xTest.xPrivate << endl;
   xTest.FnDespliegaPrivado();

}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 78 - Funciones Amiga" << endl << endl;

    // Creamos el Objeto de Test
    Test xDato;

    // Accedemos a través del Objeto
    xDato.FnDespliegaPrivado();

    // Accediendo a través de Función Amiga
    FnAccesoAmigo(5,xDato);

    FnAccesoNoAmigo(xDato);

    // Finaliza la Aplicación
    return 0;

}
