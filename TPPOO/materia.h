#include <iostream>

using namespace std;

class Materia {
    public:
        Materia(int c, string n);

        void setNota(int n);
    private:
        int codigo, nota;
        string nombre;
};
