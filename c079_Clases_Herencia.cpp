/*

Curso de C++
Autor: JAOR
Clase 79 - Clases Herencia

Uno de los mas importantes avances en la programación orientada
a objetos es el concepto de Herencia.

La Herencia es la capacidad que tiene una Clase de Heredar a
otra sus caracteristicas y funcionalidades.

Dicho de otra forma, es la capacidad de crear una Clase basada
en otra ya existente, de la cual hereda sus características.

Cuando creamos una Nueva Clase basada en otra ya existente, a esta ya
existente se le llama Clase Base y a la Nueva se le llama clase
Derivada.

La sintaxis utilizada para realizar la Herencia de una clase, es la
siguiente:

class clase_nueva: especificador_acceso clase_base


donde:
clase_nueva          : es la clase derivada a crear.
especificador_acceso : public, protected, private (default)
clase_base           : la clase base de la cual se hereda

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Definimos una Clase para Figuras Geométricas
class Figura_Geometrica
{

    // Miembros Públicos
    public:

        // Establece el Ancho
        void setAnchura(int pAncho)
        {
            // Establece el Ancho
            iAncho = pAncho;
        }

        // Establece lo Alto
        void setAltura(int pAlto)
        {
            // Establece lo Alto
            iAlto = pAlto;
        }

    // Establece el Especificador Protected
    protected:

       // Estos podrán ser vistos por las Clases Derivadas
       int iAncho;
       int iAlto;

    // Elemento Private
    private:
       int iTest;

};


// Clase Derivada
class Rectangulo: Figura_Geometrica
{
   // Establece los elementos públicos
   public:

     // Método para obtener el área
     int getArea()
     {
         // Demuestro que no puedo acceder a privados de la Clase Base
         //iTest=10;
         // Calcula y retorna el Área demostrando acceso a protegidos
         //setAltura(20);
         return (iAncho * iAlto);
     }
};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 79 - Clases Herencia" << endl << endl;

    // Define un objeto de la Clase Base
    Figura_Geometrica xFigura;

    // Demuestro que no puedo acceder a un dato Protegido desde el Objeto
    //xFigura.iAlto=10;
    // Demuestro que no puedo acceder a un dato Privado desde el Objeto
    //xFigura.iTest=10;

    // Establezco alto
    xFigura.setAltura(10);
    xFigura.setAnchura(5);

    // Define un objeto del Tipo Rectángulo
    Rectangulo xRectangulo;

    // Establecemos el Ancho y el Alto
    xRectangulo.setAltura(13);
    xRectangulo.setAnchura(7);

    // Despliega el Ára del Triángulo
    cout << "Área del Triángulo: " << xRectangulo.getArea() << endl;

    // Finaliza la Aplicación
    return 0;

}
