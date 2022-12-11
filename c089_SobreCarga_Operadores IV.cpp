/*

Curso de C++
Autor: JAOR
www.jaorsoftware.es

Clase 89 - Sobrecarga de Operadores IV

En esta Clase Veremos como sobrecargar un operador unario.

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Clase Test
class Test
{
    private:

        // Datos Generales de la Persona
        int iContador;

    // Miembros Públicos
    public:

        // Constructor
        Test(int iReset)
        {
           iContador=iReset;
        }

        // Retorna el Contador
        int getContador()
        {

            // Retorna el Contador
            return iContador;
        }

        // SobreCarga el Operador --
        Test operator --()
        {
            return Test(this->iContador--);
        }

        // SobreCarga el Operador ++
        Test operator ++()
        {
            return Test(this->iContador++);
        }

};



// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 89 - Sobrecarga de Operadores IV" << endl << endl;

    // Crea un objeto Inicializando el Contador
    Test xTest(5);

    // Despliega el Contador
    cout << "Contador:" << xTest.getContador() << endl;

    // Decrementa el Contador
    --xTest;
    xTest--;
    xTest--;

    // Despliega el Contador
    cout << "Contador:" << xTest.getContador() << endl;

    // Incrementa el Contador
    xTest++;
    ++xTest;
    ++xTest;
    ++xTest;



    // Despliega el Contador
    cout << "Contador:" << xTest.getContador() << endl;

    // Finaliza la Aplicación
    return 0;

}
