#include <iostream>
#include <time.h>
#include "ej10_lib.h"

using namespace std;

int* generar(int n) {
    srand(time(NULL));
    int* nums = new int[n];

    for (int* i = &nums[0] ; i < &nums[n]; i++) {
        *i = rand()%100 + 1;
    }

    return nums;
}

void mostrar(int* nums, int len) {
    for (int* i = &nums[0]; i <= &nums[len-1]; i++) {
        cout << *i << ", ";
    }
    cout << endl;
}

int* ordenar(int* v, int len) {
    bool b = 1;
    int tmp;

    while(b) {
        b = 0;
    
        for(int* i = &v[0]; i < &v[len-1]; i++) {
            if(*(i+1) > *i) {
                b = 1;

                tmp = *i;
                *i = *(i+1);
                *(i+1) = tmp;
            }
        }
    }

    return v;
}
