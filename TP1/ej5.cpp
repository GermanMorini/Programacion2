#include <iostream>
#include "ej5_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    int N, M, contador_N, contador_M;
    int divs_N[100], divs_M[100];

    if (argc != 3) {
        cout << "Uso: " << argv[0] << " NUM1 NUM2" << endl;
        return 1;
    }

    N = atoi(argv[1]);
    M = atoi(argv[2]);

    contador_N = obtener_divisores(N, divs_N);
    contador_M = obtener_divisores(M, divs_M);

    if (comparar(divs_M, divs_N, contador_M, contador_N)) {
        cout << "Tienen los mismos divisores primos!" << endl;

        cout << "Divisores: {";
        for (int i = 0; i < contador_M-1; i++) {
            cout << divs_M[i] << ", ";
        }
        cout << divs_N[contador_N-1] <<"}" << endl;
    } else {
        cout << "Los divisores difieren!" << endl;

        cout << "Divisores de N: {";
        for (int i = 0; i < contador_N-1; i++) {
            cout << divs_N[i] << ", ";
        }
        cout << divs_N[contador_N-1] <<"}" << endl;
        
        cout << "Divisores de M: {";
        for (int i = 0; i < contador_M-1; i++) {
            cout << divs_M[i] << ", ";
        }
        cout << divs_M[contador_M-1] <<"}" << endl;
    }
    
    return 0;
}