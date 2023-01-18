// ---------------------------------------
// Exercise C++
// Verify if number is prime
// The function must be integer not bool
// ---------------------------------------

// Libraries
#include <iostream>
#include <sstream>

// NameSpaces
using namespace std;

// Prototype Functions
int  intIsPrimeRecur(int number);

// Function main
int main()
{
    // Result
    int result;

    // Var to the number
    string number;
    
    // Loop
    while (true)
    {
        // Message to get the number
        cout << "Please enter then number (Empty-Finish)." << endl;
        getline(cin,number);

        // Verify exit
        if (number=="")
           // break
           break;

        // Verify
        if (stoi(number)==0)
           // break
           break;   

        // Call the function
        result = intIsPrimeRecur(stoi(number));

        if (result==2)
            cout << number << " Is Prime" << endl;
        else
            cout << number << " Not is Prime, have:" << result << " exact division " << endl;
            
        // Change line    
        cout << endl;    
    }
        
    // End program
    return 0;
}

int intIsPrimeRecur(int number)
{
    // Define el original
    static int original=0;

    // Define static the counter
    static int counter;

    // Verify message
    cout << "Verify :" << number << endl;

    // Verify the firs time
    if (original==0)
    {
       // Set Original
       original = number;

       // Counter
       counter = 0;
    }

    // Divide
    if (original % number == 0)
       // Increase counter
       counter++;

    // Display counter
    cout << "counter:" << counter << endl << endl;  

    // Verify counter
    if (counter<3) 
    {
        // Verify not is 1 the number
        if (number>1)   
            // Call recursive
            intIsPrimeRecur(number-1);
        else
            // Init original
            original = 0;
    }
    // return value
    return counter;
}
