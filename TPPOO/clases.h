#include <iostream>

using namespace std;

class Persona {
    public:
        Persona(string a, string n, int d, string m);

        string getApellido();
        string getNombre();
        int getDNI();
        string getMail();

        void setApellido(string a);
        void setNombre(string n);
        void setDNI(int d);
        void setMail(string m);

        virtual string toString();
    private:
        string nombre, apellido, mail;
        int dni;
};

class Materia {
    public:
        Materia();
        Materia(int c, string n);

        void setNota(int n);

        string toString();
    private:
        int codigo, nota;
        string nombre;
};

class Docente : public Persona {
    public:
        Docente();
        Docente(string a, string n, int d, string m, string t);

        string getTitulo();
        // Materia getMateria();

        void setTitulo(string tit);
        // void setMateria(Materia mat);

        string toString() override;
    private:
        string titulo;
        // Materia materia;
};

class Alumno : public Persona {
    public:
        Alumno();
        Alumno(string a, string n, int d, string m, string c, int e);

        string getCarrera();
        int getEdad();

        void setCarrera(string c);
        void setEdad(int e);

        string toString() override;
    private:
        string carrera;
        int edad;
};
