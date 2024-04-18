#include <cstdlib>
#include <iostream>
#include "ej9_lib.h"

using namespace std;

void notacion_vectorial(int* v, int len) {
    for (int i = 0; i < len; i++) {
        cout << v[i] << endl;
    }
}

void notacion_punteros(int* v, int len) {
    for (int* i = &v[0]; i < &v[len]; i++) {
        cout << *i << endl;
    }
}

int** parsear_a_enteros(char** n, int len) {
    int** enteros = new int*[len];

    for (int i = 0; i < len; i++) {
        enteros[i] = atoi(n[i]);
    }

    return enteros;
}