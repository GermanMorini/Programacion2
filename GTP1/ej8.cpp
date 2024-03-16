#include<iostream>
#include<cmath>

using namespace std;

void leer_coeficientes(int grado, int coef[100]) {
    for (int i = 0; i < grado; i++) {
        cout << "Ingrese el coeficiente " << i+1 << ": ";
        cin >> coef[i];
    }
}
    
double evaluar(int x, int grado, int coef[100]) {
    double res = 0;

    for (int i = 0; i < grado; i++) {
        res += coef[i] * pow(x, i);
    }

    return res;
}

int main() {
    int grado, x, coef[100];

    cout << "Ingrese el grado del polinomio: ";
    cin >> grado;

    leer_coeficientes(grado, coef);

    cout << "Ingrese el valor al cual evaluar: ";
    cin >> x;

    cout << "El resultado es: " << evaluar(x, grado, coef) << endl;

    return 0;
}