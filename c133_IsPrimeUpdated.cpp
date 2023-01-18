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
    // Define static the counter
    static int counter;

    // Define divisor static
    static int divisor = 1;

    // Verify message
    cout << "Verify :" << divisor << endl;

    // If first
    if (divisor==1)
       counter=0;
 
    // Divide
    if (number % divisor == 0)
       // Increase counter
       counter++;

    // Display counter
    cout << "counter:" << counter << endl << endl;  

    // Verify counter
    if (counter<3) 
    {
        // Verify not is 1 the number
        if (divisor < number)   
        {
            // Increase Divisor
            divisor++;

            // Call recursive
            intIsPrimeRecur(number);
        }        
    }

    // Init
    divisor = 1;

    // return value
    return counter;
}
