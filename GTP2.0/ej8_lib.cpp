#include "ej8_lib.h"
#include <cstring>

bool es_vocal_minuscula(char c) {
    switch (c) {
        case 97:
        case 101:
        case 105:
        case 111:
        case 117: return true;
        default: return false;
    }
}

int contar_vocales(char* s) {
    int count = 0;

    for (int i = 0; i < strlen(s); i++) {
        count += es_vocal_minuscula(s[i]);
    }

    return count;
}
