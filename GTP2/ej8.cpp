#include "ej8_lib.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Uso: " << argv[0] << " STRING" << endl;
        cout << "Retorna la cantidad de vocales de STRING" << endl;
        return 1;
    }

    cout << contar_vocales(argv[1]) << endl;
}
