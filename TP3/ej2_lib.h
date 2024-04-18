class Racional {
    public:
        Racional(int n, int d);
        
        char* toString();

        Racional operator+(Racional r);
        Racional operator-(Racional r);

        void operator++();
        void operator--();
        
        void operator+=(int n);
        void operator-=(int n);
    private:
        int numerador, denominador;

        int calcularMCD(int a, int b);

        int calcularMCM(int a, int b);
};
