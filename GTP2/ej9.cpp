#include <iostream>
#include "ej9_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 1) {
        cout << "Uso: " << argv[0] << " NUM..." << endl;
        cout << "Ingresa e imprime numeros enteros" << endl;
        return 1;
    }

    int** enteros = parsear_a_enteros(argv);
}