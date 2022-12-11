/*

Curso de C++
Autor: JAOR
c118_ Struct y Class
*/

// Incluimos librerias
#include <iostream>
#include <cmath>

// Definimos el espacio de nombres
using namespace std;

// Clase 
struct Shape
{
    public:
        double length, width;
        Shape(double l =1, double w=1)
        {
            length = l;
            width = w;
        }
        double Area()
        {
            return length * width;
        }
};

// Estructura
class Circle : Shape 
{
    public:
        Circle(double w)
        {
            width = w;
        }
        double Area()
        {
            return 3.14159 * std::pow(width/2,2);
        }
};

// Función principal
int main () 
{
    Shape shape(10,10);
    cout << "Square Area :" << shape.Area()
         << endl;

    Circle circle(10);
    cout << "Circle Area :" << circle.Area()
           << endl;

    Shape rectangle{10,15};
    cout << "Rectangle Area :" << rectangle.Area()
           << endl;
   
    // Finaliza el programa
    return 0;
}