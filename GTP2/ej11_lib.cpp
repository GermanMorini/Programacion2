#include <iostream>
#include "ej11_lib.h"

using namespace std;

float* leer(int n) {
    float* nums = new float[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero (" << n-i << " restantes): ";
        cin >> nums[i];
    }

    return nums;
}

float promedio(float* nums, int len) {
    float avg = 0;

    for (float* i = &nums[0]; i < &nums[len]; i++) {
       avg += *i/len;
    }

    return avg;
}

float maximo(float* nums, int len) {
    float max = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] > max) max = nums[i];
    }

    return max;
}

float minimo(float* nums, int len) {
    float min = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] < min) min = nums[i];
    }

    return min;
}
