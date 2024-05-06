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
