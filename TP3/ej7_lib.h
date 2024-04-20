class Cuenta {
    public:
        Cuenta(int n, float in);

        int getN_cuenta();
        float getSaldo();
        float getInteres();

        bool setN_cuenta(int n);
        bool setSaldo(float s);
        bool setInteres(float in);

        bool depositar(float d);
        bool extraer(float d);

        char* toString();
    private:
        int n_cuenta;
        float saldo;
        float interes;
};
