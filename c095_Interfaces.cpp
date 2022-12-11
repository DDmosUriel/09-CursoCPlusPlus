/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 95 - Interfaces

Lo primero que debemos de entender con respecto a las Interfaces
es que no las define una Palabra Reservada del Lenguaje; sino
mas bien es "una forma de hacer algo".

Una Interface,es una Clase Abstracta que no tiene implementación;
y que todos sus métodos deben ser Funciones Virtuales Puras.

De lo anterior, es posible concluir o deducir que las clases derivadas
de una interface, deben tener implementadas todos los métodos de
la interface.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Definimos una Clase Abstracta llamada Interface
class Interface
{
    public:

        Interface(){}                  // Constructor sin Implementar (opcional)
        virtual ~Interface(){}         // Destructor Virtual sin Implementar (opcional)
        virtual void FnMetodo1()=0;    // Función Pura Virtual
        virtual void FnMetodo2()=0;    // Función Pura Virtual
};

// Clase Derivada de una Interface
class DerivadaInterface : public Interface
{
    private:
         int myMember;

    public:
        DerivadaInterface(int iIde)
        {
           // Mensaje del Constructor de Derivada
           myMember = iIde;
           cout << "Constructor del Objeto id:" << myMember << endl << endl;
        }
        ~DerivadaInterface()
        {
           // Mensaje del Destructor de Derivada
           cout << "Destructor del Objeto id: "<< myMember << endl << endl;
        }

        // Métodos Obligados a Implementar
        void FnMetodo1()
        {
             // Mensaje
             cout << "Método1 del Objeto:" << myMember << " de la Interface Derivada ..." << endl << endl;
        }

        // Métodos Obligados a Implementar
        void FnMetodo2()
        {
             // Mensaje
             cout << "Método2 del Objeto:" << myMember << " de la Interface Derivada ..." << endl << endl;
        }
};


// Función Principal
int main(void)
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ " << endl;
    cout << "Clase 95 - Interfaces" << endl << endl;

    // No es posible declarar un objeto de una Interface
    // Interface xInterface;

    // Declara un apuntador
    Interface *pInterface;

    // Declara un objeto de la Clase Derivada
    DerivadaInterface xDerivadaInterface(10);

    // Apunta a la Clase Derivada
    pInterface = &xDerivadaInterface;

    // Accede a los métodos desde el objeto
    xDerivadaInterface.FnMetodo1();
    xDerivadaInterface.FnMetodo2();

    // Accede a los métodos desde el apuntador
    pInterface->FnMetodo1();
    pInterface->FnMetodo2();

    // Cuando se haya visto memoria dinámica se podrá hacer así
    // Creamos un objeto de la Clase Derivada
    Interface *pInterface2 = new DerivadaInterface(20);

    pInterface2->FnMetodo1();
    pInterface2->FnMetodo2();

    // Eliminanos el Objeto Creado
    delete pInterface2;


    // Finaliza la aplicación
    return 0;

}
