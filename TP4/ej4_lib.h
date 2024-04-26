#include <iostream>

using namespace std;

class Persona {
    public:
        Persona(string n, int d, char ec);

        string getNombre();
        string getApellido();
        int getDNI();
        char getEstadoCivil();

        bool setEstadoCivil(char ec);

        virtual void toString();
    private:
        string nombre, apellido;
        int dni;
        char estado_civil;
};

class Empleado : public Persona {
    public:
        Empleado(string n, int d, char ec, int ai, int no);

        int getAnioIncorporacion();
        int getNroOficina();

        bool setNroOficina(int nro);

        void toString() override;
    private:
        int anio_incorporacion;
        int nro_oficina;
};

class Estudiante : Persona {
    public:
        Estudiante(string n, int d, char ec, string c);

        string getCurso();

        bool setCurso(string c);

        void toString() override;
    private:
        string curso;
};

class Profesor : Empleado {
    public:
        Profesor(string n, int d, char ec, int ai, int no, string dpto);

        string getDpto();

        bool setDpto(string dto);

        void toString() override;
    private:
        string dpto;
};

class Personal_servicio : Empleado {
    public:
        Personal_servicio(string n, int d, char ec, int ai, int no, string s);

        string getSeccion();

        bool setSeccion(string s);

        void toString() override;
    private:
        string seccion;
};
