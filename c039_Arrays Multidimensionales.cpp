/*

Curso de C++
Autor: JAOR
Clase 39 - Arrays Multidimesionales

 En la clase anterior vimos como definir un arreglo de una sola dimensión.
 Determinanos que para poder acceder a cada elemento del arreglo necesitamos
 un valor llamado índice, el cual nos indica la posición del elemento del
 arreglo.

 Es posible definir Arreglos de mas de una dimensión. Cuando el arreglo es
 de 2 dimensiones, se le llama Arreglo Bidimensional o Matriz. Cuando el
 arreglo es de 3 dimensiones, se lo conoce como Arreglo Tridimensional.

 Para definir un arreglo de n dimensiones; simplemente se indica con n
 pares de corchetes despues del nombre del arreglo, y dentro de cada uno
 de ellos se indica el número de elementos que tendrá. Su sintaxis pudiera
 definirse de la siguiente forma

 tipo nombre_arreglo[n]...[];

 Ejemplos:
 int intPlanoCartesiano[10][10];
 int intPlanoTriDimensional[10][10][10];

 Al igual que con los arreglos, es posible inicializar los arreglos multidimensionales
 al momento de su definición, indicando los elementos separados por "{}" y ","
 en forma ordenada en relación a la definición. Ejemplo:

 int intMatriz[2][3]={ {11, 12, 13}, {21, 22, 23} };

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

int main ()
{
    // Mandamos un mensaje a la Pantalla
	cout << "Curso de C++ \n";
	cout << "Clase 39 - Arreglos Multidimensionales \n\n";

	// Definimos un arreglo de 2 dimensiones (matriz) y asignamos valores
	int intMatriz[2][5]={ {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24} };

	// Desplegando los valores de la Matriz
	int iRen,iCol;

	// Ciclo para desplegar los Valores
    cout << "Desplegando la Matriz " << endl;

    // Secuencia de los Indices
    // 00,01,02,03,04
    // 10,11,12,13,14

	// Ciclo del Renglon
	for (iRen=0; iRen<2; iRen ++)
	{
	    // Ciclo para Columnas
	    for (iCol=0; iCol < 5; iCol++)
	        cout << "["<< intMatriz[iRen][iCol] << "]";

	    // Cambia de Linea
	    cout << endl;

    }

    // Deja 2 Lineas
    cout << endl;
    cout << endl;

	// Definimos un arreglo de 3 dimensiones
	int intPlano3d[2][3][4]={{{10,11,12,13},{20,21,22,23},{30,31,32,33}},
                             {{40,41,42,43},{50,51,52,53},{60,61,62,63}}};


	// Desplegando los valores de la Matriz
	int iEjeX,iEjeY,iEjeZ;

	// Ciclo para desplegar los Valores
    cout << "Desplegando el Plano 3d " << endl;

    // Secuencia de los indices
    // 000,001,002,003
    // 010,011,012,013
    // 020,021,022,023
    // 100,101,102,103
    // 110,111,112,113
    // 120,121,122,123


	// Ciclo del Eje X
	for (iEjeX=0; iEjeX<2; iEjeX++)

	    // Ciclo del Eje Y
	    for (iEjeY=0; iEjeY < 3; iEjeY++)
	    {
	        // Ciclo del Eje Z
	        for (iEjeZ=0; iEjeZ < 4; iEjeZ++)
	            cout << "["<< intPlano3d[iEjeX][iEjeY][iEjeZ] << "]";

	        // Cambia de Linea
	        cout << endl;
         }


    // Deja 2 Lineas
    cout << endl;
    cout << endl;

   return 0;
}
