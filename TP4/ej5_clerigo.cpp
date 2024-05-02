#include "ej5_lib.h"

using namespace std;

Clerigo::Clerigo(string n, string r, int f, int in, int vm, string d) : Personaje(n,r,f,in,vm) {
    dios = d;
}

bool Clerigo::curar(Personaje p) {
    // TODO: no se como hacerlo
    // p.
    return false;
}

void Clerigo::toString() {
    cout << "Datos del clerigo:" << endl;
    Personaje::toString();
    cout << "Dios: " << dios << endl;
}
