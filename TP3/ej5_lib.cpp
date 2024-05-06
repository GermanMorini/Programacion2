#include <iostream>
#include <cmath>
#include "ej5_lib.h"

using namespace std;

Punto::Punto(float x, float y) {
    this->x = x;
    this->y = y;
}

void Punto::operator++() {
    x += 1;
    y += 1;
}

void Punto::operator--() {
    x -= 1;
    y -= 1;
}

Punto Punto::operator+(Punto p) {
    return Punto(x + p.x, y + p.y);
}

Punto Punto::operator-(Punto p) {
    return Punto(x - p.x, y - p.y);
}

Punto Punto::operator+(int n) {
    return Punto(x + n, y + n);
}

Punto Punto::operator-(int n) {
    return Punto(x - n, y - n);
}

char* Punto::coorPolares() {
    char* str = new char[100];
    sprintf(str, "(%.2f, %.2f)", sqrt(x*x + y*y), atan(y/x));
    return str;
}

char* Punto::toString() {
    char* str = new char[100];
    sprintf(str, "(%.2f, %.2f)", x, y);
    return str;
}
