#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class Cronometro {
    public:
        Cronometro() {
            h = 0;
            m = 0;
            s = 0;
        }

        int getHoras() {return h;}
        int getMinutos() {return m;}
        int getSegundos() {return s;}

        string toString() {
            return to_string(h) + ":" + to_string(m) + ":" + to_string(s);
        }

        void reset() {
            h = 0;
            m = 0;
            s = 0;
        }

        void operator++() {
            s++;

            m += (s%60 == 0);
            h += (m%60 == 0 and m != 0);
            
            s %= 60;
            m %= 60;
        }
    private:
        int h, m, s;
};

int main() {
    Cronometro c;
    int t;

    cout << "Ingrese hasta cuanto se esperará (en minutos): ";
    cin >> t;

    while (c.getMinutos() < t) {
        cout << c.toString() << endl;
        ++c;
        sleep(1);
    }
    cout << c.toString() << endl;

    return 0;
}