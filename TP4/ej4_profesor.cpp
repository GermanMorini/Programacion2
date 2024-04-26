#include "ej4_lib.h"

using namespace std;

Profesor::Profesor(string n, int d, char ec, int ai, int no, string dto) : Empleado(n,d,ec,ai,no) {
    dpto = dto;
}

string Profesor::getDpto() {return dpto;}

bool Profesor::setDpto(string dto) {
    if (
        dto != "lenguajes" and
        dto != "matematicas" and
        dto != "arquitectura" and
        dto != "fisica" and
        dto != "economia" and
        dto != "agricultura" and
        dto != "veterinaria"
    ) return false;

    dpto = dto;
    return true;
}

void Profesor::toString() {
    cout << "Información del profesor:" << endl;
    Persona::toString();
    Empleado::toString();
    cout << "Departamento: " << dpto << endl;
}
