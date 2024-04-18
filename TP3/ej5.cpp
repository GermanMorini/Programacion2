#include <iostream>
#include <cmath>
#include <string>
#include "ej5_lib.h"

using namespace std;

int main(int argc, char* argv[]) {
    float x, y;

    if (argc < 3) {
        cout << "Uso: " << argv[0] << " X Y" << endl;
        return 1;
    }

    x = stof(argv[1]);
    y = stof(argv[2]);

    Punto p1(x,y);
    Punto p2(x*y-13,-y*0.73+29);

    cout << "p1 = " << p1.toString() << endl;
    cout << "p2 = " << p2.toString() << endl;
    cout << "p1 (polares) = " << p1.coorPolares() << endl;

    ++p1;
    cout << "++p1 = " << p1.toString() << endl;

    --p1;
    cout << "--p1 = " << p1.toString() << endl;

    cout << "p1 + p2 = " << (p1+p2).toString() << endl;
    
    cout << "p1 - p2 = " << (p1-p2).toString() << endl;
    
    cout << "p1 + 69 = " << (p1+69).toString() << endl;
    
    cout << "p1 - 420 = " << (p1-420).toString() << endl;
    
    return 0;
}