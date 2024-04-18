#include <iostream>
#include <cmath>
#include "ej5_lib.h"

using namespace std;

Punto::Punto(float x, float y) {
    this->x = x;
    this->y = y;
}

Punto& Punto::operator++() {
    x += 1;
    y += 1;
    return *this;
}

Punto& Punto::operator--() {
    x -= 1;
    y -= 1;
    return *this;
}

Punto& Punto::operator+(Punto p) {
    x += p.x;
    y += p.y;
    return *this;
}

Punto& Punto::operator-(Punto p) {
    x -= p.x;
    y -= p.y;
    return *this;
}

Punto& Punto::operator+(int n) {
    x += n;
    y += n;
    return *this;
}

Punto& Punto::operator-(int n) {
    x -= n;
    y -= n;
    return *this;
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
