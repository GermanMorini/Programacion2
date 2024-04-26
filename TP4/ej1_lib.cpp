#include "ej1_lib.h"

float Punto::perimetro() {
    return 0;
}

float Punto::area() {
    return 0;
}

float Circulo::perimetro() {
    return 2*M_PI*radio;
}

float Circulo::area() {
    return M_PI*radio*radio;
}

float Poligono::perimetro() {
    return N*lado;
}

float Poligono::area() {
    return N*lado*apot/2;
}
