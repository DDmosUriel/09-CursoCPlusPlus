/*

Curso de C++
Autor: JAOR
Clase 62 - Obteniendo la Fecha y la Hora

El Manejo de la Fecha y la Hora en programación, es fundamental
ya que en la mayoría de los procesos, está involucrado el registro
del tiempo.

C++ no provee una Clase (cosa que no me explico) para poder manejar
la Fecha y la Hora; así que lo que hace es heredar las estructuras
y funciones para fecha y hora manejadas en C.

La librería que se necesita incluir para poder hacer uso de estos
recursos es <ctime>.

La estructura que utiliza el lenguaje para manejar la información
es:

struct tm
{
  int tm_sec;   // segundos de 0-61
  int tm_min;   // Minutos de 0-59
  int tm_hour;  // Horas de 0-24
  int tm_mday;  // Dias de 1-31
  int tm_mon;   // Meses de 0-11
  int tm_year;  // Años desde 1900
  int tm_wday;  // Dias desde el domingo
  int tm_yday;  // Dias desde el primero de Enero
  int tm_isdst; // Manejo del Horario de Verano
}

En esta primera clase de fechas veremos las siguientes funciones:

time_t time(time_t *time);
Obtiene la fecha actual del Sistema, en número de segundos transcurridos desde el 01-Ene-70. Si no
es posible retornar el tiempo, devuelve el valor de -1.
Si time no es un puntero nulo, el valor de retorno es también asignado al objeto al que apunta.
time_t es un tipo de dato devuelto que generalmente un long int

char *ctime(const time_t *time);
Obtiene la fecha como un apuntador a string, donde esta tiene el formato de:
dia mes año horas:minutos:segundos años, que es proporcionado por time

struct tm *gmtime(const time_t *time);
Esta función retorna un apuntador a una estructura tm. El tiempo se encuentra representado en
Coordinated Universal Time (UTC), el cual es escencialmente el Greenwich Mean Time (GMT).

char * asctime ( const struct tm * time );
Esta función retorna un apuntador a string conteniendo la información de la estructura apuntada por
time, en el formado: dia mes año horas:minutos: segundos años


*/

// Incluímos las librerías
#include <iostream>
#include <ctime>

// Definición de espacios de nombre
using namespace std;

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 62 - Fecha y Hora \n\n";

    // Obtiene la fecha y hora del Sistema
    time_t tmFechaHora  = time(NULL);

    // Desplegando el valor de tmFechaHora
    cout << "La Fecha y Hora en time_t " << tmFechaHora << endl;

    // Convierte a String
    char* strFechaHora = ctime(&tmFechaHora);
    cout << "La Fecha y Hora local es: " << strFechaHora << endl;

    // Convierte Fecha y Hora a estructura tm para UTC
    tm *stcFechaHora = gmtime(&tmFechaHora);

    // Obtien el Tiempo
    strFechaHora = asctime(stcFechaHora);

    cout << "La Fecha y Hora UTC es:"<<  strFechaHora << endl;

    // Desplegando la información a través de la estructura
    cout << "Desplegando la información desde la estructura: " << endl;
    cout << "Segundos           :" << stcFechaHora->tm_sec << endl;
    cout << "Minutos            :" << stcFechaHora->tm_min << endl;
    cout << "Horas              :" << stcFechaHora->tm_hour << endl;
    cout << "Dia                :" << stcFechaHora->tm_mday << endl;
    cout << "Mes                :" << stcFechaHora->tm_mon << endl;
    cout << "Año                :" << stcFechaHora->tm_year << endl;
    cout << "Dias desde Domingo :" << stcFechaHora->tm_wday << endl;
    cout << "Dias del Año       :" << stcFechaHora->tm_yday << endl;
    cout << "DST                :" << stcFechaHora->tm_isdst << endl;

    // Finaliza la Aplicación
    return 0;

}
