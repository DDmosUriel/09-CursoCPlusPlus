/*

Curso de C++
Autor: JAOR
Clase 67 - Estructuras

Una Estructura es un Conjunto de Variables las cuales se agrupan bajo un
mismo nombre; el nombre de la Estructura, y de la cual posteriormente se
pueden definir variables de esta estructura como si fuera un tipo de dato.

Al momento en que se define la estructura; es posible declarar variables,
o puede realizarse posteriormente.

La sintaxis de la declaración de una estructura en lenguaje C++ es:

struct [nombre_estructura]
{
   tipo nombre_variable;
   tipo nombre_variable;
   ...
   tipo nombre_variable;
}[variables_estructura];

Es posible no poner el nombre de la estructura (nombre_estructura), si es
que se van a definir variable únicamente al definirla; si se
van a definir variable despues; entonces si se debe de colocar el nombre de
la estructura.

Una vez que se ha definido la variable, entonces a través de este nombre
es posible acceder las variables que se han definido dentro la estructura.

Veamos un ejemplo:

// Declaramos una Estructura para Manejar la Información de una Persona
struct LIBROS
{
   string sTit;
   string sAut;
   string sEdi;
   string iISBN;
   int    iAnio;
}xLibro1,xLibro2;

En el ejemplo anterior, definimos el nombre de la Estructura LIBRO; y
también se definen 2 variables al final de la definición de la estructura:
xLibro1, y xLibro2.

Al haber colocado el nombre de la Estructura; es posible definir mas adelante
variables de esta estructura, de la siguiente forma:

struct LIBROS xLibro3;

Una vez que se han definido las variables; es posible acceder a las variables
de la estructura, utilizando el operador "." de la siguiente forma:

// Accediendo a la información de la Variable
xLibro1.sTit  = "Programming in C";
xLibro1.sAut  = "JAOR";
xLibro1.sEdi  = "Limusa";
xLibro1.iAño  = 2000;
xLibro1.iISBN = 12312344;

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Definiendo la Estructura de Editorial
struct EDITORIAL
{
   int    iIde;
   string sNom,sDir,sTel,sWeb;
};


void FnTest()
{
   struct EDITORIAL xEdi;
   //struct LIBROS xLib;
}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 67 - Estructuras    " << endl << endl;

    // Definiendo la Estructura de PERSONA
    struct LIBROS
    {
       string sTit;
       string sAut;
       int    iEdi;
       long int    iISBN;
       int    iAnio;
    }xLibro1,xLibro2;

    // Definiendo posteriormente
    struct LIBROS xLibro3;
    struct EDITORIAL xEditorial;

    // Definiendo la Editorial
    xEditorial.iIde = 1;
    xEditorial.sNom = "LIMUSA";
    xEditorial.sDir = "Zona Centro, D.F.";
    xEditorial.sTel = "999-99-99-99";
    xEditorial.sWeb = "www.limusa.com";

    // Accediendo a la información de la Variable
    xLibro1.sTit  = "Programming in C/C++";
    xLibro1.sAut  = "JAOR";
    xLibro1.iEdi  = 1;
    xLibro1.iISBN = 1234567890123;
    xLibro1.iAnio = 2000;

    // Desplegando la Información de la Editorial y del Libro
    cout << "Editorial" << endl;
    cout << "Ide : " << xEditorial.iIde << endl;
    cout << "Nom : " << xEditorial.sNom << endl;
    cout << "Dir : " << xEditorial.sDir << endl;
    cout << "Tel : " << xEditorial.sTel << endl;
    cout << "Web : " << xEditorial.sWeb << endl << endl;

    // Desplegando la Información de la Editorial y del Libro
    cout << "Libro" << endl;
    cout << "Tit  : " << xLibro1.sTit  << endl;
    cout << "Aut  : " << xLibro1.sAut  << endl;
    cout << "Edi  : " << xLibro1.iEdi  << endl;
    cout << "ISBN : " << xLibro1.iISBN << endl;
    cout << "Año  : " << xLibro1.iAnio << endl << endl;

    // Finaliza la Aplicación
    return 0;

}
