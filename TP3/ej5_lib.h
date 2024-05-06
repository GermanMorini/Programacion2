class Punto {
    public:
        Punto(float x, float y);

        void operator++();
        void operator--();

        Punto operator+(Punto p);
        Punto operator-(Punto p);
        
        Punto operator+(int n);
        Punto operator-(int n);

        char* coorPolares();

        char* toString();
    private:
        float x, y;
};
