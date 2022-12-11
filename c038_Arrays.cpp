/*

Curso de C++
Autor: JAOR
Clase 38 - Arrays

 Un arreglo es un conjunto de espacios de memoria a los cuales se les
 asigna un nombre, y a través de un índice se puede acceder a cada uno
 de estos espacios. Los espacios de memoria serán del mismo tipo, el cual
 se asigna al definirlo. La sintaxis para definir un arreglo es la siguiente:

 tipo nombre[tamaño];

 En donde:
 tipo. Es el tipo de dato que manejarán cada uno de los espacios de memoria
 nombre. Es el nombre del arreglo
 tamaño. Es el número de elementos que tendrá el arreglo.

 Ejemplo:

 int intEdades[10];

 La anterior instrucción declara el arreglo intEdades, el cual se define de
 10 espacios de memoria de tipo integer.

 Para referenciar a cada uno de los espacios de memoria, se utiliza el
 nombre del arreglo, y un número el cual indica la posición del elemento
 que queremos referenciar. El primero elemento se referencía con el número 0
 y así en forma consecutiva hasta el último elemento. En el caso del
 arreglo del ejemplo, el último elemento ocupa la posición 9.

 Ejemplo:
 // Depositando Valores en el Arreglo
 intEdades[0]=20;
 intEdades[1]=34;
 ...
 intEdades[9]=30;

 // Obteniendo valores del Arreglo
 x=intEdades[0];
 x=intEdades[1];
 ...
 x=intEdades[9];

 Podemos inicializar un Arreglo al momento de definirlo, de la siguiente
 forma:
 int  intEdades[]={10,20,30,34,12,34,56,89};

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

int main ()
{
    // Arreglo de Edades y de Estatura
    int   intEdad[]={34,33,24,56,78};
    float fltEstatura[5];    

    // Asigno los Valores de Estatura
    fltEstatura[0]=1.82;
    fltEstatura[1]=1.52;
    fltEstatura[2]=1.67;
    fltEstatura[3]=1.80;
    fltEstatura[4]=1.78;

	// Mandamos un mensaje a la Pantalla
	cout << "Curso de C \n";
	cout << "Clase 38 - Arreglos \n\n";

    cout << "Las Edades:\n";
    cout << "Edad 0:" << intEdad[0] << endl;
    cout << "Edad 1:" << intEdad[1] << endl;
    cout << "Edad 2:" << intEdad[2] << endl;
    cout << "Edad 3:" << intEdad[3] << endl;
    cout << "Edad 4:" << intEdad[4] << endl << endl;

    cout << "Las Estaturas:\n";
    cout << "Estatura 0:" << fltEstatura[0] << endl;
    cout << "Estatura 1:" << fltEstatura[1] << endl;
    cout << "Estatura 2:" << fltEstatura[2] << endl;
    cout << "Estatura 3:" << fltEstatura[3] << endl;
    cout << "Estatura 4:" << fltEstatura[4] << endl << endl;

    // Variable Utiliza para los índices
    int iIndice;

    // Desplegando las Estaturas con un Ciclo
    cout << "Desplegando las Edades y Estaturas con Ciclo For " << endl;

    // Ciclo para Desplegar las Edades
    for (iIndice=0; iIndice<5;iIndice++)
        cout << "Edad " << iIndice << ":"<< intEdad[iIndice] << endl;

    // Deja un espacio
    cout << endl;

    // Ciclo para Desplegar las Estaturas
    for (iIndice=0; iIndice<5;iIndice++)
        cout << "Estatura " << iIndice << ":" << fltEstatura[iIndice] << endl;

    // Deja un espacio
    cout << endl;

    // Finaliza la Aplicación
    return 0;
}
