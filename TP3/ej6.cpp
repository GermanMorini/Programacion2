#include <iostream>
#include <time.h>
#include "ej6_lib.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Uso: " << argv[0] << " LONGITUD" << endl;
        return 1;
    }

    srand(time(NULL));
    int l = atoi(argv[1]);

    Password p(l);
    p.print();

    p.generarPassword();
    p.print();

    p.setLongitud(11);
    while (not p.esFuerte()) {
        p.generarPassword();
    }
    p.print();

    return 0;
}