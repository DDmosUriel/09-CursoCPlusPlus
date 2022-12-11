/*

Curso de C++
Autor: JAOR
Clase 107 - list

Una lista es un estructura dinámica de datos, que nos permite manejar en forma dinámica
muchos elementos de un mismo tipo; sin estar limitados en la cantidad de elementos a manejar.

Las listas, son la evolución de los Vectores; en los cuales es indispensable tener
indicada una longitud fija de elementos.

Con las listas, podemos aumentar y decrementar el número de elementos en la estructura; 
liberando y reservando memoria dinámicamente, sin tener que especificar una cantidad fija
de elementos.

Para poder hacer uso de las Listas, debemos de incluir la librería "list"

La sintaxis para utilizar una lista, es la siguiente:

list<tipo> objeto;

En donde:

tipo Tipo de elementos que va a contener la lista. Puede ser cualquier tipo de dato;
  inclusive los definidos por el usuario.
  
Al ser un objeto, este contiene constructores y métodos los cuales iremos viendo uno
a uno. En esta clase veremos los siguientes:

Constructores
list::list()
Este es el constructor por default y define una lista vacía

list::list(elementos)
Este constructor crea la lista con el numero de elementos indicados, los cuales
tendrán el valor por default correspondiente al tipo de elemento


Métodos
size.
Devuelve el número de elementos que hay en la lista

begin.
El numero del elemento inicial

end.
El numero del elemento final

*/

#include <iostream>
#include <list>

using namespace std;

int main(void) {
   list<int> l1 = {3, 4, 5};
   list<int> l2 = {1, 2};

   l1.insert(l1.begin(), l2.begin(), l2.end());

   cout << "List contains following elements" << endl;

   for (auto it = l1.begin(); it != l1.end(); ++it)
      cout << *it << endl;

   return 0;
}