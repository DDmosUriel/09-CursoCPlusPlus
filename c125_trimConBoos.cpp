/*
Curso de C++
Autor: JAOR
c125_ trim con funciones propias
*/

// Librerias
#include<iostream> 
#include<boost/algorithm/string.hpp> 
#include<string> 

// Espacios de nombre
using namespace std; 
using namespace boost::algorithm; 

// Programa principal
int main() 
{ 
    // Cadenas
	string s1 = " En_Un_Lugar_de_YT ";
	string s2 = " En_Un_Lugar_de_YT ";
	string s3 = " En_Un_Lugar_de_YT ";

	// Aplicando Left Trim on string, s1
	cout << "La Cadena Original es: \""  << s1 << "\" \n";
	trim_left(s1);
	cout << "Aplicando left trim: \"" 	 << s1 << "\" \n\n";

	// Aplicando Right Trim on string, s2
	cout << "La Cadena Original es: \""  << s2 << "\" \n";
	trim_right(s2);
	cout << "Aplicando right trim: \"" 	 << s2 << "\" \n\n";

	// Aplicando Trim on string, s3
	cout << "La Cadena Original es: \""  << s3 << "\" \n";
	trim(s3);
	cout << "Aplicando trim: \""         << s3  << "\" \n";

    // Finaliza retornando 
    return 0;         
}