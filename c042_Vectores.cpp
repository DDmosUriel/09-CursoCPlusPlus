/*

Curso de C++
Autor: JAOR
Clase 42 - Vectores

En clases anterior vimos que podemos definir arreglos
de una dimensión a los cuales se les conoce como
vectores.

Estos vectores al ser definidos, se establece una
longitud determinada, la cual; en ciertar ocasiones
puede resultar insuficiente; y en otras puede
resultar que sea sobrada.

C++ implementó una clase llamada Vectores, la cual
nos permite manejar en forma dinámica un vector;
es decir que podemos incrementar o decrementar
su tamaño fácilmente; cosa que no es posible con
un vector tradicional declarado con la instrucción
array.

Tambien nos proporciona otros métodos para insertar
y eliminar elementos del Vector.


*/

// Inclusión de Librerías
#include <iostream>
#include <vector>

// Definición de espacios de nombre
using namespace std;

int main ()
{

	// Mandamos un mensaje a la Pantalla
	cout << "Curso de C++ \n";
	cout << "Clase 42 - Vectores \n\n";

    //vector sin inicializar ni indicar tamaño
    vector<double> vecEstaturas;

    // Verificamos cuantos elementos tiene con el método(antes función) size
    cout << "Número de Estaturas:" << vecEstaturas.size() << endl << endl;

    // Agregando Estaturas
    vecEstaturas.push_back(78);
    vecEstaturas.push_back(89);
    vecEstaturas.insert(vecEstaturas.begin()+1,1);

    cout << "Desplegando Estaturas \n";

    //mostrar las componentes con un ciclo
    for (unsigned int i=0; i<vecEstaturas.size(); i++)
    {
        cout<<vecEstaturas[i]<<endl;
    }
    // Deja lineas
    cout<<endl;

    //vector con tamaño 5 y componentes inicializar
    vector<double> vecPesos(5,88.5);
    

    // Despelgando Pesos
    cout << "Desplegando Pesos \n";

    for(unsigned int i=0; i< vecPesos.size(); i++)
    {
        cout<<vecPesos[i]<<endl;
    }
    cout<<endl;

    // Modificando Pesos
    vecPesos[3]=189.5;

    // Despelgando Pesos
    cout << "Desplegando Pesos 2a\n";

    for(unsigned int i=0; i< vecPesos.size(); i++)
    {
        cout<<vecPesos[i]<<endl;
    }
    cout<<endl;

    // Insertando 5 veces el peso 3
    vecPesos.insert(vecPesos.begin()+1,5,3);

    // Despelgando Pesos
    cout << "Desplegando Pesos 3a \n";

    for(unsigned int i=0; i< vecPesos.size(); i++)
    {
        cout<<vecPesos[i]<<endl;
    }
    cout<<endl;

    //borramos los elementos entre las posciones 0 a 5
    vecPesos.erase(vecPesos.begin(),vecPesos.begin()+5);


    // Despelgando Pesos
    cout << "Desplegando Pesos 4a \n";

    for(unsigned int i=0; i< vecPesos.size(); i++)
    {
        cout<<vecPesos[i]<<endl;
    }
    cout<<endl;

    // Elimina los Elementos
    vecPesos.clear();

    // Verificamos cuantos elementos tiene con el método(antes función) size
    cout << "Numero de Pesos:" << vecPesos.size() << endl << endl;

    // Finaliza la aplicación
    return 0;

}
