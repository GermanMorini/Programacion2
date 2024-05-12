#include "clases.h"
#include <string>

Persona::Persona(string _apellido, string _nombre, int _dni, string _mail) {
    apellido = _apellido;
    nombre = _nombre;
    dni = _dni;
    mail = _mail;
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

Materia::Materia(int _codigo, string _nombre) {
    codigo = _codigo;
    nombre = _nombre;
}

void Materia::setNota(int n) {nota = n;}

string Materia::toString() {
    string str = "Datos de la materia:\n\tNombre:" + nombre +
    "\n\tCodigo: " + to_string(codigo);

    return str;
}

Alumno::Alumno(string _apellido, string _nombre, int _dni, string _mail, string _carrera, int _edad) : Persona(_apellido,_nombre,_dni,_mail) {
    carrera = _carrera;
    edad = _edad;
}

string Alumno::getCarrera() {return carrera;}
int Alumno::getEdad() {return edad;}

void Alumno::setCarrera(string c) {carrera = c;}
void Alumno::setEdad(int e) {edad = e;}

string Alumno::toString() {
    string str = 
    Persona::toString() +
    "Carrera: " + carrera +
    "Edad: " + to_string(edad);

    return str;
}

Docente::Docente(string _apellido, string _nombre, int _dni, string _mail, string _titulo) : Persona(_apellido,_nombre,_dni,_mail) {
    titulo = _titulo;
}

string Docente::getTitulo(){return titulo;}
// Materia Docente::getMateria() {return materia;}

void Docente::setTitulo(string tit) {titulo = tit;}
// void Docente::setMateria(Materia mat) {materia = mat;}

string Docente::toString() {
    string str = 
    Persona::toString() +
    "\nTitulo: " + titulo; 
    // "\n" + materia.toString();

    return str;
}
