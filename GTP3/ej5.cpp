#include<iostream>
#include<cmath>
#include <math.h>

using namespace std;

class Punto {
    public:
        Punto(float x, float y) {
            this->x = x;
            this->y = y;
        }

        Punto& operator++() {
            x += 1;
            y += 1;
            return *this;
        }
        
        Punto& operator--() {
            x -= 1;
            y -= 1;
            return *this;
        }

        Punto& operator+(Punto p) {
            x += p.x;
            y += p.y;
            return *this;
        }

        Punto& operator-(Punto p) {
            x -= p.x;
            y -= p.y;
            return *this;
        }
        
        Punto& operator+(int n) {
            x += n;
            y += n;
            return *this;
        }

        Punto& operator-(int n) {
            x -= n;
            y -= n;
            return *this;
        }

        void coorPolares() {
            cout << "(" << sqrt(x*x + y*y) << ", " << atan(y/x) << ")";
        }

        void toString() {
            cout << "(" << x << ", " << y << ")";
        }

    private:
        float x, y;
};

int main() {
    float x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    Punto p1(x,y);
    Punto p2(x*y-13,-y*0.73+29);

    cout << "Las coordenadas polares: "; p1.coorPolares(); cout << endl;

    ++p1;
    cout << "++p1 = "; p1.toString(); cout << endl;

    --p1;
    cout << "--p1 = "; p1.toString(); cout << endl;

    cout << "p1 + p2 = "; (p1+p2).toString(); cout << endl;
    
    cout << "p1 - p2 = "; (p1-p2).toString(); cout << endl;
    
    cout << "p1 + 69 = "; (p1+69).toString(); cout << endl;
    
    cout << "p1 - 420 = "; (p1-420).toString(); cout << endl;
    
    return 0;
}