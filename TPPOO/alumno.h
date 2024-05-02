#include "persona.h"

class Alumno : public Persona {
    public:
        Alumno(string a, string *n, int d, string m, string c, int e);

        string getCarrera();
        int getEdad();

        void setCarrera(string c);
        void setEdad(int e);
    private:
        string carrera;
        int edad;
};
