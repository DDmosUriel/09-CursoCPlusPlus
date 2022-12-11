/*

Curso de C++
Autor: JAOR
Clase 81 - Herencia Múltiple II

En esta clase veremos un ejemplo de Herencia Múltiple
enfocado a la administración de información.

Clases Base:
      Personas      Carreras        Areas

Clase Derivadas:
      Estudiantes : Personas, Carreras
      Empleados   : Personas, Areas

*/

// Incluímos las librerías
#include <iostream>

// Definición de espacios de nombre
using namespace std;


// Definimos una Clase para Personas
class Personas
{
    // Elementos Privados
    private:

        // Datos Generales de la Persona
        string sNombre;
        string sApellido;
        string sGenero;
        int    iEdad;
        float  fPeso;
        float  fEstatura;

    // Miembros Públicos
    public:

        // Setter's
        // Establece el Nombre
        void setNombre(string pNombre)
        {
            // Establece el Nombre
            sNombre = pNombre;
        }

        // Establece el Apellido
        void setApellido(string pApellido)
        {
            // Establece el Nombre
            sApellido = pApellido;
        }

        // Establece el Género
        void setGenero(string pGenero)
        {
            // Establece el Nombre
            sGenero = pGenero;
        }

        // Establece la Edad
        void setEdad(int pEdad)
        {
            // Establece el Nombre
            iEdad = pEdad;
        }

        // Establece el Peso
        void setPeso(float pPeso)
        {
            // Establece el Nombre
            fPeso = pPeso;
        }

        // Establece la Estatura
        void setEstatura(float pEstatura)
        {
            // Establece el Nombre
            fEstatura = pEstatura;
        }

        // Getter's
        // Obtiene el Nombre
        string getNombre()
        {
            // Retorna el Nombre
            return sNombre;
        }

        // Obtiene el Apellido
        string getApellido()
        {
            // Retorna el Nombre
            return sApellido;
        }

        // Obtiene el Genero
        string getGenero()
        {
            // Retorna el Nombre
            return sGenero;
        }

        // Obtiena la Edad
        int getEdad()
        {
            // Retorna el Nombre
            return iEdad;
        }

        // Obtiene el Peso
        float getPeso()
        {
            // Retorna el Nombre
            return fPeso;
        }

        // Obtiene la Estatura
        float getEstatura()
        {
            // Retorna el Nombre
            return fEstatura;
        }

        // Despliega la Información de la Persona
        void PersonaInfo()
        {
           // Desplegamos la Información de la Persona
           cout << "Nombre   : " << getNombre()   << endl;
           cout << "Apellido : " << sApellido     << endl;
           cout << "Genero   : " << sGenero       << endl;
           cout << "Edad     : " << iEdad         << endl;
           cout << "Peso     : " << fPeso         << endl;
           cout << "Estatura : " << fEstatura     << endl;
        }

};


// Define una Clase para Carreras
class Carreras
{
    // Elementos Privados
    private:

        // Carrera
        string sCarrera;


    // Elementos Públicos
    public:

        // Establecer la Carrera
        void setCarrera(string pCarrera)
        {
            // Establece la Carrera
            sCarrera = pCarrera;
        }

        // Obtener la Carrera
        string getCarrera()
        {

            // Obtiene la Carrera
            return sCarrera;

        }

};

// Areas de Trabajo
class Areas
{

    // Elementos Privados
    private:

        // Carrera
        string sArea;


    // Elementos Públicos
    public:

        // Establecer el área
        void setArea(string pArea)
        {
            // Establece la Carrera
            sArea = pArea;
        }

        // Obtener la Carrera
        string getArea()
        {

            // Obtiene la Carrera
            return sArea;

        }
};

// Clase para estudiantes
class Estudiantes: public Personas, public Carreras
{
    // Elementos Privados
    private:

        int    iSemestre;
        string sTurno;

    public:

