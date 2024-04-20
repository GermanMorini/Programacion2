#include "ej9_lib.h"
#include <string>

using namespace std;

Vector::Vector(int l) {
    largo = l;
    arr = new int[l];
}

Vector::Vector(int nums[]) {
    largo = sizeof(*nums) / sizeof(nums[0]);
    arr = new int[largo];

    for (int i = 0; i < largo; i++) {
        arr[i] = nums[i];
    }
}

Vector Vector::operator+(Vector v) {
    Vector vec(v.largo);
    for (int i = 0; i < largo; i++) {
        vec[i] = arr[i] + v[i];
    }
    return vec;
}

Vector Vector::operator-(Vector v) {
    Vector vec(v.largo);
    for (int i = 0; i < largo; i++) {
        vec[i] = arr[i] - v[i];
    }
    return vec;
}

int Vector::operator*(Vector v) {
    int result = 0;

    for (int i = 0; i < largo; i++) {
        result += arr[i] * v[i];
    }
    return result;
}

int& Vector::operator[](int i) {
    return arr[i];
}

int Vector::getLargo() {
    return largo;
}

string Vector::toString() {
    string rtn = "{";
    for (int i = 0; i < largo-1; i++) {
        rtn += to_string(arr[i]) + ", ";
    }
    rtn += to_string(arr[largo-1]) + "}";

    return rtn;
}
