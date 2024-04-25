#include <cstdlib>
#include <iostream>
#include "ej11_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "Uso: " << argv[0] << " NUMEROS..." << endl;
        return 1;
    }
    srand(time(NULL));

    Enteros e1(argc-1);
    Enteros e2(argc-1);
    int MAX = 5, MIN = -5;

    for (int i = 1; i < argc; i++) {
        e1.Agregar(atoi(argv[i]));
        e2.Agregar(MIN + rand()%(-MIN + MAX+1));
    }

    e1.Mostrar();
    e2.Mostrar();

    (e2+e1).Mostrar();
    (e2-e1).Mostrar();
    (e2*e1).Mostrar();
}