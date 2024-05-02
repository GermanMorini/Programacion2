#include "persona.h"

Persona::Persona(string a, string *n, int d, string m) {
    apellido = a;
    nombres = n;
    dni = d;
    mail = m;
}

string Persona::getApellido() {return apellido;}
string* Persona::getNombres() {return nombres;}
int Persona::getDNI() {return dni;}
string Persona::getMail() {return mail;}

void Persona::setApellido(string a) {apellido = a;}
void Persona::setNombres(string *n) {nombres = n;}
void Persona::setDNI(int d) {dni = d;}
void Persona::setMail(string m) {mail = m;}
