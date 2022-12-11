/*

Curso de C++
Autor: JAOR
Clase 23 - Sentencia switch

La Sentencia switch permite comparar una expresión
contra multiples valores, y que se puedan ejecutar
instrucciones de acuerdo a cualquier de uno de estos
valores posibles.

Cada uno de los valores posibles, es un "caso"; es
decir un posible caso de ejecución.

La sintaxis de uso de la sentencia switch es:

switch (expresion)
{
    case valor-posible1:
        instrucciones;
        break; //opcional

    case valor-posible2:
        instrucciones;
        break; //opcional
        .
        .
        .
    case valor-posiblen:
        instrucciones;
        break; //opcional

    default : //opcional
        instrucciones;

}


 Donde expresion debe dar como resultado un valor de tipo char o int, y
 donde valor-posible1, valor-posible2, ..., deben dar como resultado valores correspondientes
 a expresión. Dichas expresiones no pueden repetirse dentro del switch.

 El default es opcional y puede no aparecer, así como los break de los
 case. En caso de que los break, no aparezcan; el programa seguirá ejecutando
 las sentencias hacia abajo, hasta encontrar un break, o hasta encontrar
 la "}" final de la sentencia switch.

 La sentencia switch compara el valor devuelto por expresión, con cada uno de
 los valores indicados con case; y cuando coincida con alguno de ellos, ejecutará
 las instrucciones correspondientes.

 En caso de que no se encuentre ningún valor que coincida, con los case, se ejecutará
 el default (si existe).

 La sentencia switch se sugiere debe ser utilizada cuando se va a evaluar una expresión
 con resultados conocidos y delimitados.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 23 - Sentencia switch \n\n";


    // Mensaje de Evaluación
    cout << "Evaluando sentencia switch \n";

    // Variable para la Edad
	int    xEdad=80;

    // Variable para Letra
	char   xLetra='v';

	// Mensaje del Programa
    cout << "Evaluando la Sentencia switch\n\n";
    cout << "Etapa de Estudio según la Edad \n";

    // Evalúa switch
    switch(xEdad)
    {

        default:
                if (xEdad <= 65)
                   cout << "En Producción";
                else
                   cout << "En Jubilación\n";
                break;

        case  0:cout << "Recien nacido \n";
                break;

        case  1:
        case  2:
        case  3:cout << "Maternal\n";
                break;

        case  4:
        case  5:cout << "Pre-Primaria\n";
                break;

        case  6:
        case  7:
        case  8:
        case  9:
        case 10:
        case 11:cout << "Primaria\n";
                break;

        case 12:
        case 13:
        case 14:
                cout << "Secundaria\n";
                break;
        case 15:
        case 16:
        case 17:
                cout << "Bachillerato\n";
                break;
        case 18:
        case 19:
        case 20:
        case 21:
                cout << "Profesional\n";
                break;
        case 22:
        case 23:
                cout << "Maestría\n";
                break;
        case 24:
        case 25:
                cout << "Doctorado\n";
                break;


    }
    cout << "\n";


	// Mensaje del Programa
    cout << "Tipo de Caracter \n";
    xLetra='a';
    switch(xLetra)
    {
        case  'a':
        case  'e':
        case  'i':
        case  'o':
        case  'u':
                  cout << "Vocal\n";
                  break;
        case  '0':
        case  '1':
        case  '2':
        case  '3':
        case  '4':
        case  '5':
        case  '6':
        case  '7':
        case  '8':
        case  '9':
                  cout << "Dígito\n";
                  break;
        case  'b':
        case  'c':
        case  'd':
        case  'f':
        case  'g':
        case  'h':
        case  'j':
        case  'k':
        case  'l':
        case  'm':
        case  'n':
        case  'ñ':
        case  'p':
        case  'q':
        case  'r':
        case  's':
        case  't':
        case  'v':
        case  'w':
        case  'x':
        case  'y':
        case  'z':
                  cout << "Consonante\n";
                  break;
        default:
                  cout << "Otro\n";
                  break;
    }


    /* Se finaliza la aplicación */
    return 0;
}

