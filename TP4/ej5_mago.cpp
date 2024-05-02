#include <iostream>
#include "ej5_lib.h"

using namespace std;

Mago::Mago(string n, string r, int f, int in, int vm) : Personaje(n,r,f,in,vm) {
    cantidad_hech = 0;
}

bool Mago::aprendeHechizo(string h) {
    if (cantidad_hech == 4) return false;
    hechizos[cantidad_hech] = h;
    return true;
}

bool Mago::lanzaHechizo(Personaje p) {
    if (cantidad_hech == 0) return false;

    p.recibirDanio(10);

    

    
}

void Mago::toString() {
    cout << "Datos del mago:" << endl;
    Personaje::toString();
    cout << "Hechizos:" << endl;
    for (int i = 0; i < cantidad_hech; i++) {
        cout << "\t" << i << ". " << hechizos[i] << endl;
    }
}
