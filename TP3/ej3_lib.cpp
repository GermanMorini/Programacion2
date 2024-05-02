#include <iostream>
#include "ej3_lib.h"

using namespace std;

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

Complex Complex::conjugado() {
    return Complex(real, -imag);
}

Complex Complex::operator+(Complex c) {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(Complex c) {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(Complex c) {
    return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
}

void Complex::toString() {
    cout << real << " + " << imag << "i";
}
