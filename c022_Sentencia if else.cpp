/*

Curso de C++
Autor: JAOR
Clase 22 - Sentencia if else

La Sentencia "if" vista en la clase anterior,
tiene una variante y es agregar la palabra
reservada "else", la cual es opcional, ya que
como hemos visto no es necesario utilizarla.

La instrucción else, nos permite indicar que
instrucciones se deben ejecutar, en caso de
que la expresión utilizada en la sentencia
if devuelva false.

La sintaxis de uso de la sentencia if else es:

if (expresión)
{
   // Si es true expresión
   instruccion(es);
}
else
{
   // Si es false expresión
   instruccion(es);
}

Como observamos, es fácil distinguir
que existe un bloque de instrucciones
que se ejecutarán si expresión devuelve
un valor verdadero; y si devuelve un
valor falso.

Ejemplo:

if (x % 2 == 0)
   cout << x << "es un número par";
else
   cout << x << "es un número impar";

La anterior instrucción evalúa el valor
de x y si el residuo al dividir por 2, es 0;
entonces se despliega el mensaje de que
es un número par; y si no despliega que es impar.

*/

// Inclusión de Librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;

// Función Principal
int main ()
{
    // Se despliega el Nombre del Curso y la Clase
    cout << "Curso de C++ \n";
    cout << "Clase 22 - Sentencia if else \n\n";

    // Mensaje de Evaluación
    cout << "Evaluando sentencia if else\n";

    // Declaración de variable
    int iNumero=45;
    int iNumero2=45;

    // Verifica si es par
    if (iNumero % 2==0)

       cout << iNumero << " es un número par";

    else

       cout << iNumero << " es un número impar";
    cout << endl;

    // Verifica si es múltiplo de3
    if (iNumero > iNumero2)
       cout << iNumero << " es mayor que " << iNumero2;
    else
       if (iNumero == iNumero2)
          cout << iNumero << " es igual que " << iNumero2;
       else
          cout << iNumero << " es menor que " << iNumero2;

    cout << endl;

    /* Se finaliza la aplicación */
    return 0;
}

