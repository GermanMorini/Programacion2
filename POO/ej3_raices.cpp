#include <iostream>
#include <cmath>
#include "ej3_raices.h"

using namespace std;

Raices::Raices(float a, float b, float c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

float* Raices::obtenerRaices() {
    float* r = new float[2]();
    float dis = getDiscriminante();

    r[0] = (-b-dis)/(2*a);
    r[1] = (-b+dis)/(2*a);

    return r;
}

float Raices::obtenerRaiz() {
    return -b/(2*a);
}

double Raices::getDiscriminante() {
    return sqrt(b*b - 4*a*c);
}

bool Raices::tieneRaices() {
    return getDiscriminante() != 0 and not isnan(getDiscriminante());
}

bool Raices::tieneRaiz() {
    return getDiscriminante() == 0;
}

void Raices::calcular() {
    if (tieneRaices()) {
        float* raices = obtenerRaices();
        printf("Raices: %.2f, %.2f\n", raices[0], raices[1]);
    } else if (tieneRaiz()) {
        printf("Raiz: %.2f\n", obtenerRaiz());
    } else {
        printf("No tiene raices reales\n");
    }
}