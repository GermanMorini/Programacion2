#include <cstdlib>
#include <iostream>
#include "ej1_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    int X,Y,D;

    if (argc != 4) {
        cout << "Uso: " << argv[0] << " <posición> <destino> <salto>" << endl;
        return 1;
    }

    X = atoi(argv[1]);
    Y = atoi(argv[2]);
    D = atoi(argv[3]);

    if (Y < X) {
        cout << "X no puede ser mas grande que X" << endl;
        return 1;
    }
    
    cout << "La cantidad de saltos requeridos es: " << saltos(X,Y,D) << endl;
}