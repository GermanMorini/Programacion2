#include <iostream>

using namespace std;

int aleatorio() {
    return rand()%100;
}

void rellenar(int a[15]) {
    for (int i = 0; i < 15; i++) {
        a[i] = aleatorio();
    }
}

int main() {
    srand(time(NULL));
    
    int a[15];
    rellenar(a);

    for (int *i = &a[0]; i < &a[14]; i++) {
        cout << *i << "\t(" << i << ")" << endl;
    }

    return 0;
}