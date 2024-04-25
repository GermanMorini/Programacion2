#include <iostream>

class Enteros {
    public:
        Enteros(int m);
        Enteros(int m, int n, int elementos[]);

        bool Agregar(int n);
        bool Eliminar(int n);
        void Mostrar();

        Enteros operator+(Enteros e);
        Enteros operator*(Enteros e);
        Enteros operator-(Enteros e);
    private:
        int* valores;
        int max, N;
        bool presente(int n);
};