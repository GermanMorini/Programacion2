class Figura {
    public:        
        Figura(){}
        virtual float getArea(){return 0;}
};

class Figura_2D : public Figura {
    public:
        Figura_2D(){}
        virtual float getPerimetro(){return 0;}
};

class Figura_3D : public Figura {
    public:
        Figura_3D(){}
        virtual float getVolumen(){return 0;}
};



// FIGURAS 2D
class Circulo : public Figura_2D {
    private:
        float radio;
    public:
        Circulo(float _radio);
        
        float getPerimetro() override;
        float getArea() override;
};

class Cuadrado : public Figura_2D {
    private:
        float lado;
    public:
        Cuadrado(float _lado);
        
        float getPerimetro() override;
        float getArea() override;
};

class Rectangulo : public Figura_2D {
    private:
        float lado1, lado2;
    public:
        Rectangulo(float _lado1, float _lado2);
        
        float getPerimetro() override;
        float getArea() override;
};



// FIGURAS 3D
class Esfera : public Figura_3D {
    private:
        float radio;
    public:
        Esfera(float _radio);
        
        
        float getArea() override;
        float getVolumen() override;
};

class Cubo : public Figura_3D {
    private:
        float lado;
    public:
        Cubo(float _lado);
        
        float getArea() override;
        float getVolumen() override;
};

class Cilindro : public Figura_3D {
    private:
        float altura, radio;
    public:
        Cilindro(float _altura, float _radio);
        
        float getArea() override;
        float getVolumen() override;
};
