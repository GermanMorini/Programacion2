#include "persona.h"

struct Materia {
    int codigo;
    string nombre;
};

class Docente : public Persona {
    public:
        Docente();
        Docente(string a, string n, int d, string m, string t);

        Materia getMateria();

        void anotarMateria(Materia m);

        string toString() override;
    private:
        string titulo;
        Materia materia; // TODO: ver como es lo del inciso de la materia
};
