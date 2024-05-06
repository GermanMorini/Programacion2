#include <cstring>
#include <iostream>
#include <string>
#include "ej8_lib.h"

Fecha HOY = {18,4,2024};

Persona::Persona(string n, int ed, char s) {
    datos.nombre = n;
    datos.edad = ed;
    datos.nacimiento = HOY;
    datos.nacimiento.anio -= ed;
    datos.sexo = s;
}

float Persona::calcularIMC() {
    return datos.peso*1.0/(datos.altura*datos.altura);
}

int Persona::calcularEdad() {
    int edad = HOY.anio - datos.nacimiento.anio;

    if (HOY.mes <= datos.nacimiento.mes and HOY.dia < datos.nacimiento.dia) edad--;

    return edad;
}

bool Persona::esMayorDeEdad() {
    return datos.edad >= 18;
}

string Persona::toString() {
    string str =
        "Nombre: " + datos.nombre +
        "\nEdad: " + to_string(datos.edad) + 
        "\nSexo: " + datos.sexo +
        "\nFecha de nacimiento: " + datos.nacimiento.dia+"/"+datos.nacimiento.mes+"/"+datos.nacimiento.anio +
        "\nPeso: " + datos.peso +
        "\nAltura: " + datos.altura;
    return str;
}

string Persona::getNombre() {return datos.nombre;}
char Persona::getSexo() {return datos.sexo;}
int Persona::getDni() {return datos.dni;}
float Persona::getPeso() {return datos.peso;}
float Persona::getAltura() {return datos.altura;}
int Persona::getEdad() {return datos.edad;}
Fecha Persona::getNacimiento() {return datos.nacimiento;}

void Persona::setNombre(string n) {datos.nombre = n;}
void Persona::setSexo(char s) {datos.sexo = s;}
void Persona::setDni(int d) {datos.dni = d;}
void Persona::setPeso(float p) {datos.peso = p;}
void Persona::setAltura(float a) {datos.altura = a;}
void Persona::setEdad(int e) {datos.edad = e;}
void Persona::setNacimiento(Fecha n) {datos.nacimiento = n;}
