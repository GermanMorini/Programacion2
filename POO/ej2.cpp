#include <cstdio>
#include <iostream>
#include "ej2_persona.h"

using namespace std;

void sumario(Persona p) {
    char* estado;

    switch (p.calcularIMC()) {
        case -1: estado = "demasiado bajo"; break;
        case 0: estado = "en forma"; break;
        case 1: estado = "demasiado alto";
    }

    printf("\tNombre: %s\n", p.getNombre());
    printf("\tEdad: %d\n", p.getEdad());
    printf("\tSexo: %c\n", p.getSexo());
    printf("\tAltura: %.2f\n", p.getAltura());
    printf("\tPeso: %.2f\n", p.getPeso());
    printf("\tEstado:\n");
    printf("\t\tIMC: %s\n", estado);
    printf("\t\tMayor de edad: %s\n", p.esMayorDeEdad() ? "si" : "no");
}

int main() {
    Persona* p[3];

    int CANTIDAD = 3;

    for (int i = 0; i < CANTIDAD; i++) {
        char* nombre = new char();
        int edad;
        float peso, altura;
        char sexo;

        printf("--- Persona %d ---\n", i+1);
        
        printf("Ingrese nombre, edad, sexo, peso y altura separados por espacios: ");
        scanf("%s %d %c %f %f", nombre, &edad, &sexo, &peso, &altura);

        p[i] = new Persona(nombre, edad, sexo, peso, altura);
    }

    for (int i = 0; i < CANTIDAD; i++) {
        printf("--- Persona %d ---\n", i+1);
        sumario(*p[i]);
    }
}