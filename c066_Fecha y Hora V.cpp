/*

Curso de C++
Autor: JAOR
Clase 66 - Fecha y Hora V

Algoritmo y programa para obtener la diferencia
entre 2 fechas; indicando Años, Meses, Dias, Horas,
Minutos y Segundos.

Este algoritmo sigue la lógica de una resta numérica
tradicional, pero en este caso aplicada a 2 valores
de tiempo.

Principal Regla.
La Resta deberá de hacerse siempre considerando que a
una Fecha Posterior, se le reste una fecha Anterior; y
realizando la resta de derecha a izquierda.

Primer Ejemplo.

     Año          Mes          Dia         Hor    Min    Seg
    --------------------------------------------------------
    2016           05           12         00      00     00
   -2015           04           10         00      00     00
   ---------------------------------------------------------
    0001           01           02

Segundo Ejemplo
    Año           Mes          Dia         Hor    Min    Seg
    --------------------------------------------------------
    2016           05-1         12          00     00     00
   -2015           04           23          00     00     00
   ---------------------------------------------------------
    0001           00           12  Mas los 12 del Mes de Mayo
                                 7  Se toman los 7 dias que faltan de Abril
                                --
                                19

Tercer Ejemplo
    Año           Mes          Dia         Hor    Min    Seg
    --------------------------------------------------------
    2017-1         05-1         25          00     00     00
   -2016           07           25          00     00     00
   ---------------------------------------------------------
      00           05 del 2016  06 Los 6 dias restantes de Julio
                   04-del 2017  20 Los 20 dias de Mayo
                   --           --
                   09           26


Cuarto Ejemplo
    Año           Mes          Dia         Hor    Min    Seg
    --------------------------------------------------------
    2016           05-1         12-1        06-1   02-1   03
   -2015           04           23          09     30     15
   ---------------------------------------------------------
                   04           11          05     30     45
                    4           07          15      1     03
   ---------------------------------------------------------
       1           00           18          20     31     48

*/

// Incluímos las librerías
#include <iostream>
#include <ctime>

// Define constantes para posiciones en el vector de Diferencia
#define IDX_YEAR   0
#define IDX_MONTH  1
#define IDX_DAY    2
#define IDX_HOUR   3
#define IDX_MINUTE 4
#define IDX_SECOND 5


// Definición de espacios de nombre
using namespace std;


// Función para verificar año bisiesto (29 Dias Febrero)
int FnIntAnioBisiesto(int iAnio)
{
    // Verifica las condiciones
    if(iAnio % 4 == 0 && (iAnio % 100 != 0 || iAnio % 400 == 0))
      return true;
    else
      return false;
}

// Función que devuelve los dias de diferencia hasta el fin de Mes
int FnIntDiasRestantesMes(int iAnio,int iMes, int iDia)
{

    // Variable para el Resultado
    int iResult=-1;

    // Verifica los meses que son de 31
    switch(iMes)
    {
       case  1:// Enero
       case  3:// Marzo
       case  5:// Mayo
       case  7:// Julio
       case  8:// Agosto
       case 10:// Octubre
       case 12:// Diciembre
               // Obtiene la diferecia de acuerdo al día y mes
               iResult = 31 - iDia;
               break;

       case  4:// Abril
       case  6:// Junio
       case  9:// Septiembre
       case 11:// Noviembre
               // Obtiene la diferecia de acuerdo al día y mes
               iResult = 30 - iDia;
               break;

       case  2:// Febrero
               // Si es bisiesto tiene 29
               if (FnIntAnioBisiesto(iAnio))
                  iResult = 29 - iDia;
               else
                  iResult = 28 - iDia;
    }

    // Retorno iResult
    return iResult;

}

