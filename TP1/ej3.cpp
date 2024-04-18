#include<iostream>
#include "ej3_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    int M, N;

    if (argc != 3) {
        cout << "Uso: " << argv[0] << " NUM1 NUM2" << endl;
        return 1;
    }

    M = atoi(argv[1]);
    N = atoi(argv[2]);

    cout << "El MCD es: " << mcd(M, N) << endl;
    
    return 0;
}