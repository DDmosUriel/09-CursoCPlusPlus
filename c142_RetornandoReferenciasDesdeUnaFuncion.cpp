/*
Curso de C++
Autor: JAOR
Clase 142 - Retornando Referencias desde una función
*/

// Librarys
#include <iostream>
#include <ctime>
 
// Name Spaces 
using namespace std;
 
// Array Double's values 
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

// Function to return a reference
double& setValues(int n) 
{
   // Return the references of n element
   return vals[n];   
}
 
// Main function 
int main () 
{
   // Message
   cout << "Value before change" << endl;

   // Cycle to display values
   for (int i = 0; i < 5; i++ ) 
   {
      // Dispaly each values
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
 
   // Change the value using the reference return
   setValues(1) = 20.23; // change 2nd element
   setValues(3) = 70.8;  // change 4th element
 
   // Display Values
   cout << "Value after change" << endl;

    // Cycle to display values
   for ( int i = 0; i < 5; i++ ) 
   {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }

   // End program
   return 0;
}

