/*

Curso de C++
Autor: JAOR
c120_ ioString Operador Pacman from JAOR
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
                // Verifica si es el separador
                if (cadena.at(indice)==separador)
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

        // Para obtener el separador
        char getSeparador()
        {
            // Retorna el separador
            return separador;
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

        // Declara una función amiga para sobrecargar el operador
        friend ioString operator << (ioString& ioCadena, const string& cadena);

        // Sobre carga del operador dentro de la clase
        ioString operator >>(string& derecho)
        {   
            // Extraigo la palabra en derecho
            derecho = this->extraer();   

            // Verificamos
            cout << "Retornando al Extraer:" << this->getCadena() << endl;     

            // Retorna this
            return *this;
        } 

        // // Sobre carga del operador dentro de la clase
        // ioString operator << (const string& derecho)
        // {   
        //     // Agrega la Cadena
        //     this->agregar(derecho);

        //     // Crea el nuevo objeto a retornar
        //     ioString ioStringNew(this->getCadena(),this->getSeparador());

        //     // Retorna si izquierdo es mayor que derecho
        //     cout << "Retornando al agregar:" << ioStringNew.getCadena() << endl;
           
        //     // Retorna el nuevo objeto
        //     return ioStringNew;

        //     //cout << "Retornando:" << this->getCadena() << endl;
        //     //return *this;
        // } 
};

// Sobrecarga del Operador
ioString operator << (ioString& ioCadena, const string& cadena)
{
    // Agrega la Cadena
    ioCadena.agregar(cadena);

    // Retorna la cadena
    return ioCadena;
}


// Función principal
int main () 
{   
    // Crea un objeto de la Clase
    ioString test("En un lugar",' ');

    // Para obtener palabra
    string palabra;
    string palabra2;

    // Despliega la cadena
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // agrega elementos con el operador pacman
    //test.agregar("de");
    test << "de";
    
    // Despliega la cadena
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // agrega elementos
    //test.agregar("la mancha");
    //test << "la" << "mancha";
    
    // Despliega la cadena
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // Obtengo palabra
    // palabra = test.extraer();
    test >> palabra >> palabra2;

    // // Despliega la palabra extraida
    cout << "Extraida :" << palabra << " " << palabra2 << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // Intenta sacar otra palabra
    test >> palabra >> palabra2;

    // Despliega la palabra extraida
    cout << "Extraida :" << palabra << endl;
    cout << "Cadena   :" << test.getCadena() << endl;
    cout << "Palabras :" << test.getPalabras() << endl;
    getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();


    // // Limpiar y Cambia el operador
    // test.limpiar(',');

    // // Agrego datos
    // test.agregar("Juan,Perez,33,82.56,1.82,Hombre,Casado");
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Agregar otros datos
    // test.agregar(" ,Catolico");
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();



    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // // Obtengo palabra
    // palabra = test.extraer();

    // // Despliega la palabra extraida
    // cout << "Extraida :" << palabra << endl;
    // cout << "Cadena   :" << test.getCadena() << endl;
    // cout << "Palabras :" << test.getPalabras() << endl;
    // getchar();

    // Finaliza el programa
    return 0;
}



        // Declara una función amiga para sobrecargar el operador
        //friend bool operator == (const Figura& izquierdo, const Figura& derecho);    

        // Sobre carga del operador dentro de la clase
        // bool operator >(const Figura& derecho)
        // {
        //     // Retorna si izquierdo es mayor que derecho
        //     return (this->alto * this->ancho) > (derecho.alto * derecho.ancho);            
        // } 


// // Declara una función amiga para sobrecargar el operador
// bool operator == (const Figura& izquierdo, const Figura& derecho)
// {
//     // Retorna si son iguales las 2 areas
//     return (izquierdo.alto * izquierdo.ancho) == (derecho.alto * derecho.ancho);
// }
