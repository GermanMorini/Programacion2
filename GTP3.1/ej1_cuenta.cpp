#include "ej1_cuenta.h"

char* Cuenta::getTitular() {
    return titular;
}

void Cuenta::setTitular(char* t) {
    titular = t;
}

double Cuenta::getCantidad() {
    return cantidad;
}

void Cuenta::setCantidad(double c) {
    cantidad = c;
}

void Cuenta::ingresar(double c) {
    if (c > 0) cantidad += c;
}

void Cuenta::retirar(double c) {
    cantidad -= c;
}
