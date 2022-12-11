/*

Curso de C++
Autor: JAOR
c119_ ioString from JAOR
*/

// Incluimos librerias
#include <iostream>
#include <cmath>

// Definimos el espacio de nombres
using namespace std;

// Clase 
class ioString
{
    // Alcance Publico
    private:
        // Propiedades
        char   separador;        // El Separador de las palabras
        string cadena;           // La Cadena conteniendo las palabras  
        char   caracter;         // Para leer un caracter

        // Depurar eliminar duplicidad de caracter separador     
        void depurar()
        {
            // Variable temporal
            string temporal="";

            // Indice
            int indice;            

            // caracter anterior
            char anterior;

            // Ciclo para depurar
            for (indice=0; indice < cadena.size(); indice++)
            {
                // Obtiene el caracter
                caracter = cadena.at(indice);

                // Verifica si es el separador
                if (caracter==separador)
                {                   
                    // Verifica que no fue el anterior
                    if (anterior!=separador)
                    {
                      // Lo agrega a la nueva cadena
                      temporal = temporal + cadena.at(indice);
                    }                   
                }
                else
                {
                    // Lo agrega a la nueva cadena
                    temporal = temporal + cadena.at(indice);    
                }
                
                // actualiza anterior
                anterior = cadena.at(indice);
            }

            // Asigna el temporal a cadena
            cadena = temporal;
        }        

    public:
        // Constructor
        ioString (string cadena,char separador)
        {            
            // Asigna a las propiedades
            this->cadena    = cadena;
            this->separador = separador;

            // Llama al metodo para depurar
            depurar();
        }           

        // Extrae la cadna
        string getCadena()
        {
            // Retorna la cadena
            return cadena;
        }

        // Obtiene cuantas palabras
        int getPalabras()
        {
            // Variable para el indice
            int indice;

            // Variable para contar
            int contador=0;

            // Verifica si hay caracteres
            if (cadena.size()>0)
            {
                // Ciclo para recorrer cadena y contar palabras
                for (indice = 0; indice < cadena.size(); indice++)
                {
                    // Compara el caracter con el separador
                    if (cadena.at(indice)==separador)
                       // incrementa el contador
                       contador++;
                }

                // Verifica si el final no es un espacio
                if (cadena.at(cadena.size()!=' '))
                    // Incrementa el contador
                    contador++;
            }            
            
            // Retorna el contador
            return contador;
        }

        // Función para agregar una palabra
        void agregar (string agregar)
        {
            // Agrega una cadena
            cadena = cadena + separador + agregar;

            // Procesa de nuevo 
            depurar();
        }

        // Función para extraer una palabra
        string extraer ()
        {
            // Palabra a retornar
            string palabra="";

            // cadena actualizada
            string actualizada;

            // extraccion
            bool extraccion = false;

            // Para el indice
            int indice;

            // Verifica primero que haya que procesar
            if (cadena.size()>0)
            {
                // Ciclo para procesar la cadena
                for (indice = 0; indice < cadena.size(); indice++)
                {
                    // Verifica que ya se haya extraido
                    if (extraccion)
                    {
                        // Agrega a cadena a actualizar
                        actualizada = actualizada + cadena.at(indice);
                    }
                    else
                    {
                        // Compara el caracter con el separador
                        if (cadena.at(indice)==separador)
                        {
                            // Activa extraccion
                            extraccion = true;
                        }
                        else
                        {
                            // Agrega a palabra
                            palabra = palabra + cadena.at(indice);
                        }
                    }                    
                }

                // Actualiza
                cadena = actualizada;
            }
            else
            {
                // Mensaje
                cerr << "ioString Error: No hay palabras para extraer" << endl;
            }             

            // Devuelve la palabra
            return palabra;     
        }   
        
        // Limpiar
        void limpiar(char separador)
        {
            // Limpiamos la cadena, palabras y separador
            cadena = "";
            this->separador = separador;
        }
};


// Función principal
int main () 
{   
    // Crea un objeto de la Clase
    ioString test("En un lugar",' ');

    // Para obtener palabra
    string palabra;

    // Despliega la cadena
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // agrega elementos
    test.agregar("de");
    
    // Despliega la cadena
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // agrega elementos
    test.agregar("la mancha");
    
    // Despliega la cadena
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();


    // Limpiar y Cambia el operador
    test.limpiar(',');

    // Agrego datos
    test.agregar("Juan,Perez,33,82.56,1.82,Hombre,Casado");
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Agregar otros datos
    test.agregar(" ,Catolico");
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();



    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    palabra = test.extraer();

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Finaliza el programa
    return 0;
}
