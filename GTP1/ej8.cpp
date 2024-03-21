#include <iostream>
#include "ej8_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    int grado, x, coef[100];

    if (argc < 4) {
        cout << "Uso: " << argv[0] << " GRADO X COEFICIENTES..." << endl;
        return 1;
    }

    grado = atoi(argv[1]);
    x = atoi(argv[2]);

    for (int i = 3; i < argc; i++) {
        coef[i-3] = atoi(argv[i]);
    }

    cout << "El resultado es: " << evaluar(x, grado, coef) << endl;

    return 0;
}