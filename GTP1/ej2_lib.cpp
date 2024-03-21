#include "ej2_lib.h"

int calcular(int A, int B, int K) {
    int contador = 0;
    for (; A <= B; A++) {
        contador += (A%K == 0);
    }

    return contador;
}
