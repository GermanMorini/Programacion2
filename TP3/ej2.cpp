#include <iostream>
#include <string>
#include "ej2_lib.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Uso: " << argv[0] << " NUMERADOR DENOMINADOR" << endl;
        return 1;
    }
    int n = atoi(argv[1]), d = atoi(argv[2]);

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