/*

Curso de C++
Autor: JAOR
Clase 16 - Operadores Precedencia

Las expresiones en un lenguaje de programación,
se ejecutan de izquierda a derecha; esto quiere
decir que una expresión numérica o de cualquier
otro tipo, debe de irse ejecutando o calculando
su resultado, evaluando de izquierda a derecha.

Existen operadores que tienen mas precedencia que
otros, es decir que se deben de ejecutar primero
aunque se encuentren despues o a su derecha.

Ejemplo:

5 + 6 * 8 * 2 + 10
6*8*2+5+10 =
 48*2=96+5=101+10=111

Si evaluáramos esta expresión, sin considerar la
precedencia de operadores, primero se realizaría
la suma y despues la multiplicación; dando un
resultado de 5+6=11*8 = 88; el cual sería erroneo;
ya que el operador de multiplicación "*" tiene
mayor prioridad que la suma "+"; por lo que primero
debe de ejecutarse 6*8=48 y despues sumar 5 + 48
dando como resultado 53.

La precedencia de los operadores se muestra en la
siguiente tabla. Los operadores que están arriba
tienen mayor prioridad o precedencia que los que
están debajo.

Tipo            Operador
Postfijo        () [] -> . ++ - -
Unario          + - ! ~ ++ - - (type)* & sizeof
Multiplicativo  * / %
Adición         + -
Desplazamiento  << >>
Relacional      <<= >>=
Igualdad        == !=
De Bit AND      &
De Bit XOR      ^
De Bit OR       |
Logical AND     &&
Logical OR      ||
Condicional     ?:
Asignación      = += -= *= /= %=>>= <<= &= ^= |=
Coma            ,


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
    cout << "Clase 16 - Operadores Precedencia \n\n";

    cout <<"Valor de   5 + 6  * 8 :" <<  5 + 6  * 8 << endl ;
    cout <<"Valor de  (5 + 6) * 8 :" << (5 + 6) * 8 << endl ;
    cout << endl;

    cout <<"Valor de   5 + 6  * -8 :" <<  5 + 6  * -8 << endl ;
    cout <<"Valor de  (5 + 6) * -8 :" << (5 + 6) * -8 << endl ;
    cout << endl;

    cout <<"Valor de   5 + 6  *  8 << 2 : " <<  (5 + 6 *  8 << 2) << endl ;
    // 8 * 6 = 48 + 5 = 53 * 2 = 106 * 2 = 212
    cout <<"Valor de   5 + 6  * (8 << 2) :" <<  (5 + 6 * (8 << 2)) << endl ;
    // 8 * 2 = 16 * 2 = 32 * 6 = 192 + 5 = 197
    cout << endl;



    /* Se finaliza la aplicación */
    return 0;
}
