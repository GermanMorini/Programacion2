#include<iostream>

using namespace std;

int saltos(int X, int Y, int D) {
    return (Y - X) / D;
}

int main() {
    int X,Y,D;

    cout << "Ingrese la posicion del grillo: ";
    cin >> X;
    cout << "Ingrese la posicion de destino: ";
    cin >> Y;
    cout << "Ingrese la distancia de salto: ";
    cin >> D;

    if (Y >= X) {
        cout << "La cantidad de saltos requeridos es: " << saltos(X,Y,D) << endl;
    } else {
        cout << "Y no puede ser mas grande que X" << endl;
        return 1;
    }
}