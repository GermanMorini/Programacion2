class Cuenta {
    public:
        char* getTitular();
        void setTitular(char* t);

        double getCantidad();
        void setCantidad(double c);

        void ingresar(double c);
        void retirar(double c);
    private:
        char* titular;
        double cantidad;
};