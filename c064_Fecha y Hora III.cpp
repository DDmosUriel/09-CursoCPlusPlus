/*

Curso de C++
Autor: JAOR
Clase 64 - Fecha y Hora III

En esta clase, veremos unicamente una función de fecha y hora que es difftime.

double difftime ( time_t time2, time_t time1 );
Esta función calcula la diferencia en segundos entre 2 fechas.
Recibe como parámetros 2 variables de tipo time_t

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
    cout << "Clase 64 - Fecha y Hora III \n\n";

    // Variables
    time_t start_t, end_t;
    double diff_t;
    char strFechaHora[80];

    // Obtengo el tiempo inicial
    time(&start_t);

    // Ciclo de tiempo
    for (int i=0; i<1000000000;i++);

    // Obtengo el Final
    time(&end_t);

    // Desplegando los Tiempos
    cout << "Inicio    :" << start_t << endl;
    cout << "Final     :" << end_t << endl << endl;

    // Convierte a String incluyendo fin de linea
    char* strFechaHoraInicial = ctime(&start_t);
    cout << "La Fecha y Hora local es: " << strFechaHoraInicial;
    char* strFechaHoraFinal = ctime(&end_t);
    cout << "La Fecha y Hora local es: " << strFechaHoraFinal;
    cout << endl;


    // Obtiene la Diferencia
    diff_t = difftime(end_t, start_t);
    cout << "Diferencia:" << diff_t << endl;
    cout << endl;

    // Variables para Fechas Creadas
    tm tmFechaHoraInicial;      // Variable para la Fecha Hora Inicial
    tm tmFechaHoraFinal;        // Variable para la Fecha Hora Final

    // Creando una Fecha Hora Inicial
    tmFechaHoraInicial.tm_year = 2001 - 1900;
    tmFechaHoraInicial.tm_mon = 7 - 1;
    tmFechaHoraInicial.tm_mday = 4;
    tmFechaHoraInicial.tm_hour = 0;
    tmFechaHoraInicial.tm_min = 0;
    tmFechaHoraInicial.tm_sec = 1;
    tmFechaHoraInicial.tm_wday = 15;
    tmFechaHoraInicial.tm_yday = 500;
    tmFechaHoraInicial.tm_isdst = -1;

    // Creando una Fecha Hora Final
    tmFechaHoraFinal.tm_year = 2001 - 1900;
    tmFechaHoraFinal.tm_mon = 7 - 1;
    tmFechaHoraFinal.tm_mday = 5;
    tmFechaHoraFinal.tm_hour = 0;
    tmFechaHoraFinal.tm_min = 0;
    tmFechaHoraFinal.tm_sec = 1;
    tmFechaHoraFinal.tm_isdst = -1;

    // Creo la Fecha Nueva y Obtengo su tiempo
    start_t = mktime(&tmFechaHoraInicial);

    // Verifico si hubo error
    if (start_t==-1)
       cout << "Error: En mktime FechaHoraInicial " << endl;


    // Crea la Fecha Final y obengo su tiempo
    end_t = mktime(&tmFechaHoraFinal);

    // Verifico si hubo error
    if (end_t==-1)
       cout << "Error: En mktime FechaHoraFinal " << endl;


    // Desplegando los Tiempos
    cout << "Inicio de Fecha Hora Creada    :" << start_t << endl;
    cout << "Final  de Fecha Hora Creada    :" << end_t << endl;

    // Obtiene la diferencia
    diff_t = difftime(end_t, start_t);
    cout << "Diferencia entre Fecha y Hora Creada:" << diff_t << endl;
    cout << endl;

    // Buffer
    char strFecha[80];

    // Desplegar dia de la Semana y dias transcurridos
    strftime(strFecha, sizeof(strFecha), "%c", &tmFechaHoraInicial);
    cout << "La Fecha Inicial Creada : " << strFecha  << endl;

    cout << "Dia de la Semana :" << tmFechaHoraInicial.tm_wday << endl;
    cout << "Dias del año transcurridos :" << tmFechaHoraInicial.tm_yday << endl;

    // Finaliza la Aplicación
    return 0;

}
