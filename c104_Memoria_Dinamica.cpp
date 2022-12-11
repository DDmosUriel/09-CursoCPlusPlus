/*

Curso de C++
Autor: JAOR

Clase 104 - Memoria Dinámica

Se conoce como Memoría Dinámica a aquella que puede reservarse o eliminarse
al momento de que se está ejecutando un programa.

Cuando declaramos una variable u objeto, sin usar Métodos de Memoria Dinámica
este no puede eliminarse o incrementarse; es una Memoria Fija.

Si declaramos una variable Integer para la Edad; esta no puede eliminarse; y si
declaramos un vector de 10 Elementos; estos 10 elementos no pueden incrementarse,
eliminarse o disminuirse. Con memoria dinámica, esto si es posible.

El manejo de la memoria dinámica se realiza a través de apuntadores.

Para manejar memoria dinámica, se hace uso de 2 operadores: new y delete.
La sintaxis para poder utilizar el operador new, es la siguiente:

apuntador_tipo_dato = new tipo-dato;

Donde tipo de dato puede ser cualquier tipo de dato existente, definido por el
usuario o clase.

Para eliminar la Memoria Reservada por new, se hace uso del operador delete; de la
siguiente forma:

delete apuntador_tipo_dato;

Donde apuntador_tipo_dato previamente se le asignó memoria utilizando el operador new.

*/

// Incluimos las librerías necesarias
#include <fstream>
#include <iostream>

// El nombre de Espacio
using namespace std;


// Definimos función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 104 - Memoria Dinámica" << endl << endl;

    // Declaramos un apuntador a integer
    int *pInteger = NULL;

    // Valor de la dirección del apuntador
    cout << "Valor de la Dirección del Apuntador pInteger:" << pInteger << endl;

    // En este momento reservamos memoria para el apuntador
    pInteger = new int;

    // Valor de la dirección del apuntador
    cout << "Valor de la Dirección del Apuntador pInteger:" << pInteger << endl;

    // Agreamos un valor
    *pInteger = 5;

    // Desplegamos el Valor
    cout << "Valor de la Variable pInteger:" << *pInteger << endl;

    // Liberamos la Memoria
    delete pInteger;

    // Valor de la dirección del apuntador
    cout << "Valor de la Dirección del Apuntador pInteger:" << pInteger << endl;

    // Desplegamos el Valor que ya no es el mismo y lo permite a pesar de haber liberado la memoria
    cout << "Valor de la Variable pInteger:" << *pInteger << endl;

    // Veremos si nos deja asignar despues de liberar
    *pInteger=10;

    // Desplegamos el Valor que ya no es el mismo y lo permite a pesar de haber liberado la memoria
    cout << "Valor de la Variable pInteger:" << *pInteger << endl;

    // Declaramos un apuntador a doble
    double* pDouble = NULL; // Pointer initialized with null

    // Reservamos y comprobamos que no haya habido problemas
    if( !(pDouble = new double ))
    {
        cout << "Error: No se pudo reservar memoria." <<endl;
        exit(1);
    }

    // Asignamos un valor al apuntador
    *pDouble = 29494.99;

    // Despliega
    cout << "Valor de pDouble: " << *pDouble << endl;

    // Elimina el Valor
    delete pDouble;

    // Despliega
    cout << "Valor de pDouble: " << *pDouble << endl;

    // Veremos si nos deja asignar de nuevo
    *pDouble = 1212.99;

    // Despliega
    cout << "Valor de pDouble: " << *pDouble << endl;

    // Finaliza la Aplicación
    return 0;

}
