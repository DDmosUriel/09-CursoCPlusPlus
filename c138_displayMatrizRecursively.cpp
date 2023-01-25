// ---------------------------------------
// Exercise C++
// Display Matriz Recursively
// ---------------------------------------

// Libraries
#include <iostream>
#include <sstream>

// NameSpaces
using namespace std;

// Prototype Functions
void  displayMatriz(int matriz[5][5], int rows, int cols)
{
    // Static Var to control row nad col
    static int row = 0;
    static int col = 0;

    // Display element
    cout << "[" << matriz[row][col]  << "] ";

    // verify col to update
    if (col < cols - 1)
    {
        // Increase
        col++;

        // Call the function
        displayMatriz(matriz,rows,cols);
    }
    else
    {
        // Change line
        cout << endl;

        // verify row
        if (row < rows -1)
        {
            // Update col and row
            col = 0;
            row++;
            
            // Call the function
            displayMatriz(matriz,rows,cols);
        }
        else
        {
            // Initialize
            col = 0;
            row = 0;
        }
    }
}

// Function main
int main()
{
    // Result
    int matriz[5][5]={{11,12,13,14,15},
                      {21,22,23,24,25},
                      {31,32,33,34,35},
                      {41,42,43,44,45},
                      {51,52,53,54,55}};

    // Call Function
    displayMatriz(matriz,5,5);  

    // New Linea
    cout << endl;

    // Calla function again
    displayMatriz(matriz,3,5);  
        
    // End program
    return 0;
}

