#include <iostream>
#include <string>
#include <unistd.h>
#include "ej4_lib.h"

using namespace std;

int main() {
    Cronometro c;
    int t;

    cout << "Ingrese hasta cuanto se esperará (en minutos): ";
    cin >> t;

    while (c.getMinutos() < t) {
        cout << c.toString() << endl;
        ++c;
        sleep(1);
    }
    cout << c.toString() << endl;

    return 0;
}