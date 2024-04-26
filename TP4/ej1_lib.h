#include <cmath>
class FIG_GEO {
    public:
        virtual float perimetro();
        virtual float area();
    private:
        float X, Y;
};

class Punto : public FIG_GEO {
    public:
        float perimetro() override;

        float area() override;
};

class Circulo : public FIG_GEO {
    public:
        float perimetro() override;

        float area() override;
    private:
        float radio;
};

class Poligono : public FIG_GEO {
    public:
        float perimetro() override;

        float area() override;
    private:
        float lado, apot; // apotema
        int N; // cantidad de lados
};
