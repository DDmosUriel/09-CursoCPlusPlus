/*

Curso de C++
Autor: JAOR
Clase 108 - Templates
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
          nombre = "Sin Definir";
          votos = -1;
       }
       Pelicula(string nombre, int votos)
       {
          this->nombre = nombre; 
          this->votos  = votos;
       }

       // Getter para obtener el Nombre
       string getNombre()
       {
           // Devuelve el nombre de la Pelicula
           return nombre;
       }   


    // Sobrecargarmos el operador >
    bool operator >(const Pelicula& objOriginal)
    {
        // Retorna si tiene menos votos
        return votos > objOriginal.votos;
    }    

    // Sobrecargarmos el operador >
    Pelicula operator >(const Pelicula& objOriginal)
    {
        // Retorna si tiene menos votos
        return votos > objOriginal.votos;
    }    
};


// Usamos el template
template <class anyType>

// Definimos la clase
class Coordenada 
{
  private:
    anyType x, y; // Las variables de cualquier tipo

  public:
    // Constructor
    Coordenada (anyType x, anyType y)
    {
      // Se colocan las coordenadas
      this->x = x; 
      this->y = y;
    }
    
    // Función para obtener el mas grande
    anyType getMax ();    
    
};

// Función para obtener el Max
template <class anyType>
anyType Coordenada<anyType>::getMax ()
{
    // Valor a retornar
    anyType retval;

    // Obtiene el mayor
    retval = x > y ? x : y;

    // Retorna
    return retval;
}

// Función principal
int main () 
{
  // Objeto del Template
  Coordenada <int>    Coordenada1 (100, 275);
  cout << "Max:" << Coordenada1.getMax() << endl;

  Coordenada <float>  Coordenada2 (100.24, 75.45);
  cout << "Max:" << Coordenada2.getMax() << endl;

  Coordenada <double> Coordenada3 (140.24, 175.45);
  cout << "Max:" << Coordenada3.getMax() << endl;

  // Creamos una pelicula
  Pelicula pelicula1("Alien" ,10);
  Pelicula pelicula2("Avatar",98);

  // Verificamos el uso del operador
  if (pelicula1 > pelicula2)
     cout << pelicula1.getNombre();
  else
     cout << pelicula2.getNombre();

  // Despliego el Mensaje de Mejor
  cout << " es la mejor"  << endl;

  Coordenada <Pelicula> Coordenada4 (pelicula1,pelicula2);
  cout << "Max:" << Coordenada4.getMax().getNombre() << endl;

  // int      x = 10;
  // Pelicula y("It",10);
  // y = y + x;

  // Finaliza el programa
  return 0;
}