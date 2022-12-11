/*

Curso de C++
Autor: JAOR
Clase 98 - Files_Stream

Así como C proporciona librerías al programador para el manejo de archivos,
C++ tambien provee una librería para este mismo fin llamada fstream.

Un Stream (Flujo) simplemente es una secuencia de datos, utilizados para
diversos propósitos; en este caso, para el manejo de archivos.

La librería fstream, proporciona tres clases para poder realizar el manejo
de archivos:

ofstream.   Para crear y escribir en archivos.

ifstream.   Para realizar lecturas en archivos.

fstream.    Para leer como para escribir información en un archivo.

Nota.Cabe mencionar que desde C++, tambien podemos hacer uso de las librerías
de C para el manejo de archivos.


ABRIENDO ARCHIVOS.

Antes de poder realizar cualquier operación en un archivo, tenemos que abrirlo.
Tanto el ofstream como el fstream, nos permiten abrir y escribir en un archivo;
y el ifstream, es utilizado únicamente para abrir y realizar lecturas en un
archivo.

Para poder realizar la apertura de un archivo, se debe hacer uso del método
open, el cual es miembro de las 3 clases; y esta es su sintaxis de uso:

void open(const char *filename, ios::openmode mode);

El primer argumento, filename; es el nombre del archivo, el cual puede incluir
una ruta o directorio.

El segundo argumento, es el modo en el cual cual el archivo puede ser abierto,
los cuales son los siguientes:

-------------------------------------------------------------------------------
Modo        Descripcion
-------------------------------------------------------------------------------
ios::app    Append mode. Permite escribir información al archivo al final.
ios::ate    Abre el archivo para escritura y mueve el cursor al final del archivo.
ios::in     Abre un archivo para lectura.
ios::out    Abre un archivo para escritura.
ios::trunc  Si el archivo existe, su contenido será destruido y comenzará como nuevo.

Clase           Default
---------------------------------------
ifstream        ios::in
ofstream        ios::out | ios::trunc
fstream         ios::in  | ios::out

Estos valores, pueden combinarse para indicar un modo específico de apertura; es decir.
Si deseáramos abrir un archivo para escritura y destruir su contenido previo, utilizaríamos
el método de la siguiente forma:

// Declaramos el Objeto para escritura
ofstream outfile;

// Lo abrimos para escritura truncando
outfile.open("file.dat", ios::out | ios::trunc );

Si quisiéramos abrir un archivo para lectura y escritura, lo haríamos de la siguiente
forma:

// Declaramos el objeto para lectura-escritura
fstream afile;

// Lo abrimos para lectura-escritura
afile.open("file.dat", ios::out | ios::in );

CERRANDO UN ARCHIVO.
Cuando un programa finaliza, todos los archivos abiertos son cerrados automáticamente;
pero siempre es conveniente y será una necesidad, cerrar una archivo que obviamente
se encuentre abierto. Para realizar esto se utiliza el siguiente método:

void close(); // Método para cerrar un archivo

ESCRIBIENDO EN UN ARCHIVO.
Para escribir información en un archivo, haremos uso del operador de inserción que hemos
venido utilizando en el curso para desplegar mensajes en la pantalla y que es "<<"; solo que
en esta ocasión este operador será utilizado por un objeto ofstream o un objeto fstream,
en lugar del objeto cout.

LEYENDO DE UN ARCHIVO.
Para leer información de un archivo, haremos uso del operador de extracción ya visto anteriormente
para leer información desde el teclado (">>"); solo que ahora lo utilizaremos desde un objeto ifstream
o desde un objeto fstream en lugar del objeto cin.

*/

// Incluimos las librerías necesarias
#include <fstream>
#include <iostream>

// El nombre de Espacio
using namespace std;

// Definimos función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 98 - Files_Stream" << endl << endl;

    // Vector de Datos
    char data[100];

    // Declaramos un objeto para un archivo de escritura
    ofstream outfile;

    // Abrimos el archivo para escritura
    outfile.open("afile.dat"); // Default del modo es: ios::out

    // Escribiendo a el Archivo
    cout << "El archivo ha sido abierto, captura tu nombre para escribir en el" << endl;
    cout << "Captura tu nombre: ";

    // Leemos en la variable data
    cin >> data;

    // Escribimos el Nombre leído al archivo
    outfile << data << endl;

    // Solicita la captura de la Edad
    cout << "Captura tu edad: ";

    // Lee la Edad
    cin >> data;

    // Escribe la edad leida al archivo
    outfile << data << endl;


    // Cierra el Archivo
    outfile.close();

    // Declara un archivo para lectura
    ifstream infile;

    // Abre el Archivo para lectura
    infile.open("afile.dat"); // El default del modo es in

    // Leyendo del Archivo
    cout << "Leyendo del Archivo" << endl;
    infile >> data;

    // Mandamos a la Pantalla
    cout << data << endl;

    // Lee de Nuevo
    infile >> data;

    // Lo mandamos de nuevo a la pantalla
    cout << data << endl;

    // Cierra el Archivo
    infile.close();

    // Finaliza con Return
    return 0;
}
