/*
Curso de C++
Autor: JAOR
Clase 141 - Referencias como parametros
*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// function declaration
void swap(int& x, int& y);

// Main Function 
int main () 
{
   // local variable declaration:
   int a = 100;
   int b = 200;

   int &refa=a;
   int &refb=b;

   int* pa = &a;
   int* pb = &b;
 
   // Var values before swap 
   cout << "Valor de a    :" << a << endl;
   cout << "Valor de b    :" << b << endl;
   cout << "Valor de refa :" << refa << endl;
   cout << "Valor de refb :" << refb << endl;
   
   // Call the function
   swap(a, p);
 
   // Display values after 
   cout << "Valor de a :" << a << endl;
   cout << "Valor de b :" << b << endl;
   cout << "Valor de refa :" << refa << endl;
   cout << "Valor de refb :" << refb << endl;
   
 
   // Fianliza 
   return 0;
}
 
// function definition to swap the values.
void swap(int* x, int* y) 
{
   int temp;
   temp = *x; /* save the value at address x */
   *x = *y;    /* put y into x */
   *y = temp; /* put x into y */
  
   return;
}