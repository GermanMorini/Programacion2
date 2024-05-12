#include <iostream>
#include "clases.h"

using namespace std;

int main() {
    Alumno* alumno;
    Docente* docente;
    Materia* materia;

    int opt = 0;
    bool alumno_registrado = 0;
    bool docente_registrado = 0;
    bool materia_registrada = 0;

    while(true) {
        cout << "Ingrese una opción:" << endl;
        cout << "1. Alta de alumnos y docentes" << endl;
        cout << "2. Incribir a materia" << endl;
        cout << "3. Anotar titular" << endl;
        cout << "4. Cargar nota" << endl;
        cout << "5. Modificar datos" << endl;
        cout << "6. Salir" << endl;
        cout << "> "; cin >> opt;

        string nombre, apellido, mail;

        switch (opt) {
            case 1:
                int dni;
                int opt2;

                cout << "¿Que desea registrar? [1: docente], [2: alumno]" << endl;
                cin >> opt2;

                cout << "Ingrese los datos personales:" << endl;
                cout << "Apellido: "; cin >> apellido;
                cout << "Nombre: "; cin >> nombre;
                cout << "DNI: "; cin >> dni;
                cout << "Mail: "; cin >> mail;

                if (opt2 == 1) {
                    string titulo;

                    cout << "Titulo: "; cin >> titulo;

                    docente = new Docente(apellido, nombre, dni, mail, titulo);
                    docente_registrado = 1;
                    
                    cout << "Docente registrado con éxito!" << endl << endl;
                } else if (opt2 == 2) {
                    string carrera;
                    int edad;

                    cout << "Carrera: "; cin >> carrera;
                    cout << "Edad: "; cin >> edad;

                    alumno = new Alumno(apellido, nombre, dni, mail, carrera, edad);
                    alumno_registrado = 1;

                    cout << "Alumno registrado con éxito!" << endl << endl;
                } else {
                    cout << "Ingrese una opción correcta!" << endl << endl;
                }
                break;
            case 2:
                if (not alumno_registrado) {
                    cout << "Primero debés registrar un alumno!" << endl << endl;
                    break;
                }

                int codigo;

                cout << "Ingrese el nombre de la materia: "; cin >> nombre;
                cout << "Ingrese el código: "; cin >> codigo;
                
                materia = new Materia(codigo, nombre);
                materia_registrada = 1;

                cout << "Materia registrada con éxito!" << endl << endl;
                break;
            case 3:
                if (not docente_registrado) {
                    cout << "Primero debés registrar un docente!" << endl << endl;
                    break;
                }
                if (not materia_registrada) {
                    cout << "Primero debés registrar una materia!" << endl << endl;
                    break;
                }

                
                
                break;
            case 4:
                if (not alumno_registrado) {
                    cout << "Primero debés registrar un alumno!" << endl << endl;
                    break;
                }
                int nota;

                cout << "Ingresá la nota del alumno: "; cin >> nota;

                if (nota < 1 and nota > 10) {
                    cout << "La nota debe ser un número entre 0 - 10" << endl << endl;
                    break;
                }
                materia->setNota(nota);

                break;
            case 5:
                cout << "¿A quién le deseas modificar los datos? [1: docente] ; [2: alumno]" << endl;
                cin >> opt2;

                cout << "Ingrese los datos personales:" << endl;
                cout << "Apellido: "; cin >> apellido;
                cout << "Nombre: "; cin >> nombre;
                cout << "DNI: "; cin >> dni;
                cout << "Mail: "; cin >> mail;

                if (opt2 == 1) {
                    string titulo;

                    cout << "Titulo: "; cin >> titulo;

                    docente = new Docente(apellido, nombre, dni, mail, titulo);
                    docente_registrado = 1;
                    
                    cout << "Docente registrado con éxito!" << endl << endl;
                } else if (opt2 == 2) {
                    string carrera;
                    int edad;

                    cout << "Carrera: "; cin >> carrera;
                    cout << "Edad: "; cin >> edad;

                    alumno = new Alumno(apellido, nombre, dni, mail, carrera, edad);
                    alumno_registrado = 1;

                    cout << "Alumno registrado con éxito!" << endl << endl;
                } else {
                    cout << "Ingrese una opción correcta!" << endl << endl;
                }
                break;
            case 6:
                return 0;
            default:
                cout << "Ingrese una opción válida!" << endl << endl;
        }
    }  
}
