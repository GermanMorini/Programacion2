#include <cmath>
#include "clases.h"

using namespace std;

Circulo::Circulo(float _radio) {
    radio = _radio;
}

float Circulo::getPerimetro() {
    return 2 * M_PI * radio;
}
float Circulo::getArea() {
    return M_PI * radio * radio;
}

Cuadrado::Cuadrado(float _lado) {
    lado = _lado;
}

float Cuadrado::getPerimetro() {
    return 4 * lado;
}
float Cuadrado::getArea() {
    return lado * lado;
}

Rectangulo::Rectangulo(float _lado1, float _lado2) {
    lado1 = _lado1;
    lado2 = _lado2;
}

float Rectangulo::getPerimetro() {
    return 2 * lado1 + 2 * lado2;
}
float Rectangulo::getArea() {
    return lado1 * lado2;
}

Esfera::Esfera(float _radio) {
    radio = _radio;
}

float Esfera::getArea() {
    return 4 * M_PI * radio * radio;
}
float Esfera::getVolumen() {
    return 4.0/3 * M_PI * radio * radio * radio;
}

Cubo::Cubo(float _lado) {
    lado = _lado;
}

float Cubo::getArea() {
    return 6 * lado * lado;
}
float Cubo::getVolumen() {
    return lado * lado * lado;
}

Cilindro::Cilindro(float _altura, float _radio) {
    altura = _altura;
    radio = _radio;
}

float Cilindro::getArea() {
    return 2 * M_PI * radio * (radio + altura);
}
float Cilindro::getVolumen() {
    return M_PI * radio * radio * altura;
}
