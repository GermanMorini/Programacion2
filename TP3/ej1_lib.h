class Fecha {
    public:
        Fecha();
        Fecha(int dia, int mes, int anio);

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
