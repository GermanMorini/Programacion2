#include <iostream>
#include <string>

using namespace std;

class Racional {
    public:
        Racional(int n, int d) {
            if (d == 0) {
                cout << "El denominador no puede ser 0" << endl;
                exit(1);
            }
            numerador = n;
            denominador = d;
        }
        
        string toString() {
            return to_string(numerador) + "/" + to_string(denominador);
        }

        Racional operator+(Racional r) {
            int mcm = calcularMCM(denominador, r.denominador);
            return Racional(numerador*mcm/denominador + r.numerador*mcm/r.denominador, mcm);
        }

        Racional operator-(Racional r) {
            int mcm = calcularMCM(denominador, r.denominador);
            return Racional(numerador*mcm/denominador - r.numerador*mcm/r.denominador, mcm);
        }

        void operator++() {
            *this += 1;
        }

        void operator--() {
            *this -= 1;
        }
        
        void operator+=(int n) {
            *this = *this + Racional(n*denominador, denominador);
        }

        void operator-=(int n) {
            *this = *this - Racional(n*denominador, denominador);
        }
    private:
        int numerador, denominador;

        // máximo común divisor
        int calcularMCD(int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        // mínimo común múltiplo
        int calcularMCM(int a, int b) {
            return (a * b) / calcularMCD(a, b);
        }
};

int main() {
    int n, d;

    cout << "Ingrese el numerador: ";
    cin >> n;

    cout << "Ingrese el denominador: ";
    cin >> d;

    Racional r1(n, d);
    Racional r2(3, 2);

    cout << "r1 = " << r1.toString() << endl;
    cout << "r2 = " << r2.toString() << endl;
    cout << "r1 + r2 = " << (r1+r2).toString() << endl;
    cout << "r1 - r2 = " << (r1-r2).toString() << endl;

    ++r1;
    cout << "++r1 = " << r1.toString() << endl;
    --r2;
    cout << "--r2 = " << r2.toString() << endl;

    r2 += 7;
    cout << "r2 += 7 = " << r2.toString() << endl;
    
    r2 -= 1;
    cout << "r2 -= 1 = " << r2.toString() << endl;

    return 0;
}