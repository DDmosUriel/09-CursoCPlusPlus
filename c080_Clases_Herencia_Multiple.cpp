/*

Curso de C++
Autor: JAOR
Clase 80 - Herencia Múltiple

Uno Clase Derivada puede ser creada Heredando de mas de una clase.
La sintaxis vista anteriormente, puede actualizarse de la siguiente forma:

class clase_nueva: especificador_acceso   clase_base,
                   especificador_acceso2  clase_base2,
                   ...

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

};

// Clase para Costo de Pintar
class Costo_Pintar
{

   public:

        // Definimos Función para obtener el Costo
        int getCosto(int area)
        {
            // Retorna el Costo de Pintar la Figura en Base al Area
            return area * 70;
        }
};


// Clase Derivada
class Rectangulo: public Figura_Geometrica, public Costo_Pintar
{
   // Establece los elementos públicos
   public:

     // Método para obtener el área
     int getArea()
     {
         // Calculo el área
         return (iAncho * iAlto);
     }
};

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 80 - Clases Herencia Multiple" << endl << endl;

    // Definimos un Rectángulo
    Rectangulo xRectangulo;

    // Definimos una variable para el área
    int iArea;

    // Definimos el área del Rectángulo
    xRectangulo.setAltura(5);
    xRectangulo.setAnchura(7);

    // Calcula el área
    iArea = xRectangulo.getArea();

    // Desplegamos el área del objeto
    cout << "El área del Rectángulo es: " << iArea << endl;

    // Desplegamos el Costo de Pintar el área
    cout << "El Costo de Pintar el área es: $" << xRectangulo.getCosto(iArea) << endl;

    // Finaliza la Aplicación
    return 0;

}
