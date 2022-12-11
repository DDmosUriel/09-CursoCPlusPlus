/*

Curso de C++
Autor: JAOR
Clase 01 - Introducción

Características de C++

- Es un lenguaje de Medio Nivel, ya que permite escribir código
  a nivel de ensamblador.
- Multiplataforma: Windows, Mac, Unix

Diferencia entre C y C++
- C++ es un Lenguaje de Programación que maneja POO.
- C++ es un avance de C y puede realizar todo lo que se hace en C
- Las extensiones en C++ son .cpp y .hpp

Verificar instalación escribe el comando
g++ -v

Las Palabras reservadas de C++

asm 	        else 	    new 	            this
auto 	        enum 	    operator 	        throw
bool 	        explicit 	private 	        true
break 	        export 	    protected 	        try
case 	        extern 	    public 	            typedef
catch 	        false 	    register 	        typeid
char 	        float 	    reinterpret_cast 	typename
class 	        for 	    return 	            union
const 	        friend 	    short 	            unsigned
const_cast 	    goto 	    signed 	            using
continue 	    if 	        sizeof 	            virtual
default 	    inline 	    static 	            void
delete 	        int 	    static_cast 	    volatile
do 	            long 	    struct 	            wchar_t
double 	        mutable 	switch 	            while
dynamic_cast 	namespace 	template

La sintaxis del Lenguaje sigue siendo la misma que en C.
- Finlizar cada linea con ";".
- Diferencía de Mayúsculas y Minúsculas
- Los comentarios se escriben de la misma forma
- Los identificadores para nombrar a las variables, funciones
  y similares; siguen las mismas reglas que en C.

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
   cout << "Clase 01 - Introducción \n";

   /* Se finaliza la aplicación */
   return 0;
}
