#include <cstdlib>
#include <iostream>
#include "ej1_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 4) {
        cout << "Uso: " << argv[0] << " DIA MES AÑO" << endl;
        exit(1);
    }

    int dia, mes, anio;

    dia = atoi(argv[1]);
    mes = atoi(argv[2]);
    anio = atoi(argv[3]);

    Fecha f(dia, mes, anio);

    cout << f.toString() << endl;

    ++f;
    cout << "++f: " << f.toString() << endl;
    
    --f;
    cout << "--f: " << f.toString() << endl;
    
    f + 30;
    cout << "f + 76: " << f.toString() << endl;
    
    f - 76;
    cout << "f - 76: " << f.toString() << endl;

    Fecha f2;
    cout << "f2: " << f2.toString() << endl;
    
    return 0;
}