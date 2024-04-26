#include "ej4_lib.h"

using namespace std;

Empleado::Empleado(string n, int d, char ec, int ai, int no) : Persona(n,d,ec) {
    anio_incorporacion = ai;
    nro_oficina = no;
}

int Empleado::getAnioIncorporacion() {return anio_incorporacion;}
int Empleado::getNroOficina() {return nro_oficina;}

bool Empleado::setNroOficina(int nro) {
    if (nro < 1 or nro > 100) return false;
    
    nro_oficina = nro;
    return true;
}

void Empleado::toString() {
    cout << "Año de incorporación: " << anio_incorporacion << endl;
    cout << "Nro. de oficina: " << nro_oficina << endl;
}
