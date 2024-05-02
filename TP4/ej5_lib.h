#include <iostream>
#include <string>

using namespace std;

class Personaje {
    public:
        Personaje(string n, string r, int f, int in, int vm);

        string getNombre();
        string getRaza();
        int getFuerza();
        int getInteligencia();

        virtual bool recibirDanio(int d);
        virtual void toString();
    // protected:
    //     bool sanar(int v);
    private:
        string nombre, raza;
        int fuerza, inteligencia, vida_max, vida;
};

class Mago : public Personaje {
    public:
        Mago(string n, string r, int f, int in, int vm);

        bool aprendeHechizo(string h);
        bool lanzaHechizo(Personaje p);

        void toString() override;
    private:
        string hechizos[4];
        int cantidad_hech;
};

class Clerigo : public Personaje {
    public:
        Clerigo(string n, string r, int f, int in, int vm, string d);

        bool curar(Personaje p);

        void toString() override;
    private:
        string dios;
};
