#include<iostream>

using namespace std;

bool es_primo(int n) {
    for (int i = 2; i < n; i++) {
        if (n%i == 0) return false;
    }

    return true;
}

int obtener_divisores(int n, int div[100]) {
    int contador = 0;

    for (int i = 2; i < n; i++) {
        if (es_primo(i) and n%i == 0) div[contador++] = i;
    }

    return contador;
}

bool comparar(int a1[100], int a2[100], int len1, int len2) {
    if (len1 != len2) return false;

    for (int i = 0; i < len1; i++) {
        if (a1[i] != a2[i]) return false;
    }

    return true;
}

int main() {
    int N, M, contador_N, contador_M;
    int divs_N[100], divs_M[100];

    cout << "Ingrese el valor de N: ";
    cin >> N;
    cout << "Ingrese el valor de M: ";
    cin >> M;

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