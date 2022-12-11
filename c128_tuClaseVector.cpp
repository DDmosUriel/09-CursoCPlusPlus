/*
Curso de C++
Autor: JAOR
c128_ tu propia clase vector con busqueda
*/

// Librerias
#include <iostream>
#include <vector> // for vectors
#include <algorithm> // for find()

// Espacio de Nombre
using namespace std;

// Definimos nuestra clase
class myVector
{
    public:

        // El vector original
        vector<int> objVector;

        // Método para Buscar
        void Buscar(int x)   
        {
            // Buscamos con un iterador con find
            vector<int>::iterator it = find(objVector.begin(), objVector.end(), x);

            // Verificamos que no haya alcanzado el final el iterador
            if (it != objVector.end()) 
            {
                // Mensaje
                cout << "Elemento " << x << " encontrado en : ";

                // Calculamos la posición
                cout << it - objVector.begin() << endl;
            }
            else 
            {
                // Mensaje de no encontrado
                cout << "Elemento " << x << " no encontrado ..." << endl;
            }
        }
};

// Función Principal
int main()
{
    // Mi propio vector
    myVector v2;

    // busco un dato
    v2.Buscar(10);
    v2.Buscar(20);
    v2.Buscar(30);
    v2.Buscar(11);
    
    // Mensaje
    cout << "Programa terminado ..." << endl;
    
    // Finaliza
    return 0;
}
