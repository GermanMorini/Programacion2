#include "ej4_lib.h"

using namespace std;

Persona::Persona(string n, int d, char ec) {
    nombre = n;
    dni = d;
    estado_civil = ec;
}

string Persona::getNombre() {return nombre;}
string Persona::getApellido() {return apellido;}
int Persona::getDNI() {return dni;}
char Persona::getEstadoCivil() {return estado_civil;}

bool Persona::setEstadoCivil(char ec) {
    if (ec != 'S' and ec != 'C') return false;
    
    estado_civil = ec;
    return true;
}

void Persona::toString() {
    cout << "Nombre: " << nombre << endl;
    cout << "DNI: " << dni << endl;
    cout << "Estado civil: " << estado_civil << endl;
}
