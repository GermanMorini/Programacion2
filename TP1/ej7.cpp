#include<iostream>

using namespace std;

void intercambiar(int &_1, int &_2) {
    int tmp = _1;
    _1 = _2;
    _2 = tmp;
}

int main() {
    int _1, _2;

    cout << "Ingrese un valor: ";
    cin >> _1;
    cout << "Ingrese otro: ";
    cin >> _2;

    intercambiar(_1, _2);

    cout << "Valor de 1: " << _1 << endl;
    cout << "Valor de 2: " << _2 << endl;
    
    return 0;
}