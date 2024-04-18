#include <iostream>
#include "ej8_lib.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4 and argc != 8) {
        cout << "Uso:" << endl;
        cout << "\t" << argv[0] << " NOMBRE EDAD SEXO" << endl;
        cout << "\t" << argv[0] << " NOMBRE SEXO NACIMIENTO PESO ALTURA DNI" << endl;
        cout << "NACIMIENTO: dia mes anio" << endl;
        return 1;
    }

    Persona p;

    if (argc == 4) {
        p.setNombre(argv[1]);
        p.setEdad(atoi(argv[2]));
        p.setSexo((char) argv[3]);
    } else {

    }
    
    return 0;
}