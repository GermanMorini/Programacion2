#include <cstring>
#include "ej5_lib.h"

bool es_minuscula(char c) {
    // TODO: no detecta la 'ñ'
    return (c >= 97 and c <= 122) or c == 241;
}

void mayusculizar(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (es_minuscula(s[i])) {
            s[i] -= 32;
        }
    }
}
