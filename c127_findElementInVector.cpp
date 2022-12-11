/*
Curso de C++
Autor: JAOR
c127_ find element in vector
*/

// Librerias
#include <iostream>
#include <vector> // for vectors
#include <algorithm> // for find()

// Espacio de Nombre
using namespace std;


// Función Principal
int main()
{
    // Elemento a buscar
    int element; 
    
    // Vector de Enteros
    vector<int> v1{ 10, 20, 30, 40, 50 };

    while (true)
    {
        // Solicitamos el elemento a buscar
        cout << "Captura elemento a buscar: ";
        cin >> element;

        // Verificamos que es 0 para salir
        if (element == 0)
           // Salimos
           break;

        // Buscamos con un iterador con find
        vector<int>::iterator it = find(v1.begin(), v1.end(), element);

        // Verificamos que no haya alcanzado el final el iterador
        if (it != v1.end()) 
        {
            // Mensaje
            cout << "Elemento " << element << " encontrado en : ";

            // Calculamos la posición
            cout << it - v1.begin() << endl;
        }
        else 
        {
            // Mensaje de no encontrado
            cout << "Elemento " << element << " no encontrado ..." << endl;
        }

        // Linea
        cout << endl;    
    }

    // Mensaje
    cout << "Programa terminado ..." << endl;
    
    // Finaliza
    return 0;
}
