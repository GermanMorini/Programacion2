#include<iostream>

using namespace std;



int calcular(int A, int B, int K) {
    int contador = 0;
    for (A; A <= B; A++) {
        contador += (A%K == 0);
    }

    return contador;
}

int main() {
    int A,B,K;

    cout << "Ingrese el limite inferior: ";
    cin >> A;
    cout << "Ingrese el limite superior: ";
    cin >> B;
    cout << "Ingrese el divisor: ";
    cin >> K;

    cout << "La cantidad de numeros divisobles por " << K << " es " << calcular(A, B, K) << endl;
    
    return 0;
}