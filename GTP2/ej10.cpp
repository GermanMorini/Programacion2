#include <cstdlib>
#include <iostream>
#include "ej10_lib.h"

using namespace std;

/*
    TODO: ¿como puedo hacer para no tener que pasar el tamaño del vector como parámetro?
*/
int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Uso: " << argv[0] << " NUM" << endl;
        cout << "NUM numero de valores a generar" << endl;
        return 1;
    }
    
    int n = atoi(argv[1]);
    int* v = generar(n);

    mostrar(v, n);
    mostrar(ordenar(v, n), n);

    delete [] v;
}