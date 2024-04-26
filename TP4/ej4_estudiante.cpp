#include "ej4_lib.h"

using namespace std;

Estudiante::Estudiante(string n, int d, char ec, string c) : Persona(n,d,ec) {
    curso = c;
}

string Estudiante::getCurso() {return curso;}

bool Estudiante::setCurso(string c) {
    if (
        c != "ANALISIS I" and 
        c != "ANALISIS II" and 
        c != "ANALISIS III" and 
        c != "FISICA I" and 
        c != "FISICA II" and 
        c != "FISICA III" and 
        c != "PROGRAMACION I" and 
        c != "PROGRAMACION II" and 
        c != "LAB DE COMP I" and 
        c != "LAB DE COMP II" and 
        c != "ESTADISTICA" and 
        c != "ANALISIS NUMERICO"
    ) return false;

    curso = c;
    return true;
}

void Estudiante::toString() {
    cout << "Informacion del estudiante:" << endl;
    Persona::toString();
    cout << "Curso: " << curso << endl;
}
