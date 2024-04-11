#include <iostream>
#include <string>
#include "ej3_raices.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Ingrese los coeficientes: " << argv[0] << " CO1 CO2 CO3" << endl;
        return 1;
    }

    Raices* r = new Raices(stof(argv[1]), stof(argv[2]), stof(argv[3]));

    r->calcular();

    delete r;
}