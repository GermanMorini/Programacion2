#include <iostream>
#include <cstring>

using namespace std;

char* clone(char* str) {
    int len = strlen(str);
    char* rtn = new char[len];

    for (int i = 0; i < len; i++) {
        rtn[i] = str[i];
    }

    return rtn;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Uso: " << argv[0] << " STRING" << endl;
        return 1;
    }

    char* s = clone(argv[1]);

    delete [] s;
}
