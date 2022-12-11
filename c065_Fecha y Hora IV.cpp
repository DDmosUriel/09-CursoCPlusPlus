/*

Curso de C++
Autor: JAOR
Clase 65 - Fecha y Hora IV

Función para obtener la diferencia entre 2 fechas.
La diferencia serán devuelta en años, o en meses,
o en dias, o en horas o en minutos o en segundos.

*/

// Incluímos las librerías
#include <iostream>
#include <ctime>

// Definición de espacios de nombre
using namespace std;

// Función para obtener la diferencia entre fecha y hora
int FnIntDiffDate(tm Date1, tm Date2, char cDiffType)
{
   // Variables
   int iResult=-1;     // Devolver Resultado
   int iMesAnterior;   // Para el mes anterior

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
          // Verifico que sean iguales para retornar
          if (timeDate1==timeDate2)
             iResult = 0;
          else
          {
              // Convierte a mayúsculas cDiffType
              cDiffType = toupper(cDiffType);

              // Verifica en que tipo quiere el resultado
              switch(cDiffType)
              {
                 // Diferencia en Segundos
                 case 'S':iResult = abs(timeDate1-timeDate2);
                          break;

                 // Diferencia en Minutos
                 case 'M':iResult = abs((timeDate1-timeDate2)/60);
                          break;

                 // Diferencia en Horas
                 case 'H':iResult = abs((timeDate1-timeDate2)/60/60);
                          break;

                 // Diferencia en Dias
                 case 'D':iResult = abs((timeDate1-timeDate2)/60/60/24);
                          break;

                 // Diferencia en Meses
                 case 'T':// Obtengo la diferencia en Meses

                          // Inicializo el Resultado
                          iResult=0;

                          // Verifico cual es la fecha mayor
                          if (timeDate1 > timeDate2)
                          {
                             // Inicializo el Mes Anterior
                             iMesAnterior = Date2.tm_mon;
                             do
                             {
                                  // Incremento un Mes en la Fecha
                                  Date2.tm_mon  = Date2.tm_mon + 1;
                                  timeDate2 = mktime(&Date2);

                                  // Verifica que haya cambiado de Mes
                                  if (iMesAnterior != Date2.tm_mon && timeDate1 >= timeDate2)
                                  {
                                     // Incrementa el Contador de Meses
                                     iResult++;

                                     // Actualiza el Mes Anterior
                                     iMesAnterior = Date2.tm_mon;
                                  }
                                  if (abs(Date2.tm_mon - iMesAnterior)==2)
                                     iResult++;

                             }while ( timeDate1 > timeDate2);

                          }
                          else
                          {
                             // Inicializo el Mes Anterior
                             iMesAnterior = Date1.tm_mon;
                             do
                             {
                                  // Incremento un Mes en la Fecha
                                  Date1.tm_mon  = Date1.tm_mon + 1;
                                  timeDate1 = mktime(&Date1);
                                  // Verifica que haya cambiado de Mes
                                  if (iMesAnterior != Date1.tm_mon && timeDate2 >= timeDate1)
                                  {
                                     // Incrementa el Contador de Meses
                                     iResult++;

                                     // Actualiza el Mes Anterior
                                     iMesAnterior = Date1.tm_mon;
                                  }
                                  if (abs(Date1.tm_mon - iMesAnterior)==2)
                                     iResult++;

                             }while ( timeDate2 > timeDate1);

                          }
                          break;

                 // Diferencia en Años
                 case 'Y':// Obtengo la diferencia en Años con el algoritmo del Mes
                          // Inicializo el Resultado
                          iResult=0;

                          // Verifico cual es la fecha mayor
                          if (timeDate1 > timeDate2)
                          {
                             // Inicializo el Mes Anterior
                             iMesAnterior = Date2.tm_mon;
                             do
                             {
                                  // Incremento un Mes en la Fecha
                                  Date2.tm_mon  = Date2.tm_mon + 1;
                                  timeDate2 = mktime(&Date2);
                                  // Verifica que haya cambiado de Mes
                                  if (iMesAnterior != Date2.tm_mon && timeDate1 >= timeDate2)
                                  {
                                     // Incrementa el Contador de Meses
                                     iResult++;

                                     // Actualiza el Mes Anterior
                                     iMesAnterior = Date2.tm_mon;
                                  }
                                  if (abs(Date2.tm_mon - iMesAnterior)==2)
                                     iResult++;

                             }while ( timeDate1 > timeDate2);

                          }
                          else
                          {
                             // Inicializo el Mes Anterior
                             iMesAnterior = Date1.tm_mon;
                             do
                             {
                                  // Incremento un Mes en la Fecha
                                  Date1.tm_mon  = Date1.tm_mon + 1;
                                  timeDate1 = mktime(&Date1);
                                  // Verifica que haya cambiado de Mes
                                  if (iMesAnterior != Date1.tm_mon && timeDate2 >= timeDate1)
                                  {
                                     // Incrementa el Contador de Meses
                                     iResult++;

                                     // Actualiza el Mes Anterior
                                     iMesAnterior = Date1.tm_mon;
                                  }
                                  if (abs(Date1.tm_mon - iMesAnterior)==2)
                                     iResult++;

                             }while ( timeDate2 > timeDate1);

                          }

                          // Divido entre 12
                          iResult = iResult / 12;
                          break;
              }
          }
       }
       else
         cout << "Error: En Date 2 " << endl;
   }
   else
      cout << "Error: En Date1 " << endl;


   // Retorna la variable de Resultado
   return (iResult);

}

// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ \n";
    cout << "Clase 65 - Fecha y Hora IV \n\n";

    // Variables para Fechas Creadas
    tm tmFechaHoraInicial;      // Variable para la Fecha Hora Inicial
    tm tmFechaHoraFinal;        // Variable para la Fecha Hora Final
    char strFecha[80];          // Para la fecha en cadena

    // Creando una Fecha Hora Inicial
    tmFechaHoraInicial.tm_year = 2016 - 1900;
    tmFechaHoraInicial.tm_mon = 5 - 1;
    tmFechaHoraInicial.tm_mday = 12;
    tmFechaHoraInicial.tm_hour = 6;
    tmFechaHoraInicial.tm_min = 2;
    tmFechaHoraInicial.tm_sec = 3;

    // Creando una Fecha Hora Final
    tmFechaHoraFinal.tm_year = 2016 - 1900;
    tmFechaHoraFinal.tm_mon = 4 - 1;
    tmFechaHoraFinal.tm_mday = 23;
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


    // Obteniendo la Diferencia en Segundos
    cout << "Diferencia en Segundos:";
    cout << FnIntDiffDate(tmFechaHoraInicial,tmFechaHoraFinal,'s') << endl;
    cout << "Diferencia en Minutos :";
    cout << FnIntDiffDate(tmFechaHoraInicial,tmFechaHoraFinal,'m') << endl;
    cout << "Diferencia en Horas   :";
    cout << FnIntDiffDate(tmFechaHoraInicial,tmFechaHoraFinal,'h') << endl;
    cout << "Diferencia en Dias    :";
    cout << FnIntDiffDate(tmFechaHoraInicial,tmFechaHoraFinal,'d') << endl;
    cout << "Diferencia en Meses   :";
    cout << FnIntDiffDate(tmFechaHoraInicial,tmFechaHoraFinal,'t') << endl;
    cout << "Diferencia en Años    :";
    cout << FnIntDiffDate(tmFechaHoraInicial,tmFechaHoraFinal,'y') << endl;

    // Finaliza la Aplicación
    return 0;

}
