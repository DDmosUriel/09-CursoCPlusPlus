/*
Curso de C++
Autor: JAOR
Clase 109 - sobrecarga de operadores la guia definitiva
*/

// Incluimos librerias
#include <iostream>

// Definimos el espacio de nombres
using namespace std;

// Creamos una clase Peliculas
class Pelicula
{
    // Parte Privada
    private:
      string nombre;
      int    votos;
      
    // Parte Publica
    public:
       Pelicula()
       {
          // Establece los valores por default
          nombre = "Sin Definir";
          votos = -1;
       }
       Pelicula(string nombre, int votos)
       {
          // Establezco el nombre y los votos de la pelicula
          this->nombre = nombre; 
          this->votos  = votos;
       }

       // Getter para obtener el Nombre
       string getNombre()
       {
           // Devuelve el nombre de la Pelicula
           return nombre;
       }

       // Getter para obtener los votos
       int getVotos()
       {
           // Devuelve el nombre de la Pelicula
           return votos;
       }   

       // Imprimir la informacion de la Pelicula
       void Imprimir()
       {
           // Imprime
           cout << "Pelicula: " << nombre << " Votos: " << votos << endl;
       }   

    // Sobrecarga del Operador >  
    // pelicula1 > pelicula2
    // pelicula1 se accede a traves de this (izquierdo)
    // pelicula2 es objDerecho  
    bool operator >(const Pelicula& objDerecho)
    {
        // Retorna si tiene menos votos
        if (this->votos > objDerecho.votos)
           return true;
        else
           return false;   
        //return this->votos > objDerecho.votos;
    }                     

    bool operator <(const Pelicula& objDerecho)
    {        
        // Retorna si el primer operando tiene mas votos (izquierda)
        return votos < objDerecho.votos;
    }

    bool operator ==(const Pelicula& objDerecho)
    {        
        // Retorna si el primer operando tiene mas votos (izquierda)
        return votos == objDerecho.votos;
    }       

    // // Sobrecargarmos el operador +
    // Pelicula operator +(const Pelicula& operandoDerecho)
    // {
    //     // Declaramos un objeto pelicula a retornar
    //     Pelicula peliculaRetornar;

    //     // Asignamos la suma de los votos a la pelicula retornar
    //     // Sumamos el operando izquierdo (this) con el operando derecho
    //     // Y lo ponemos en la variable a retornar
    //     peliculaRetornar.nombre = this->nombre + "|" + operandoDerecho.nombre;
    //     peliculaRetornar.votos  = this->votos + operandoDerecho.votos;

    //     // Retorno la pelicula
    //     return peliculaRetornar;
    // }     

    // Sobrecargarmos el operador +
    int operator +(const Pelicula& operandoDerecho)
    {
        // Declaramos una variable int para la suma
        //int sumaVotos;

        // Asignamos la suma de los votos a la pelicula retornar
        // Sumamos el operando izquierdo (this) con el operando derecho
        // Y lo ponemos en la variable a retornar
        //sumaVotos = this->votos + operandoDerecho.votos;

        // Retorno la pelicula
        return this->votos + operandoDerecho.votos;
    }



};

// Función principal
int main () 
{    
    // Creamos peliculas  
    Pelicula pelicula1("Alien" ,45);
    Pelicula pelicula2("Avatar",90);

    // Desplegamos la información de las peliculas
    pelicula1.Imprimir();
    pelicula2.Imprimir();

    // Comparamos con el operador > las peliculas
    if (pelicula1 == pelicula2)
       cout << "Ambas tienen los mismos votos" << endl;
    else
       cout << "Tiene diferentes votos" << endl;   

    // Declaro una nueva pelicula
    Pelicula pelicula3;

    // En esa pelicula almacenar la suma de los 2 votos de otra
    // y colocar en el nombre, las 2 peliculas
    // pelicula3    = pelicula2 + pelicula1;   
    // pelicula3.Imprimir();


    // Variable para los votos
    //int votosSumados;

    // Sumo los votos de las 2 peliculas
    //votosSumados = pelicula1 + pelicula2;

    cout << "La Suma de los votos de las 2 peliculas es:" << pelicula1 + pelicula2 << endl;
  
    // Finaliza el programa
    return 0;
}