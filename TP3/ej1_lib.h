class Fecha {
    public:
        Fecha(int dia=1, int mes=1, int anio=1900);

        void operator++();
        void operator--();

        void operator+(int d);
        void operator-(int d);

        char* toString();
    private:
        int dia, mes, anio;

        int dias_en_un_mes(int mes);

        bool validar_fecha(int *dia, int *mes);

        bool es_bisiesto(int a);

        void sumar_dias(int d);

        void restar_dias(int d);
};
