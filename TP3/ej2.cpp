#include <iostream>
#include <string>
#include "ej2_lib.h"

using namespace std;

int main() {
    int n, d;

    cout << "Ingrese el numerador: ";
    cin >> n;

    cout << "Ingrese el denominador: ";
    cin >> d;

    Racional r1(n, d);
    Racional r2(3, 2);

    cout << "r1 = " << r1.toString() << endl;
    cout << "r2 = " << r2.toString() << endl;
    cout << "r1 + r2 = " << (r1+r2).toString() << endl;
    cout << "r1 - r2 = " << (r1-r2).toString() << endl;

    ++r1;
    cout << "++r1 = " << r1.toString() << endl;
    --r2;
    cout << "--r2 = " << r2.toString() << endl;

    r2 += 7;
    cout << "r2 += 7 = " << r2.toString() << endl;
    
    r2 -= 1;
    cout << "r2 -= 1 = " << r2.toString() << endl;

    return 0;
}