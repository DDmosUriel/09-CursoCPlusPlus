/*
Curso de C++
Autor: JAOR
Clase 106 - Matrices con Vectores

En esta clase veremos como implementar una matriz usando vectores
*/

// Inclusión de Librerías
#include <iostream>
#include <vector>

// Definición de espacios de nombre
using namespace std;

// Función
int main ()
{

	// Mandamos un mensaje a la Pantalla
	cout << "Curso de C++ \n";
	cout << "Clase 106 - Matrices con Vectores \n\n";

    // Matriz de Enteros
    vector<vector<int>> matriz(3, vector<int>(4));

    // Verificamos cuantos elementos tiene con el método(antes función) size
    cout << "Indice de la Matriz:" << matriz.size() << endl << endl;  

    // Agregamos un elemento a la matriz
    matriz[0][2]=10;    

    // Desplegamos la matriz
    cout << "La matriz:" << endl;

    // Ciclos para recorrer la matriz   
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            cout << "[" << matriz[i][j] << "] ";
        }
        cout << endl;
    }

    // Desplegamos la matriz
    cout << "La matriz:" << endl;
    
    // C++ 11
    for(auto& row: matriz)
    {
        for(auto& col : row)
        { 
            cout << "[" << col << "] " ;
        }
        cout << endl;
    }   

    // Definimos un vector para Renglón
    vector<int> renglon;

    // Agregamos 3 datos al renglon
    renglon.push_back(10);
    renglon.push_back(20);
    renglon.push_back(30);

    // Verificamos cuantos elementos tiene con el método(antes función) size
    cout << "Indice del Renglon:" << renglon.size() << endl << endl;  

    // Agregamos el Renglón a la Matriz
    matriz.push_back(renglon);

    // Desplegamos la matriz
    cout << "La matriz:" << endl;
    
    // C++ 11
    for(auto& row: matriz)
    {
        for(auto& col : row)
        { 
            cout << "[" << col << "] " ;
        }
        cout << endl;
    }   

    // Finaliza la aplicación
    return 0;

}
