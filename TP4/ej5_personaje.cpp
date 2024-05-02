#include "ej5_lib.h"

using namespace std;

Personaje::Personaje(string n, string r, int f, int in, int vm) {
    nombre = n;
    raza = r;
    fuerza = f;
    inteligencia = in;
    vida_max = vm;
    vida = vm;
}

string Personaje::getNombre() {return nombre;}
string Personaje::getRaza() {return raza;}
int Personaje::getFuerza() {return fuerza;}
int Personaje::getInteligencia() {return inteligencia;}

void Personaje::toString() {
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
    cout << "Fuerza: " << fuerza << endl;
    cout << "Inteligencia: " << inteligencia << endl;
    cout << "Vida: " << vida << endl;
    cout << "Vida maxima: " << vida_max << endl;
}
