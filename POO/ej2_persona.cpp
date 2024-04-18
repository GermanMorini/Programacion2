#include "ej2_persona.h"
#include <cmath>
#include <time.h>

Persona::Persona() {
    generaDNI();
}

Persona::Persona(char* n, int e, char s) {
    nombre = n;
    edad = e;
    sexo = s;
    generaDNI();
    comprobarSexo(s);
}

Persona::Persona(char* n, int e, char s, float p, float a) {
    nombre = n;
    edad = e;
    sexo = s;
    peso = p;
    altura = a;
    generaDNI();
    comprobarSexo(s);
}

int Persona::calcularIMC() {
    float imc = peso/pow(altura, 2);
    return 
        -1*(imc < 20) +
        0*(20 <= imc && imc <= 25) +
        (25 < imc);
}

bool Persona::esMayorDeEdad() {
    return edad >= 18;
}

void Persona::comprobarSexo(char s) {
    if (!(s == 'H' or s == 'M')) {
        sexo = 'H';
    }
}

void Persona::generaDNI() {
    srand(time(NULL));

    dni = 10000000 + rand()%90000000;
}

char* Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(char* n) {
    nombre = n;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int e) {
    edad = e;
}

char Persona::getSexo() {
    return sexo;
}

void Persona::setSexo(char s) {
    sexo = s;
}

float Persona::getPeso() {
    return peso;
}

void Persona::setPeso(float p) {
    peso = p;
}

float Persona::getAltura() {
    return altura;
}

void Persona::setAltura(float a) {
    altura = a;
}
