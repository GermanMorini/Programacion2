#include <cstring>
#include <iostream>

using namespace std;

void ritrevni(char s[]) {
    char *rtn = new char[strlen(s)];

    for (int i = 0; i < strlen(s); i++) {
        rtn[i] = s[strlen(s) - i - 1];
    }

    strcpy(s, rtn);
    delete [] rtn;
}

int main(int argc, char *argv[]) {
    if (argc != 2 or strlen(argv[1]) > 50) {
        cout << "Uso: " << argv[0] << " STRING" << endl;
        cout << "Largo de STRING < 50" << endl;
        return 1;
    }

    char *s = new char[strlen(argv[1])];

    ritrevni(s);

    cout << *s << endl;
    
    delete [] s;
    return 0;
}