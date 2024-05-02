#include "alumno.h"

Alumno::Alumno(string a, string *n, int d, string m, string c, int e) : Persona(a,n,d,m) {
    carrera = c;
    edad = e;
}

string Alumno::getCarrera() {return carrera;}
int Alumno::getEdad() {return edad;}

void Alumno::setCarrera(string c) {carrera = c;}
void Alumno::setEdad(int e) {edad = e;}
