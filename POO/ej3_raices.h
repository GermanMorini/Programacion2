class Raices {
    public:
        Raices(float a, float b, float c);

        float* obtenerRaices();

        float obtenerRaiz();

        double getDiscriminante();

        bool tieneRaices();

        bool tieneRaiz();

        void calcular();
    private:
        float a, b, c;
};
