#include <cstring>
#include <iostream>

using namespace std;

char* ritrevni(char s[]) {
    int l = strlen(s);
    char* rtn = new char[l];

    for (int i = 0; i < l; i++) {
        rtn[i] = s[l - i - 1];
    }

    return rtn;
}

int main(int argc, char *argv[]) {
    if (argc != 2 or strlen(argv[1]) > 50) {
        cout << "Uso: " << argv[0] << " STRING" << endl;
        cout << "Largo de STRING < 50" << endl;
        return 1;
    }
    char* s = ritrevni(argv[1]);
    cout << s << endl;
    
    delete [] s;
    return 0;
}