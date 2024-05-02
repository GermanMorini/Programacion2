#include <cstdlib>
#include <iostream>
#include <string>
#include "ej3_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " REAL IMAGINARIO" << endl;
        return 1;
    }
    srand(time(NULL));

    int real = (-1+2*(rand()%2))*rand()%5;
    int imag = (-1+2*(rand()%2))*rand()%5;

    Complex c1(stof(argv[1]), stof(argv[2]));
    Complex c2(real, imag);

    cout << "c1 = "; c1.toString(); cout << endl;
    cout << "c2 = "; c2.toString(); cout << endl;
    cout << "conjugado(c1) = "; (c1.conjugado()).toString(); cout << endl;
    cout << "c1 + c2 = "; (c1 + c2).toString(); cout << endl;
    cout << "c1 - c2 = "; (c1 - c2).toString(); cout << endl;
    cout << "c1 * c2 = "; (c1 * c2).toString(); cout << endl;
}
