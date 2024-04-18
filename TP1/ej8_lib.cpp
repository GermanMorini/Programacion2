#include <iostream>
#include <cmath>
#include "ej8_lib.h"

using namespace std;

double evaluar(int x, int grado, int coef[100]) {
    double res = 0;

    for (int i = 0; i < grado; i++) {
        res += coef[i] * pow(x, i);
    }

    return res;
}
