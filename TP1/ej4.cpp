#include<iostream>

using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n-1);
    }

    return 1;
}

int main() {
    int F;

    cout << "Ingrese el factorial a calcular: ";
    cin >> F;

    cout << "El factorial es: " << factorial(F) << endl;
    
    return 0;
}