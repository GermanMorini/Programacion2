#include <iostream>
#include <string>
#include "ej2_lib.h"

using namespace std;

Empleado::Empleado(string n, int e, float s) {
    nombre = n;
    edad = e;
    salario = s;
}

string Empleado::getNombre() {return nombre;}
int Empleado::getEdad() {return edad;}
float Empleado::getSalario() {return salario;}

void Empleado::setSalario(float s) {salario = s;}

Repartidor::Repartidor(string n, int e, float s, int z) : Empleado(n,e,s) {
    zona = z;
}

Comercial::Comercial(string n, int e, float s, float c) : Empleado(n,e,s) {
    comision = c;
}

void Repartidor::toString() {
    cout << "Datos del repartidor:" << endl;
    cout << "\tNombre: " << getNombre() << endl;
    cout << "\tEdad: " << getEdad() << endl;
    cout << "\tSalario: " << getSalario() << endl;
    cout << "\tZona: " << zona;
}

void Repartidor::plus() {
    if (getEdad() > 25 and zona == 3) {
        setSalario(getSalario() + 3000);
    }
}

void Comercial::toString() {
    cout << "Datos del repartidor:" << endl;
    cout << "\tNombre: " << getNombre() << endl;
    cout << "\tEdad: " << getEdad() << endl;
    cout << "\tSalario: " << getSalario() << endl;
    cout << "\tComision: " << comision << endl;
}

void Comercial::plus() {
    if (getEdad() > 30 and comision > 12) {
        setSalario(getSalario() + 3000);
    }
}
