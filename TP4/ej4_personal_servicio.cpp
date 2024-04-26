#include "ej4_lib.h"

using namespace std;

Personal_servicio::Personal_servicio(string n, int d, char ec, int ai, int no, string s) : Empleado(n,d,ec,ai,no) {
    seccion = s;
}

string Personal_servicio::getSeccion() {return seccion;}

bool Personal_servicio::setSeccion(string s) {
    if (
        s != "biblioteca" and
        s != "decanato" and
        s != "secretaria" and
        s != "contabilidad" and
        s != "limpieza" and
        s != "asuntos estudiantiles"
    ) return false;

    seccion = s;
    return true;
}

void Personal_servicio::toString() {
    cout << "Informacion del empleado:" << endl;
    Persona::toString();
    Empleado::toString();
    cout << "Seccion: " << seccion << endl;
}
