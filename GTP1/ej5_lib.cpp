#include "ej5_lib.h"

bool es_primo(int n) {
    for (int i = 2; i < n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}

int obtener_divisores(int n, int div[100]) {
    int contador = 0;

    for (int i = 2; i < n; i++) {
        if (es_primo(i) and n%i == 0) div[contador++] = i;
    }

    return contador;
}

bool comparar(int a1[100], int a2[100], int len1, int len2) {
    if (len1 != len2) return false;

    for (int i = 0; i < len1; i++) {
        if (a1[i] != a2[i]) return false;
    }

    return true;
}
