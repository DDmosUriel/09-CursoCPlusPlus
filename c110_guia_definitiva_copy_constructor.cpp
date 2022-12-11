/*
Curso de C++
Autor: JAOR
Clase 110 - copy constructor la guia definitiva
*/

// Un Constructor de Copia es un Método en el cual se especifica
// como se realiza la copia de un objeto al crearlo.
// Cuando se pasa un objeto como parámetro, tambien se ejecuta
// el constructor de copia
// Este metodo, tiene la responsabilidad de crear todas las 
// propiedades del objeto.

// Librerias
#include <iostream>

// Espacio de nombres
using namespace std;

// Definimos la Clase
class Pelicula 
{
   // Ámbito Publico
   public:
      // Constructor
      Pelicula(string nombre, int numVotos);           
      //Pelicula(int numVotos);           
      
      // Para obtener el nombre de la pelicula
      string getNombre();

      // Getter para los votos
      int getVotos();
      
      // Constructor de Copia
      Pelicula(const Pelicula &obj);

      // Destructor
      ~Pelicula();           

   // Ámbito Privado
   private:
      string nombre="Sin Definir";
      int *votos;
      string x;
      string y;
};

// Member functions definitions including constructor
Pelicula::Pelicula(string nombre,int numVotos) 
//Pelicula::Pelicula(int numVotos) 
{
   // Colocamos el nombre
   this->nombre = nombre;

   // Reservando memoria para los votos
   this->votos = new int;

   // Colocando los votos   
   *votos = numVotos;

   x  = "Default por constructor para x";
   y  = "Default por constructor para y";


   // Si quieres que el parámetro se llame igual
   //*(this->votos) = votos;
}


// Constructor de Copia
Pelicula::Pelicula(const Pelicula &obj) 
{
   // Mensaje
   cout << "Ejecutando constructor de copia ..." << endl;

   // Colocamos el nombre
   this->nombre = obj.nombre;
   
   // Colocamos el valor de x , y
   this->x = obj.x;
   this->y = obj.y;

   // Reservamos memoria
   votos = new int;

   // Asignamos los votos
   *votos = *obj.votos; // copy the value
}

// Destructor
Pelicula::~Pelicula(void) 
{
   // Mensaje
   cout << "Ejecutando destructor ..." << endl;

   // Liberamos memoria con delete
   cout << "--> " << votos << endl;
   cout << "--> " << *votos << endl;
   delete votos;
   cout << "--> " << votos << endl;
   cout << "--> " << *votos << endl;
   
}

// Obtenemos el número de Votos
int Pelicula::getVotos( void ) 
{
   // Retornamos el Contenido (*) del Apuntador (votos)
   return *votos;
}

// Retornamos el nombre
string Pelicula::getNombre()
{
    // Retornamos el Nombre
    return nombre;
}

// Función que ejecuta el Constructor de Copia
void display(Pelicula obj) 
{
   cout << "Pelicula : " << obj.getNombre() <<endl;
   cout << "Votos    : " << obj.getVotos() <<endl;
}


// Función Principal
int main() 
{
   // Creamos una pelicula con 10 votos
   Pelicula pelicula1("Alien",10);
   //Pelicula pelicula1(10);

   // 1a Forma. Creando un objeto basado en otro
   cout << "Creando un objeto basado en otro ..." << endl;
   Pelicula pelicula2 = pelicula1;  
   //Pelicula pelicula2(pelicula1);

   // Pausa
   cout << "Presione enter para continuar ..." << endl;
   getchar();

   // Desplegamos la información de la pelicula pasandola como parámetro
   // 2a Forma. Pasando un objeto como parámetro a una función
   cout << "Desplegando información de pelicula desde el objeto de la Clase ..." << endl;
   display(pelicula2);   

   // Pausa antes de terminar
   cout << "Presione enter para continuar ..." << endl;
   getchar();
   
   // Finaliza
   return 0;
}