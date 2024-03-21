#include <iostream>

using namespace std;

int main() {
    int a = 1, b = -1, *c;

    c = &a;
    cout << c << endl;
    cout << *c << endl;
    
    cout << endl;

    c = &b;
    cout << c << endl;
    cout << *c << endl;

    return 0;
}