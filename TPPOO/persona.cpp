#include "persona.h"
#include <string>

Persona::Persona(string a, string n, int d, string m) {
    apellido = a;
    nombre = n;
    dni = d;
    mail = m;
}

string Persona::getApellido() {return apellido;}
string Persona::getNombre() {return nombre;}
int Persona::getDNI() {return dni;}
string Persona::getMail() {return mail;}

void Persona::setApellido(string a) {apellido = a;}
void Persona::setNombre(string n) {nombre = n;}
void Persona::setDNI(int d) {dni = d;}
void Persona::setMail(string m) {mail = m;}

string Persona::toString() {
    string str =
    "Nombre: " + nombre +
    "\nApellido: " + apellido +
    "\nMail: " + mail +
    "\nDNI: " + to_string(dni);

    return str;
}
