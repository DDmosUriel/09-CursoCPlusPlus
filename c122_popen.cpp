/*
Curso de C++
Autor: JAOR
c122_ Lectura de Comandos del Sistema con popen

popen: inicia flujos de pipe (tuberia) hacia o desde un proceso

Un pipe (canalización) es una forma de redirección (transferencia de la 
salida estándar a algún otro destino) que se utiliza en Linux y otros 
sistemas operativos similares a Unix para enviar la salida de un comando
/programa/proceso a otro comando/programa/proceso para su posterior 
uso.

*/

// Librerías
#include <iostream>

// Definimos el espacio de nombres
using namespace std;

// Función Principal
int main( int argc, char *argv[] )
{
    // Manejador del Archivo
    FILE *fp;

    // Para leer la respuesta
    char resultados[1024];

    // Para saber si el comando es correcto
    bool comandoCorrecto = false;

    // Abre un archivo con popen para ejecutar un Comando
    fp = popen("./a.out", "r");

    // Verifica que pudo abrir el archivo para el comando
    if (fp == NULL) 
    {
      // Mensaje de Error
      cout <<  "Error al abrir popen para ejecutar el Comando\n";
    }
    else
    {
      // Mensaje para los Resultado
      cout << "Resultados del Comando:" << endl;
      
      /* Read the output a line at a time - output it. */
      while (fgets(resultados, sizeof(resultados)-1, fp) != NULL)
      {
          // Actualiza ejecuto
          comandoCorrecto= true;

          // Despliega lo obtenido
          cout << "------> " << resultados;
      }

      //  Verifico si se pudo ejecutar
      if (! comandoCorrecto)
      {
          // Mensaje
          cout << "El Comando no se pudo ejecutar ..." << endl;
      }
    }
    
    // Ciera el popen
    pclose(fp);

    // Mensaje de Programa terminado
    cout << "Prorama terminado ..." << endl;

    // Finaliza
    return 0;
}
