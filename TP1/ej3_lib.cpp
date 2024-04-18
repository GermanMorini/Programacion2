#include "ej3_lib.h"

// creditos: ChatGPT
int mcd(int M, int N) {
    if (N == 0) {
        return M;
    } else {
        return mcd(N, M%N);
    }
}
