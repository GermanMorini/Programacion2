#include <cctype>
#include <iostream>
#include <time.h>

using namespace std;

class Password {
    public:
        Password() {
            generarPassword();
        }

        Password(int l) {
            longitud = l;
            generarPassword();
        }

        void generarPassword() {
            for (int i = 0; i < longitud; i++) {
                digitoRandom(i);
            }
            contrasenia[longitud] = '\0';
        }

        bool esFuerte() {
            // return longitud >= 11 and cumpleCondicion(isupper, 3) and cumpleCondicion(isdigit, 6) and cumpleCondicion(islower, 2);
            return longitud >= 11 and tieneMasDe2Mayusculas() and tieneMasDe5Numeros() and tieneMasDe1Minuscula();
        }

        void print() {
            cout << contrasenia << endl;
        }

        void setLongitud(int l) {
            if (l != longitud) {
                longitud = l;
                generarPassword();
            }
        }

    private:
        // typedef int (*condicion)(int);
        int longitud = 8;
        char contrasenia[100];

        void digitoRandom(int i) {
            switch (rand()%3) {
                case 0: // numeros
                    contrasenia[i] = (char) (48 + rand()%10);
                    break;
                case 1: // mayusculas
                    contrasenia[i] = (char) (65 + rand()%26);
                    break;
                case 2: // minusculas
                    contrasenia[i] = (char) (97 + rand()%26);
                    break;
            }
        }

        // bool cumpleCondicion(condicion c, int n) {
        //     for (int i = 0; i < longitud; i++) {
        //         n -= (c(contrasenia[i]) != 0);
        //         if (n <= 0) return true;
        //     }
        //     return false;
        // }

        bool tieneMasDe2Mayusculas() {
            int contador = 0;

            for (int i = 0; i < longitud; i++) {
                contador += (isupper(contrasenia[i]) != 0);

                if (contador > 2) return true;
            }

            return false;
        }

        bool tieneMasDe1Minuscula() {
            int contador = 0;

            for (int i = 0; i < longitud; i++) {
                contador += (islower(contrasenia[i]) != 0);

                if (contador > 1) return true;
            }

            return false;
        }

        bool tieneMasDe5Numeros() {
            int contador = 0;

            for (int i = 0; i < longitud; i++) {
                contador += (isdigit(contrasenia[i]) != 0);

                if (contador > 5) return true;
            }

            return false;
        }
};

int main() {
    srand(time(NULL));
    int l;

    cout << "Ingrese la longitud de la contra: ";
    cin >> l;

    Password p(l);
    p.print();

    p.generarPassword();
    p.print();

    p.setLongitud(11);
    while (not p.esFuerte()) {
        p.generarPassword();
    }
    p.print();

    return 0;
}