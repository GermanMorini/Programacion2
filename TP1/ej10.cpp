#include <cctype>
#include <cstdlib>
#include <iostream>
#include "ej10_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    int v[100], dst[100];

    for (int i = 1; i < argc; i++) {
        if (not isdigit(*argv[i])) {
            cout << "Los argumenmtos deben ser numericos!" << endl;
            exit(1);
        }
        v[i] = atoi(*argv[i]);
    }

    if (sort(v, argc, dst)) {
        cout << "Error al ordenar!" << endl;
        exit(2);
    }

    print_array(dst, argc);

    return 0;
}