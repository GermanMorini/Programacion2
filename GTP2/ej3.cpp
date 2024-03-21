#include <iostream>

using namespace std;

int main() {
    int a[5], *p1, *p2;

    p1 = &a[0];
    p2 = &a[4];

    cout << p2 << endl;
    cout << p1 << endl;
    cout << "−−−−−−−−−−−−−−−" << endl;
    cout << p2-p1 << endl;

    return 0;
}