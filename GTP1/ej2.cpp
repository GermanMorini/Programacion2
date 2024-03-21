#include <iostream>
#include "ej2_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    int A,B,K;

    if (argc != 4) {
        cout << "Uso: " << argv[0] << " INFERIOR SUPERIOR DIVISOR" << endl;
        return 1;
    }

    A = atoi(argv[1]);
    B = atoi(argv[2]);
    K = atoi(argv[3]);

    cout << "La cantidad de numeros divisibles por " << K << " es " << calcular(A, B, K) << endl;
    
    return 0;
}