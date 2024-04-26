#include <iostream>

using namespace std;

class Empleado {
    public:
        Empleado(string n, int e, float s);
        virtual void toString();
        virtual void plus();

        string getNombre();
        int getEdad();
        float getSalario();

        void setSalario(float s);
    private:
        string nombre;
        int edad;
        float salario;
};

class Repartidor : public Empleado {
    public:
        Repartidor(string n, int e, float s, int z);
        void toString() override;
        void plus() override;
    private:
        int zona;
};

class Comercial : public Empleado {
    public:
        Comercial(string n, int e, float s, float c);
        void toString() override;
        void plus() override;
    private:
        float comision;
};
