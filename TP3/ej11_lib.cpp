#include <iostream>
#include <iterator>
#include "ej11_lib.h"

using namespace std;

Enteros::Enteros(int m) {
    max = m;
    N = 0;
    valores = new int[max];
}

Enteros::Enteros(int m, int n, int elementos[]) {
    max = m;
    // N = sizeof(*elementos) / sizeof(elementos[0]);
    N = n;
    valores = new int[max];

    for (int i = 0; i < N; i++) {
        valores[i] = elementos[i];
    }
}

bool Enteros::Agregar(int n) {
    if (N == max) return false;
    if (presente(n)) return false;

    valores[N] = n;

    N++;
    return true;
}

bool Enteros::Eliminar(int n) {
    if (not presente(n)) return false;
    int* v = new int[max];
    int index = 0;

    for (int i = 0; i < N; i++) {
        if (valores[i] != n) v[index++] = valores[i];
    }

    valores = v;

    N--;
    return true;
}

void Enteros::Mostrar() {
    if (N > 0) {
        cout << "{";
        for (int i = 0; i < N-1; i++) {
            cout << valores[i] << ", ";
        }
        cout << valores[N-1] << "}" << endl;
    } else {
        cout << "{}" << endl;
    }
}

Enteros Enteros::operator+(Enteros e) {
    Enteros res(max+e.max, N, valores);

    for (int i = 0; i < e.N; i++) {
        res.Agregar(e.valores[i]);
    }

    return res;
}

Enteros Enteros::operator*(Enteros e) {
    Enteros res(max);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < e.N; j++) {
            if (valores[i] == e.valores[j]) {
                res.Agregar(valores[i]);
                break;
            }
        }
    }

    return res;
}

Enteros Enteros::operator-(Enteros e) {
    Enteros res(max, N, valores);

    for (int i = 0; i < e.N; i++) {
        res.Eliminar(e.valores[i]);
    }

    return res;
}

bool Enteros::presente(int n) {
    for (int i = 0; i < N; i++) {
        if (valores[i] == n) return true;
    }

    return false;
}