        // Establece el Semestre
        void setSemestre(int pSemestre)
        {
           // Semestre
           iSemestre = pSemestre;
        }

        // Establece el Turno
        void setTurno(string pTurno)
        {
           // Turno
           sTurno = pTurno;
        }


        // Obtiene el Semestre
        int getSemestre()
        {
           // Obtiene el Semestre
           return iSemestre;

        }

        // Obtiene el Turno
        string getTurno()
        {
           // Obtiene el Semestre
           return sTurno;
        }


        // Despliega la Información del Estudiante
        void EstudianteInfo()
        {
            // Llama al Método Heredado
            PersonaInfo();
            cout << "Carrera  : " << getCarrera() << endl;
            cout << "Semestre : " << iSemestre << endl;
            cout << "Turno    : " << sTurno    << endl;
        }
};

// Clase para Empleados
class Empleados: public Personas, public Areas
{

    // Elementos Privados
    private:

        float  fSueldo;
        string sFechaIngreso;

    public:

        // Establece el Semestre
        void setSueldo(float pSueldo)
        {
           // Sueldo
           fSueldo = pSueldo;
        }

        // Establece Fecha Ingreso
        void setFechaIngreso(string pFechaIngreso)
        {
           // Fecha Ingreso
           sFechaIngreso = pFechaIngreso;
        }

        // Obtiene el Sueldo
        int getSueldo()
        {
           // Obtiene el Sueldo
           return fSueldo;

        }

        // Obtiene Fecha Ingreso
        string getFechaIngreso()
        {
           // Obtiene la Fecha de Ingreso
           return sFechaIngreso;
        }


        // Despliega la Información del Empleado
        void EmpleadoInfo()
        {
            // Llama al Método Heredado
            PersonaInfo();
            cout << "Área     : " << getArea()      << endl;
            cout << "Sueldo   : " << fSueldo        << endl;
            cout << "Ingreso  : " << sFechaIngreso  << endl;
        }
};


// Declaramos la función main
int main ()
{

    // Mandamos un mensaje a la Pantalla
    cout << "Curso de C++ "              << endl;
    cout << "Clase 81 - Clases Herencia Multiple II" << endl << endl;

    // Definimos un Estudiante
    Estudiantes xEstudiante;

    // Establecemos la información del Estudiante
    xEstudiante.setNombre("Juan");
    xEstudiante.setApellido("Pérez");
    xEstudiante.setGenero("Masculino");
    xEstudiante.setEdad(22);
    xEstudiante.setPeso(85.50);
    xEstudiante.setEstatura(1.75);
    xEstudiante.setCarrera("Informática");
    xEstudiante.setSemestre(1);
    xEstudiante.setTurno("Matutino");


    // Llamo a la función que despliega la Información
    cout << "Información Personal del Estudiante " << endl;
    xEstudiante.PersonaInfo();
    cout << endl;

    // Despliego su información de Estudiante
    cout << "Información Completa del Estudiante " << endl;
    xEstudiante.EstudianteInfo();
    cout << endl;

    // Creamos un Empleado
    Empleados xEmpleado;

    // Establecemos la información del Empleado
    xEmpleado.setNombre("María");
    xEmpleado.setApellido("Morales");
    xEmpleado.setGenero("Femenino");
    xEmpleado.setEdad(42);
    xEmpleado.setPeso(60.50);
    xEmpleado.setEstatura(1.60);
    xEmpleado.setArea("Docencia");
    xEmpleado.setSueldo(1200);
    xEmpleado.setFechaIngreso("14-09-2000");

    // Llamo a la función que despliega la Información
    cout << "Información Personal del Empleado " << endl;
    xEmpleado.PersonaInfo();
    cout << endl;

    // Despliego su información de Empleado
    cout << "Información Completa del Empleado " << endl;
    xEmpleado.EmpleadoInfo();
    cout << endl;


    // Finaliza la Aplicación
    return 0;

}
