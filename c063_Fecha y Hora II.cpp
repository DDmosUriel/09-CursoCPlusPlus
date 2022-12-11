/*

Curso de C++
Autor: JAOR
Clase 63 - Fecha y Hora II

En esta clase veremos algunas otras funciones importantes para el manejo
de fecha y horas en C y C++.

struct tm *localtime(const time_t *time);
Esta función retorna un apuntador a una estructura tm, que tiene el tiempo local.

clock_t clock(void);
Esta función retorna el valor en ticks de reloj transcurridos desde que se inició el programa.
Para obtener el número de segundos, se necesita dividir entre CLOCKS_PER_SEC.

time_t mktime(struct tm *time);
Esta función retorna el tiempo de acuerdo a lo establecido en la estructura tm.

size_t strftime(char *cad, size_t maxtam, const char* formato, const struct tm *tiempoPtr);
Esta función se utiliza para dar formato a la fecha y hora en un formato específico.

Donde formato es cada especificador de conversión es reemplazado por los caracteres
apropiados descritos en la siguiente lista.

%a 	Es reemplazado por la abreviatura del nombre del día de la semana de la localidad
%A 	Es reemplazado por el nombre completo del día de la semana de la localidad
%b 	Es reemplazado por la abreviatura del nombre del mes de la localidad
%B 	Es reemplazado por el nombre completo del mes de la localidad
%c 	Es reemplazado por la fecha apropiada y la representación de la hora de la localidad
%d 	Es reemplazado por el día del mes como un número decimal (01-31)
%H 	Es reemplazado por la hora (reloj de 24 horas) como un número decimal (00-23)
%I 	Es reemplazado por la hora (reloj de 12 horas) como un número decimal (01-12)
%j 	Es reemplazado por el día del año como un número decimal (001-366)
%m 	Es reemplazado por el mes como un número decimal (01-12)
%M 	Es reemplazado por el minuto como un número decimal (00-59)
%p 	Es reemplazado por el equivalente de la localidad de las designaciones de AM/PM asociadas con un reloj de 12 horas
%S 	Es reemplazado por el segundo como un número decimal (00-61)
%U 	Es reemplazado por el número de la semana del año (el primer Domingo como el primer día de la semana 1) como un número decimal (00-53)
%w 	Es reemplazado por el día de la semana como un número decimal (0-6), donde Domingo es 0
%W 	Es reemplazado por el número de la semana del año (el primer Lunes como el primer día de la semana 1) como un número decimal (00-53)
%x 	Es reemplazado por la representación apropiada de la fecha de la localidad
%X 	Es reemplazado por la representación apropiada de la hora de la localidad
%y 	Es reemplazado por el año sin siglo como un número decimal (00-99)
%Y 	Es reemplazado por el año con siglo como un número decimal
%Z 	Es reemplazado por el nombre o la abreviatura del huso horario, o por ningunos caracteres si ningún huso horario es determinable
%% 	Es reemplazado por %

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
    cout << "Clase 63 - Fecha y Hora II \n\n";

    // current date/time based on current system
    time_t timeFechaHora;

    // Obtenemos la Fecha Hora como parámetro de la función
    time(&timeFechaHora);

    // Despliega la Fecha en Segundos
    cout << "Número de Segundos desde 1-Enero-1970:" << timeFechaHora << endl << endl;

    // Obtiene la Hora Local
    tm *tmFechaHoraLocal = localtime(&timeFechaHora);

    // Desplegando la información a través de la estructura
    cout << "Desplegando la información desde la estructura: " << endl;
    cout << "Segundos           :" << tmFechaHoraLocal->tm_sec << endl;
    cout << "Minutos            :" << tmFechaHoraLocal->tm_min << endl;
    cout << "Horas              :" << tmFechaHoraLocal->tm_hour << endl;
    cout << "Dia                :" << tmFechaHoraLocal->tm_mday << endl;
    cout << "Mes                :" << tmFechaHoraLocal->tm_mon << endl;
    cout << "Año                :" << tmFechaHoraLocal->tm_year << endl;
    cout << "Dias desde Domingo :" << tmFechaHoraLocal->tm_wday << endl;
    cout << "Dias del Año       :" << tmFechaHoraLocal->tm_yday << endl;
    cout << "DST                :" << tmFechaHoraLocal->tm_isdst << endl;
    cout << endl;


    // Declaramos 2 variables
    clock_t clockInicio, clockFinal;

    // Obtenemos el tiempo transcurrido
    clockInicio = clock();

    // Despliega el valor de la constante
    cout << "Ticks por Segundo: " << CLOCKS_PER_SEC << endl << endl;

    // Desplegamos
    cout << "Ticks    Inicial:" << clockInicio << endl;
    cout << "Segundos Inicial:" << clockInicio /CLOCKS_PER_SEC << endl << endl;

    // Obtenemos de nuevo tiempo transcurrido
    clockFinal = clock();

    // Desplegamos
    cout << "Ticks Final:"    << clockFinal << endl;
    cout << "Segundos Final:" << clockFinal /CLOCKS_PER_SEC << endl << endl;


    // Variables
    int ret;                    // Variable de Retorno
    struct tm tmFechaHoraNueva; // Variable para la Fecha Nueva
    char strFecha[80];          // Buffer para la conversión a Cadena

    // Creando una Fecha
    tmFechaHoraNueva.tm_year = 1900 - 1900;
    tmFechaHoraNueva.tm_mon = 9 - 1;
    tmFechaHoraNueva.tm_mday = 14;
    tmFechaHoraNueva.tm_hour = 6;
    tmFechaHoraNueva.tm_min = 0;
    tmFechaHoraNueva.tm_sec = 0;
    tmFechaHoraNueva.tm_isdst = -1;

    // Crea la Fecha con la función
    ret = mktime(&tmFechaHoraNueva);

    // Verifica que sea correcta
    if( ret == -1 )

      cout <<  "Error: No fue posible crea la fecha" << endl;

    else
    {
      strftime(strFecha, sizeof(strFecha), "%c", &tmFechaHoraNueva );
      cout << "Primer Formato : " << strFecha  << endl;

      strftime(strFecha,sizeof(strFecha),"%x - %I:%M%p", &tmFechaHoraNueva);
      cout << "Segundo Formato: " << strFecha  << endl;
    }

    // Finaliza la Aplicación
    return 0;

}
