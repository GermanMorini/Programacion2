#include <iostream>
#include "ej7_lib.h"

Cuenta::Cuenta(int n, float in) {
    n_cuenta = n;
    saldo = 0;
    interes = in;
}

int Cuenta::getN_cuenta() {return n_cuenta;}
float Cuenta::getSaldo() {return saldo;}
float Cuenta::getInteres() {return interes;}

bool Cuenta::setN_cuenta(int n) {
    if (n < 0) return false;

    n_cuenta = n;
    return true;
}

bool Cuenta::setSaldo(float s) {
    if (s < 0) return false;

    saldo = s;
    return true;
}

bool Cuenta::setInteres(float in) {
    if (in < 0) return false;

    interes = in;
    return true;
}

bool Cuenta::depositar(float d) {
    if (d < 0) return false;

    saldo += d;
    return true;
}

bool Cuenta::extraer(float d) {
    if (saldo - d > 0) {
        saldo -= d;
        return true;
    }

    return false;
}

char* Cuenta::toString() {
    char* str = new char[128];
    sprintf(str, "Nº %d\nSaldo: %.2f\nInteres: %.2f\n", n_cuenta, saldo, interes);
    return str;
}