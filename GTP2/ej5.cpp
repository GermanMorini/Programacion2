#include <cstdio>
#include<iostream>

using namespace std;

void mayusculizar(char s[11]) {
    for (int i = 0; i < 10; i++) {
        if (s[i] >= 97 and s[i] <= 122) {
            s[i] -= 32;
        }
    }
}

int main() {
    char s[11];

    cout << "Ingrese una cadena: ";
    scanf("%10s", s);
    mayusculizar(s);

    cout << s << endl;

    return 0;
}