// Función para obtener la diferencia entre 2 fechas
// indicando Años, Meses, Dias, Horas, Minutos y Segundos
int FnIntDiffDate(tm Date1, tm Date2, int arrDiff[6])
{

    // Variable de Resultado
    int iResult=true;

    // Variables para convertir y verificar fecha
    time_t  timeDate1, timeDate2;

    // Obteniendo Segundos de Primera Fecha y Verificando
    timeDate1 = mktime(&Date1);

    // Verifica la primera fecha
    if (timeDate1!=-1)
    {
       // Obteniendo Segundos de la Segunda Fecha y Verificando
       timeDate2 = mktime(&Date2);

       // Verifica la segunda fecha
       if (timeDate2!=-1)
       {
          // Desplegando Mensaje de Análisis
          cout << endl << "Analizando Diferencia entre Fechas ..." << endl;

          // Verifica que sean iguales
          if (timeDate1==timeDate2)
          {
             cout << "Las Fechas son idénticas; no hay diferencia " << endl;
             // Coloca todos los valores a 0
             arrDiff[IDX_YEAR]   = 0;
             arrDiff[IDX_MONTH]  = 0;
             arrDiff[IDX_DAY]    = 0;
             arrDiff[IDX_HOUR]   = 0;
             arrDiff[IDX_MINUTE] = 0;
             arrDiff[IDX_SECOND] = 0;
          }
          else
          {
             // Verifica cual es la fecha Mayor para procesar de acuerdo a ella
             if (timeDate2>timeDate1)
             {
                // Intercambiamos los valores de Date1 y Date2
                // Usamos el arreglo como auxiliar
                // Pasamos al arreglo Date1
                arrDiff[IDX_YEAR]   = Date1.tm_year;
                arrDiff[IDX_MONTH]  = Date1.tm_mon;
                arrDiff[IDX_DAY]    = Date1.tm_mday;
                arrDiff[IDX_HOUR]   = Date1.tm_hour;
                arrDiff[IDX_MINUTE] = Date1.tm_min;
                arrDiff[IDX_SECOND] = Date1.tm_sec;

                // Pasamos a Date1 los valores de Date2
                Date1.tm_year = Date2.tm_year;
                Date1.tm_mon  = Date2.tm_mon;
                Date1.tm_mday = Date2.tm_mday;
                Date1.tm_hour = Date2.tm_hour;
                Date1.tm_min  = Date2.tm_min;
                Date1.tm_sec  = Date2.tm_sec;

                // Pasamos a Date2 los valores de Date1
                Date2.tm_year = arrDiff[IDX_YEAR];
                Date2.tm_mon  = arrDiff[IDX_MONTH];
                Date2.tm_mday = arrDiff[IDX_DAY];
                Date2.tm_hour = arrDiff[IDX_HOUR];
                Date2.tm_min  = arrDiff[IDX_MINUTE];
                Date2.tm_sec  = arrDiff[IDX_SECOND];

             }

             // Proceso con fecha mayor Date1

             // Evaluamos segundos
             if (Date1.tm_sec >= Date2.tm_sec)
                   // Se resta normalmente
                   arrDiff[IDX_SECOND]= Date1.tm_sec - Date2.tm_sec;
             else
             {
                   // Se toman los segundos restantes de la fecha menor mas los de fecha mayor
                   arrDiff[IDX_SECOND]= 60 - Date2.tm_sec + Date1.tm_sec;

                   // Se resta un minuto de la Fecha Mayor
                   Date1.tm_min--;
                }

                // Desplegando Segundos
                cout << "Segundos : " << arrDiff[IDX_SECOND] << endl;

                // Evaluamos Minutos
                if (Date1.tm_min >= Date2.tm_min)
                   // Se resta normalmente
                   arrDiff[IDX_MINUTE]= Date1.tm_min - Date2.tm_min;
                else
                {
                   // Se toman los minutos restantes de la fecha menor mas los de la fecha mayor
                   arrDiff[IDX_MINUTE]= 60 - Date2.tm_min + Date1.tm_min;

                   // Se resta una hora de la Fecha Mayor
                   Date1.tm_hour--;
                }
                // Desplegando Minutos
                cout << "Minutos  : " << arrDiff[IDX_MINUTE] << endl;

                // Evaluamos Horas
                if (Date1.tm_hour >= Date2.tm_hour)
                   // Se resta normalmente
                   arrDiff[IDX_HOUR]= Date1.tm_hour - Date2.tm_hour;
                else
                {
                   // Se toman los minutos restantes de la fecha menor mas los de la fecha mayor
                   arrDiff[IDX_HOUR]= 24 - Date2.tm_hour + Date1.tm_hour;

                   // Se resta un día de la Fecha Mayor
                   Date1.tm_mday--;
                }
                // Desplegando Horas
                cout << "Horas    : " << arrDiff[IDX_HOUR] << endl;


                // Evaluamos Dias
                if (Date1.tm_mday >= Date2.tm_mday)
                   // Se resta normalmente
                   arrDiff[IDX_DAY]= Date1.tm_mday - Date2.tm_mday;
                else
                {
                   // Se toman los dias restantes de la fecha menor mas los de la fecha mayor
                   arrDiff[IDX_DAY]= FnIntDiasRestantesMes(Date2.tm_year+1900,
                                                           Date2.tm_mon+1,
                                                           Date2.tm_mday) + Date1.tm_mday;

                   // Se resta un día de la Fecha Mayor
                   Date1.tm_mon--;
                }
                // Desplegando Dias
                cout << "Dias     : " << arrDiff[IDX_DAY] << endl;


                // Evaluamos Meses
                if (Date1.tm_mon >= Date2.tm_mon)
                   // Se resta normalmente
                   arrDiff[IDX_MONTH]= Date1.tm_mon - Date2.tm_mon;
                else
                {
                   // Se toman los meses restantes de la fecha menor mas los de la fecha mayor
                   arrDiff[IDX_MONTH]= 12 - (Date2.tm_mon + 1) + (Date1.tm_mon + 1);

                   // Se resta un día de la Fecha Mayor
                   Date1.tm_year--;
                }

                // Desplegando Meses
                cout << "Meses    : " << arrDiff[IDX_MONTH] << endl;


                // Evalua los años
                arrDiff[IDX_YEAR] = Date1.tm_year - Date2.tm_year;

                // Desplegando Años
                cout << "Años     : " << arrDiff[IDX_YEAR] << endl << endl;


          }
       }
       else
       {
         cout << "Error: En Date 2 " << endl;
         iResult=false;
       }
   }
   else
   {
      cout << "Error: En Date1 " << endl;
      iResult=false;
   }

   // Retorna resultado
   return iResult;
}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 66 - Fecha y Hora V " << endl;

        // Variables para Fechas Creadas
    tm tmFechaHoraInicial;      // Variable para la Fecha Hora Inicial
    tm tmFechaHoraFinal;        // Variable para la Fecha Hora Final
    char strFecha[80];          // Para la fecha en cadena
    int arrIntDiferencia[6];    // Arreglo para las diferencias

    // Creando una Fecha Hora Inicial
    tmFechaHoraInicial.tm_year = 2016 - 1900;
    tmFechaHoraInicial.tm_mon = 5 - 1;
    tmFechaHoraInicial.tm_mday = 12;
    tmFechaHoraInicial.tm_hour = 6;
    tmFechaHoraInicial.tm_min = 2;
    tmFechaHoraInicial.tm_sec = 3;

    // Creando una Fecha Hora Final
    tmFechaHoraFinal.tm_year = 2016 - 1900;
    tmFechaHoraFinal.tm_mon = 5 - 1;
    tmFechaHoraFinal.tm_mday = 11;
    tmFechaHoraFinal.tm_hour = 9;
    tmFechaHoraFinal.tm_min = 30;
    tmFechaHoraFinal.tm_sec = 15;

    // Obtengo las 2 fechas en Cadena
    mktime(&tmFechaHoraInicial);
    strftime(strFecha, sizeof(strFecha), "%c", &tmFechaHoraInicial);
    cout << "La Fecha Inicial Creada : " << strFecha  << endl;
    mktime(&tmFechaHoraFinal);
    strftime(strFecha, sizeof(strFecha), "%c", &tmFechaHoraFinal);
    cout << "La Fecha Final Creada   : " << strFecha  << endl;


    // Llama a la función
    FnIntDiffDate(tmFechaHoraFinal,tmFechaHoraFinal,arrIntDiferencia);

    // Despliega la Diferencia
    cout << "La Diferencia entre las fechas es:"      << endl;
    cout << "Años     : " << arrIntDiferencia[IDX_YEAR] << endl;
    cout << "Meses    : " << arrIntDiferencia[IDX_MONTH] << endl;
    cout << "Días     : " << arrIntDiferencia[IDX_DAY] << endl;
    cout << "Horas    : " << arrIntDiferencia[IDX_HOUR] << endl;
    cout << "Minutos  : " << arrIntDiferencia[IDX_MINUTE] << endl;
    cout << "Segundos : " << arrIntDiferencia[IDX_SECOND] << endl;

    // Finaliza la Aplicación
    return 0;

}
