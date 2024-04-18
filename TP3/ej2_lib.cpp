#include <iostream>
#include "ej2_lib.h"

using namespace std;

Racional::Racional(int n, int d) {
    if (d == 0) {
        cout << "El denominador no puede ser 0" << endl;
        exit(1);
    }
    numerador = n;
    denominador = d;
}

char* Racional::toString() {
    char* str = new char[100];
    sprintf(str, "%d/%d", numerador, denominador);
    return str;
}

Racional Racional::operator+(Racional r) {
    int mcm = calcularMCM(denominador, r.denominador);
    return Racional(numerador*mcm/denominador + r.numerador*mcm/r.denominador, mcm);
}

Racional Racional::operator-(Racional r) {
    int mcm = calcularMCM(denominador, r.denominador);
    return Racional(numerador*mcm/denominador - r.numerador*mcm/r.denominador, mcm);
}

void Racional::operator++() {*this += 1;}
void Racional::operator--() {*this -= 1;}

void Racional::operator+=(int n) {
    *this = *this + Racional(n*denominador, denominador);
}

void Racional::operator-=(int n) {
    *this = *this - Racional(n*denominador, denominador);
}

// máximo común divisor
int Racional::calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// mínimo común múltiplo
int Racional::calcularMCM(int a, int b) {
    return (a * b) / calcularMCD(a, b);
}


