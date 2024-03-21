#include <cstring>
#include <iostream>
#include "ej5_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2 or strlen(argv[1]) > 10) {
        cout << "Uso: " << argv[0] << " STRING" << endl;
        cout << "STRING de largo 10" << endl;
        exit(1);
    }
    
    char *s = new char[strlen(argv[1])];
    s = argv[1];

    mayusculizar(s);

    cout << s << endl;

    return 0;
}