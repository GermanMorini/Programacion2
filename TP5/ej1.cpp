#include <cstdlib>
#include <iostream>
#include "ej1_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "Uso: " << argv[0] << " NUMEROS..." << endl;
        return 1;
    }
    srand(time(NULL));

    Vector<short> v1(argc - 1);
    Vector<short> v2(argc - 1);

    for (int i = 0; i < argc-1; i++) {
        v1[i] = atoi(argv[i+1]);
        v2[i] = 5.0 * rand() / RAND_MAX;
    }
    Vector<short> v3(v1+v2);

    cout << "v1 = " << v1.toString() << endl;
    cout << "v2 = " << v2.toString() << endl;
    cout << "v3 = " << v3.toString() << endl;

    cout << "v1 + v2 = " << (v1 + v2).toString() << endl;
    cout << "v1 - v2 = " << (v1 - v2).toString() << endl;
    cout << "v1 * v2 = " << v1 * v2 << endl;
}