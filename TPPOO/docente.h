#include "persona.h"

struct Materia {
    int codigo;
    string nombre;
};

class Docente : public Persona {
    public:
        Docente(string a, string *n, int d, string m, string t);

        Materia getMateria();

        void anotarMateria(Materia m);
    private:
        string titulo;
        Materia materia;
};
