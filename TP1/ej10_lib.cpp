#include <iostream>
#include "ej10_lib.h"

using namespace std;

int sort(int v[100], int l, int dst[100]) {
    int count = 0;

    for (int i = 0; i < l; i++) {
        if (not v[i]%2) dst[count++] = v[i];
    }
    
    for (int i = 0; i < l; i++) {
        if (v[i]%2) dst[count++] = v[i];
    }

    return 0;
}

void print_array(int a[100], int l) {
    for (int i = 0; i < l; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
}