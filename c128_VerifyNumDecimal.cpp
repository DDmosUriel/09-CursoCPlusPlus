/*
Curso de C++
Autor: JAOR
c128_ funciones para validar numeros enteros y decimaes
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// This code is contributed by rahulkumawat2107
int valid_number(string str)
{
	int i = 0, j = str.length() - 1;

	// Handling whitespaces
	while (i < str.length() && str[i] == ' ')
		i++;
	while (j >= 0 && str[j] == ' ')
		j--;

	if (i > j)
		return 0;

	// if string is of length 1 and the only
	// character is not a digit
	if (i == j && !(str[i] >= '0' && str[i] <= '9'))
		return 0;

	// If the 1st char is not '+', '-', '.' or digit
	if (str[i] != '.' && str[i] != '+'
		&& str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
		return 0;

	// To check if a '.' or 'e' is found in given
	// string. We use this flag to make sure that
	// either of them appear only once.
	bool flagDotOrE = false;

	for (i; i <= j; i++) {
		// If any of the char does not belong to
		// {digit, +, -, ., e}
		if (str[i] != 'e' && str[i] != '.'
			&& str[i] != '+' && str[i] != '-'
			&& !(str[i] >= '0' && str[i] <= '9'))
			return 0;

		if (str[i] == '.') {
			// checks if the char 'e' has already
			// occurred before '.' If yes, return 0.
			if (flagDotOrE)				
                return 0;

			// If '.' is the last character.
			if (i + 1 > str.length())
				return 0;

			// if '.' is not followed by a digit.
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return 0;
		}

		else if (str[i] == 'e') {
			// set flagDotOrE = 1 when e is encountered.
			flagDotOrE = true;

			// if there is no digit before 'e'.
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				return 0;

			// If 'e' is the last Character
			if (i + 1 > str.length())
				return 0;

			// if e is not followed either by
			// '+', '-' or a digit
			if (str[i + 1] != '+' && str[i + 1] != '-'
				&& (str[i + 1] >= '0' && str[i] <= '9'))
				return 0;
		}
	}

	/* If the string skips all above cases, then
	it is numeric*/
	return 1;
}

// --------------------------------------------------------------------
// Verify if string contain a number Integer
// --------------------------------------------------------------------
bool jsIsInteger(string value)
{
    // result default is true
    bool result = true;

    // Integer
    int Convert;

    // String
    string strConvert;
    
    // Try to convert to double
    try
    {
        // Convert
        Convert = stoi(value);

        // Convert to string
        strConvert = to_string(Convert);

        // Verifica si son distintas
        if (strConvert!=value)
            result=false;

    }
    catch(const std::exception& e)
    {
        // Error ocurred; return false
        result = false;
    }
    
    // return
    return result;
}

// Verifica que tenga caracteres decimales correctos
bool haveDecimalChars(string value)//
{
	// result
	bool result = true;

	// Index
	int index;

	// Exist point, "-", "+"
	bool existPoint=false;
	bool existMinus=false;
	bool existPlus =false;


	// Ciclo
	for (index=0; index < value.size(); index++)
	{
		// Verify not is digit
		if (!isdigit(value.at(index)))
		{
			// Verify if is "."
			if (value.at(index)=='.')
			{
				// Verify if exist point
				if (existPoint)
				{
					// Change result & break
					result = false;
					break;
				}
				else
				{
					// Active point
					existPoint=true;
				}
			}
			else
			if (value.at(index)=='-')
			{
				// Verify if exist Minus
				if (existMinus)
				{
					// Change result & break
					result = false;
					break;
				}
				else
				{
					// Verify first position
					if (index>0)
					{
					   // Change result & break
					   result = false;
					   break;
					}
					else
					   // Active Minus
					   existMinus=true;
				}
			}
			else
			if (value.at(index)=='+')
			{
				// Verify if exist point
				if (existPlus)
				{
					// Change result & break
					result = false;
					break;
				}
				else
				{
					// Verify first position
					if (index>0)
					{
					   // Change result & break
					   result = false;
					   break;
					}
					else
					   // Active Minus
					   existPlus=true;
					
				}
			}
			else
			{
			   //Change result
			   result = false;
			   break;
			}
		}
	}

	// return
	return result;
}

