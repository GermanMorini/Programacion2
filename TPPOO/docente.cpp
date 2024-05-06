#include "docente.h"

Docente::Docente(string a, string n, int d, string m, string t) : Persona(a,n,d,m) {
    titulo = t;
}
Materia Docente::getMateria() {return materia;}

void Docente::anotarMateria(Materia m) {
    materia = m;
}

string Docente::toString() {
    string str = 
    Persona::toString() +
    "\nTitulo: " + titulo +
    "\nMateria: " + materia;

    return str;
}
