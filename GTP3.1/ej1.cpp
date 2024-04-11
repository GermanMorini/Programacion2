#include <iostream>
#include <cstdlib>
#include "ej1_cuenta.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Uso: " << argv[0] << " TITULAR [CANTIDAD]" << endl;
        return 1;
    }

    Cuenta c1;

    c1.setTitular(argv[1]);
    c1.ingresar(strtod(argv[2], NULL));

    printf("Estado de cuenta:\n\tTitular: %s\n\tCantidad: %.2f\n", c1.getTitular(), c1.getCantidad());
}