// --------------------------------------------------------------------
// Verify if string contain a decimal
// --------------------------------------------------------------------
bool jsIsDecimal(string value)
{
    // result default is true
    bool result = true;

    // Double
    double douValue;
    double douConvert;

    // String
    string tempStr;

	// Valid 
	if (haveDecimalChars(value))
	{
		// Try to convert to double
		try
		{			
			// Convert
			douValue = stod(value);

			// Convert to string
			tempStr = to_string(douValue);

			// Convert el temporal a double
			douConvert = stod(tempStr);

			// Compara los valores
			if (douValue!=douConvert)
				result=false;
		}
		catch(const std::exception& e)
		{
			// Error ocurred; return false
			result = false;
		}	
	}
	else
	{
		// Error ocurred; return false
		result = false;
	}
    
    // return
    return result;
}



// Driver code
int main()
{
    // // validando
    // cout << "a)" << valid_number("4A") << endl;
    // cout << "b)" << valid_number("-4A") << endl;
    // cout << "c)" << valid_number("123True") << endl;
    // cout << "d)" << valid_number("-123True") << endl;
    // cout << "e)" << valid_number("-34.56") << endl;
    // cout << "f)" << valid_number("34..56") << endl;
    // cout << "g)" << valid_number("--12.334") << endl;
    // cout << "h)" << valid_number("-0.45") << endl;
    // cout << "i)" << valid_number("-.45") << endl;
    // cout << "j)" << valid_number("-45") << endl;
    // cout << "k)" << valid_number("45") << endl;
	// cout << "l)" << valid_number("4-5") << endl;
	// cout << "m)" << valid_number("++45") << endl;
	// cout << "n)" << valid_number("+4+5") << endl;
	// cout << "o)" << valid_number(" 45") << endl;
	// cout << "p)" << valid_number(" 4 5") << endl;
	// cout << "q)" << valid_number("3.1416") << endl;
    // cout << endl;

    // cout << "a)" << jsIsInteger("4A") << endl;
    // cout << "b)" << jsIsInteger("-4A") << endl;
    // cout << "c)" << jsIsInteger("123True") << endl;
    // cout << "d)" << jsIsInteger("-123True") << endl;
    // cout << "e)" << jsIsInteger("-34.56") << endl;
    // cout << "f)" << jsIsInteger("34..56") << endl;
    // cout << "g)" << jsIsInteger("--12.334") << endl;
    // cout << "h)" << jsIsInteger("-0.45") << endl;
    // cout << "i)" << jsIsInteger("-.45") << endl;
    // cout << "j)" << jsIsInteger("-45") << endl;
    // cout << "k)" << jsIsInteger("45") << endl;
	// cout << "l)" << jsIsInteger("4-5") << endl;
	// cout << "m)" << jsIsInteger("++45") << endl;
	// cout << "n)" << jsIsInteger("+4+5") << endl;
	// cout << "o)" << jsIsInteger(" 45") << endl;
	// cout << "p)" << jsIsInteger(" 4 5") << endl;
	// cout << "q)" << jsIsInteger(".3") << endl;
	// cout << "r)" << jsIsInteger("") << endl;
	// cout << endl;

    cout << "a)" << jsIsDecimal("4A") << endl;
    cout << "b)" << jsIsDecimal("-4A") << endl;
    cout << "c)" << jsIsDecimal("123True") << endl;
    cout << "d)" << jsIsDecimal("-123True") << endl;
    cout << "e)" << jsIsDecimal("-34.56") << endl;
    cout << "f)" << jsIsDecimal("34..56") << endl;
    cout << "g)" << jsIsDecimal("--12.334") << endl;
    cout << "h)" << jsIsDecimal("-0.45") << endl;
    cout << "i)" << jsIsDecimal("-.45") << endl;
    cout << "j)" << jsIsDecimal("-45") << endl;
    cout << "k)" << jsIsDecimal("45") << endl;
	cout << "l)" << jsIsDecimal("4-5") << endl;
	cout << "m)" << jsIsDecimal("++45") << endl;
	cout << "n)" << jsIsDecimal("+4+5") << endl;
	cout << "o)" << jsIsDecimal(" 45") << endl;
	cout << "p)" << jsIsDecimal(" 4 5") << endl;
	cout << "q)" << jsIsDecimal("3.1416") << endl;
	cout << "r)" << jsIsDecimal("") << endl;
	cout << "s)" << jsIsDecimal(".") << endl;
	cout << "t)" << jsIsDecimal("-") << endl;
	cout << "w)" << jsIsDecimal("+") << endl;

	cout << endl;

	return 0;
}




