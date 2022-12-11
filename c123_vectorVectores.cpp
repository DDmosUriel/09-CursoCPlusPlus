/*
Curso de C++
Autor: JAOR
c123_ Vector de Vectores
Implementaremos una matriz con vectores
*/

// Librerias
#include <iostream>
#include <vector>
#include <string>

// Espacio de Nombres
using namespace std;

// Funcioń Principal
int main()
{	
	// El vector para un renglon
	vector<string> renglon;
	
	// Agregamos las columnas del renglon
	renglon.push_back("00");
	renglon.push_back("01");
	renglon.push_back("02");

	// Renglon
	// 00 01 02
	
	// Matriz
	vector<vector<string>> Matriz;
	
	// Inserto el renglon
	Matriz.push_back(renglon);

	// actualizo las columnas del renglon
	renglon[0]="10";
	renglon[1]="11";
	renglon[2]="12";
	renglon.push_back("13");

	// Inserto el renglon
	Matriz.push_back(renglon);
		
	// Matriz	
	// 00 01 02
	// 10 11 12 13
	
	// actualizo las columnas del renglon
	renglon[0]="20";
	renglon[1]="21";
	renglon[2]="22";
	renglon[3]="23";
	renglon.push_back("24");
	
	// Inserto el renglon
	Matriz.push_back(renglon);
	
	// Matriz
	// 00 01 02
	// 10 11 12 13
	// 20 21 22 23 24
	
	// Despliego
	for (int i=0; i < Matriz.size(); i++)
	{
	    for (int j=0; j< Matriz[i].size(); j++)
		{
			// Despliega
		    cout << Matriz[i][j] << " ";
		}
		// Cambia de linea
		cout << endl;
	}
	
	// Finaliza
	return 0;
}
