#include <iostream>

using namespace std;

int main() {
    int *a = new int[5];
    int *p;

    for (int i = 0; i < 5; i++) {
        p = &a[i];
        cout << p << endl;
    }

    delete [] a;
    return 0;
}