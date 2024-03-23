#include <iostream>
#include "ej11_lib.h"

using namespace std;

int main() {
    int* n = new int;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> *n;
    float* nums = leer(*n);
    cout << "----------------------------------------------" << endl;

    float* media = new float;
    float* max = new float;
    float* min = new float;

    *media = promedio(nums, *n);
    *max = maximo(nums, *n);
    *min = minimo(nums, *n);

    cout << "Máximo: " << *max << endl;
    cout << "Mínimo: " << *min << endl;
    cout << "Media: " << *media << endl;
    
    delete n;
    delete media;
    delete min;
    delete max;
    delete [] nums;
}
