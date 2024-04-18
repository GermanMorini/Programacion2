class Cronometro {
    public:
        Cronometro();

        int getHoras();
        int getMinutos();
        int getSegundos();

        char* toString();

        void reset();

        void operator++();
    private:
        int h, m, s;
};
