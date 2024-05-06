#include <iostream>

class Password {
    public:
        Password(int l=8);

        void generarPassword();

        bool esFuerte();

        void print();

        void setLongitud(int l);

    private:
        int longitud;
        char* contrasenia;
        std::string DIGITOS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

        char digitoRandom();
        bool validar();
};
