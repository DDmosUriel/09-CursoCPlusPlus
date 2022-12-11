/*

Curso de C++
Autor: JAOR
c118_ Sobre Carga Operador con función Amiga
*/

// Incluimos librerias
#include <iostream>
#include <cmath>

// Definimos el espacio de nombres
using namespace std;

// Clase 
class Figura
{
    // Alcance Publico
    private:

        // Propiedades
        double ancho;
        double alto;

    public:
        // Constructor
        Figura (double ancho, double alto)
        {
            // Asigna a las propiedades
            this->ancho = ancho;
            this->alto  = alto;
        }

        // Obtiene el area
        double Area()
        {
            // Retorna el area
            return ancho * alto;
        }

        // Declara una función amiga para sobrecargar el operador
        friend bool operator == (const Figura& izquierdo, const Figura& derecho);    

        // Sobre carga del operador dentro de la clase
        bool operator >(const Figura& derecho)
        {
            // Retorna si izquierdo es mayor que derecho
            return (this->alto * this->ancho) > (derecho.alto * derecho.ancho);            
        }  
};

// Declara una función amiga para sobrecargar el operador
bool operator == (const Figura& izquierdo, const Figura& derecho)
{
    // Retorna si son iguales las 2 areas
    return (izquierdo.alto * izquierdo.ancho) == (derecho.alto * derecho.ancho);
}

// Función principal
int main () 
{
    // Declara una figura
    Figura cuadrado(15,10);
    Figura rectangulo(10,15);

    // Despliega el area de ambas figuras
    cout << "Cuadrado  Área:"  << cuadrado.Area() << endl;
    cout << "Rectángulo Área:" << rectangulo.Area() << endl;

    // Verifica si tienen la misma area
    if (cuadrado == rectangulo)
    {
        // las 2 figuras tienen la misma area
        cout << "Ambas figuras tienen la misma área" << endl;
    }
    else
    {
        // las 2 figuras tienen diferente area
        cout << "Ambas figuras tienen diferente área" << endl;
    }

    // Verifica si tienen la misma area
    if (cuadrado > rectangulo)
    {
        // Cuadrado tiene mayor area
        cout << "Cuadrado tiene mayor área" << endl;
    }
    else
    {
        // las 2 figuras tienen diferente area
        cout << "Rectángulo tiene igual o menor área" << endl;
    }
   
    // Finaliza el programa
    return 0;
}