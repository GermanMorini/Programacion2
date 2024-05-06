#include <iostream>

using namespace std;

struct Fecha {
    int dia, mes, anio;
};

struct Datos {
    string nombre;
    char sexo;
    int dni;
    float peso, altura;
    int edad;
    Fecha nacimiento;
};

class Persona {
    public:
        Persona(string n, int ed, char s);

        float calcularIMC();

        int calcularEdad();

        bool esMayorDeEdad();

        string toString();

        string getNombre();
        char getSexo();
        int getDni();
        float getPeso();
        float getAltura();
        int getEdad();
        Fecha getNacimiento();
        
        void setNombre(string n);
        void setSexo(char s);
        void setDni(int d);
        void setPeso(float p);
        void setAltura(float a);
        void setEdad(int e);
        void setNacimiento(Fecha n);
    private:
        Datos datos;
};
