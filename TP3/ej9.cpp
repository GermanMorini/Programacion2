#include <cstdlib>
#include <iostream>
#include "ej9_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "Uso: " << argv[0] << " NUMEROS..." << endl;
        return 1;
    }
    srand(time(NULL));
    int MAX = 5, MIN = -5;

    Vector v1(argc - 1);
    Vector v2(argc - 1);

    for (int i = 0; i < argc-1; i++) {
        v1[i] = atoi(argv[i+1]);
        v2[i] = MIN + rand()%(-MIN + MAX+1);
    }
    Vector v3(v1+v2);

    cout << v1.toString() << endl;
    cout << v2.toString() << endl;
    cout << v3.toString() << endl;

    cout << "v1 + v2 = " << (v1 + v2).toString() << endl;
    cout << "v1 - v2 = " << (v1 - v2).toString() << endl;
    cout << "v1 * v2 = " << v1 * v2 << endl;
}