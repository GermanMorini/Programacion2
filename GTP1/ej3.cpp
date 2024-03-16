#include<iostream>

using namespace std;

// creditos: ChatGPT
int mcd(int M, int N) {
    if (N == 0) {
        return M;
    } else {
        return mcd(N, M%N);
    }
}

int main() {
    int M, N;

    cout << "Ingrese el Nro 1: ";
    cin >> M;
    cout << "Ingrese el Nro 2: ";
    cin >> N;

    cout << "El MCD es: " << mcd(M, N) << endl;
    
    return 0;
}