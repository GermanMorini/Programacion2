#include <iostream>
#include "clases.h"

using namespace std;

template<class T>
T dividir(T numerador, T denominador) {
    if (denominador == 0) throw ZeroDivException();

    return numerador*1.0 / denominador;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " NUMERADOR DENOMINADOR" << endl;
        cout << "Ejemplo: " << argv[0] << " 69 420" << endl;
        return 1;
    }

    try {
        // int resultado = dividir(atoi(argv[1]), atoi(argv[2]));
        // double resultado = dividir<short>(atof(argv[1]), atof(argv[2]));
        double resultado = dividir(atof(argv[1]), atof(argv[2]));

        cout << "El resultado es: " << resultado << endl;
    } catch (ZeroDivException e) {
        cout << "Ocurrió una excepción: " << endl;
        cout << e.getMessage() << endl;

        return 2;
    }
}
