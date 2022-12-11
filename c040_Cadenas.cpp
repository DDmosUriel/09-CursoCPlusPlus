/*

Curso de C++
Autor: JAOR

Clase 40 - Arrays de Char = Cadenas

 Cuando un Arreglo se define de espacios de memoria de tipo char, se le
 conoce como  String-Cadena.

 Ejemplo:
 char strNombre[10];

 En C y C++, existen librerías que manejan adecuadamente las cadenas, pero estas
 deben de cumplir con cierto requisito.

 Para que un arreglo de tipo char, funcione correctamente con las funciones
 de manejo de cadenas, el último espacio utilizado del Arreglo debe tener
 el caracter '\0'.

 Lo anterior lleva a concluir que si queremos manejar una cadena de 20
 caracteres; la debemos de definir de 21 para que el último caracter
 sea utilizado por el valor '\0'.

 Podemos inicializar un Arreglo al momento de definirlo, de la siguiente
 forma:

 char strNombre1[]={'j','u','a','n','\0',' ', ' '};
 char strNombre2[]="juan";

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

int main ()
{
    // Arreglo de Edades y de Estatura
    char chrVocales[]={'a','e','i','o','u'};
    char strNombre[]="Juan Perez";
    char strApellido[10];

    // Coloca el Apellido
    strApellido[0]='P';
    strApellido[1]='e';
    strApellido[2]='r';
    strApellido[3]='e';
    strApellido[4]='z';
    strApellido[5]='\0';
    strApellido[6]='x';
    strApellido[7]='y';
    strApellido[8]='z';
    strApellido[9]='4';


	// Mandamos un mensaje a la Pantalla
	cout << "Curso de C \n";
	cout << "Clase 40 - Cadenas \n\n";

    cout << "Las Vocales:\n";
    cout << "Vocal 0:" << chrVocales[0] << endl;
    cout << "Vocal 1:" << chrVocales[1] << endl;
    cout << "Vocal 2:" << chrVocales[2] << endl;
    cout << "Vocal 3:" << chrVocales[3] << endl;
    cout << "Vocal 4:" << chrVocales[4] << endl;

    cout << "Las Vocales->" << chrVocales << endl;

    cout << "El valor del Caracter 5 de Vocales:" << chrVocales[5] << endl;

    cout << "El Nombre->" << strNombre << endl;
    cout << "El valor del Caracter 10 de Nombre:" << strNombre[10] << endl;

    cout << "El Apellido->" << strApellido << endl;
    cout << "El Apellido->" << strApellido[0] << strApellido[1] << strApellido[2] << strApellido[3]
                            << strApellido[4];

    // Finaliza la Aplicación
    return 0;
}
