#include <cctype>
#include <iostream>
#include "ej6_lib.h"

using namespace std;

Password::Password() {
    generarPassword();
}

Password::Password(int l) {
    longitud = l;
    contrasenia = new char[l+1];
    generarPassword();
}

void Password::generarPassword() {
    for (int i = 0; i < longitud; i++) {
        contrasenia[i] = digitoRandom();
    }
    contrasenia[longitud] = '\0';
}

bool Password::esFuerte() {
    return longitud >= 11 and validar();
}

void Password::print() {
    cout << contrasenia << endl;
}

void Password::setLongitud(int l) {
    if (l != longitud and l > 0) {
        longitud = l;
        contrasenia = new char[l+1];
        generarPassword();
    }
}

char Password::digitoRandom() {
    switch (rand()%3) {
        case 0: // numeros
            return (char) (48 + rand()%10);
        case 1: // mayusculas
            return (char) (65 + rand()%26);
        case 2: // minusculas
            return (char) (97 + rand()%26);
    }
}

bool Password::validar() {
    int may = 0, min = 0, num = 0;

    for (int i = 0; i < longitud; i++) {
        may += (isupper(contrasenia[i]) != 0);
        min += (islower(contrasenia[i]) != 0);
        num += (isdigit(contrasenia[i]) != 0);

        if (may > 2 and min > 1 and num > 5) return true;
    }

    return false;
}