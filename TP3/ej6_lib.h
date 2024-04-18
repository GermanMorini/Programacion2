class Password {
    public:
        Password();
        Password(int l);

        void generarPassword();

        bool esFuerte();

        void print();

        void setLongitud(int l);

    private:
        int longitud = 8;
        char* contrasenia;

        char digitoRandom();
        bool validar();
};
