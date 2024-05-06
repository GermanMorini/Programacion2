#include <cstdlib>
#include <iostream>
#include "ej10_lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " FILAS COLUMNAS" << endl;
        cout << "Las matrices se generan de forma aleatoria. Solo hay que indicar su tamaño" << endl;
        return 1;
    }
    srand(time(NULL));

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    Matrix m1(rows, cols, true);
    Matrix m2(rows, cols, true);
    Matrix m3(cols, rows, true);

    cout << m1.toString() << endl;
    cout << m2.toString() << endl;
    cout << m3.toString() << endl;
    cout << (m1 + m2).toString() << endl;
    cout << (m1 - m2).toString() << endl;
    cout << (m1 * m3).toString() << endl;
}
