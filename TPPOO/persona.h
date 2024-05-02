#include <iostream>

using namespace std;

class Persona {
    public:
        Persona(string a, string *n, int d, string m);

        string getApellido();
        string* getNombres();
        int getDNI();
        string getMail();

        void setApellido(string a);
        void setNombres(string *n);
        void setDNI(int d);
        void setMail(string m);
    private:
        string apellido, mail;
        string* nombres;
        int dni;
};
