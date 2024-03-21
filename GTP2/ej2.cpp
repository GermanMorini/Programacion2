#include <iostream>

using namespace std;

int main() {
    int a[5], *p;

    for (int i = 0; i < 5; i++) {
        p = &a[i];
        cout << p << endl;
    }

    return 0;
}