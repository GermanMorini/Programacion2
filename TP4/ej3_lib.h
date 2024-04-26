#include <iostream>

class Producto {
    public:
        Producto(std::string n, float p);
        virtual float calcularMonto(int cantidad);

        std::string getNombre();
        float getPrecio();
    private:
        std::string nombre;
        float precio;
};

class Perecedero : public Producto {
    public:
        Perecedero(std::string n, float p, int d);
        float calcularMonto(int cantidad) override;
    private:
        int dias_a_caducar;
};

class No_perecedero : public Producto {
    public:
        No_perecedero(std::string n, float p, char t);
        float calcularMonto(int cantidad) override;
    private:
        char tipo;
};
