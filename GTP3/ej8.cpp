#include <cstring>
#include <iostream>

using namespace std;

class Persona {
    public:
        Persona();

        Persona(char n[32], int ed, char s) {
            strcpy(nombre, n);
            edad = ed;
            sexo = s;
        }

        float calcularIMC() {
            return peso*1.0/(altura*altura);
        }

        int calcularEdad() {
            return 
        }

        bool esMayorDeEdad() {
            return edad >= 18;
        }
    private:
        char nombre[32];
        // Fecha nacimiento
        int dni, edad, peso, altura;
        char sexo;
};

int main() {
    
    return 0;
}