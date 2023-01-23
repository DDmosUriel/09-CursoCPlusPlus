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

        if (result==0)
            cout << number << " Is Prime" << endl;
        else
            cout << number << " Not is Prime" << endl;
            
        // Change line    
        cout << endl;    
    }
        
    // End program
    return 0;
}

int intIsPrimeRecur(int number)
{
    // Define static the counter
    static int counter;

    // Define divisor static
    static int divisor = 2;

    // Verify 1
    if (number > 2)
    {
        // Verify message
        cout << "Divisor :" << divisor << endl;

        // If first
        if (divisor==2)
           counter=0;
    
        
        // Divide
        if (number % divisor != 0)
        {
            // Verify not is 2 previous to end
            if (divisor < number-1)   
            {
                // Increase Divisor
                divisor++;

                // Call recursive
                intIsPrimeRecur(number);
            }        
        }
        else
        // Increase counter
        counter++;

        // Init
        divisor = 2;


    }
    else
       // Verify
       if (number<2)
           counter++;
        else
           counter=0;

    // return value
    return counter;
}
