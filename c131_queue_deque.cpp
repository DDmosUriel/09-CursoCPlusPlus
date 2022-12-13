/*
Curso de C++
Autor: JAOR
c131_ queue - Cola
      deque - Cola de 2 extremos
*/

// Librerias
#include <iostream>
#include <queue>
#include <deque>

// Espacios de Nombres
using namespace std;

// Función principal
int main() 
{
   // Se declara una cola o fila
   queue<int> gquiz;
   gquiz.push(29);
   gquiz.push(27);
   gquiz.push(86);
   
   
   // Obtengo el frente y el final
   cout << gquiz.front() << endl;
   cout << gquiz.back() << endl;

   // Se declara una cola o fila de 2 extremos
   deque<int> numbers;

   // Inserto elementos
   numbers.push_back(29);
   //numbers.push_front(27);
   numbers.push_back(27);
   numbers.push_back(86);


   // Obtengo el frente y el final
   cout << numbers.front() << endl;
   cout << numbers.back() << endl;


   // Finaliza
   return 0;
}