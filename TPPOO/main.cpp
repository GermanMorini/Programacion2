#include <iostream>
#include "alumno.h"
#include "docente.h"
#include "materia.h"

using namespace std;

int main() {
    int opt;
    Alumno* alumno;
    Docente* docente;

    while(true) {
        cout << "Ingrese una opción:" << endl;
        cout << "1. Alta de alumnos y docentes" << endl;
        cout << "2. Incribir a materia" << endl;
        cout << "3. Anotar titular" << endl;
        cout << "4. Cargar nota" << endl;
        cout << "5. Modificar datos" << endl;
        cout << "6. Salir" << endl;
        cout << "> ";
        cin >> opt;

        switch (opt) {
            case 1:
                string nombre, apellido, mail;
                int dni;
                int opt;

                cout << "¿Que desea registrar? [1: docente], [2: alumno]" << endl;
                cin >> opt;

                cout << "Ingrese los datos personales:" << endl;
                cout << "Nombre: "; cin >> nombre;
                cout << "Apellido: "; cin >> apellido;
                cout << "Mail: "; cin >> mail;
                cout << "DNI: "; cin >> dni;

                if(opt == 1) {
                    string titulo, nombre_mat;
                    int codigo;

                    cout << "Titulo: "; cin >> titulo;

                    cout << endl << "Datos de la materia:" << endl;
                    cout << "Nombre: " >> 

                    // TODO: ver como es lo del inciso de la materia
                    docente = new Docente(apellido, nombre, dni, mail, titulo);
                } else if (opt == 2) {
                    string carrera;
                    int edad;

                    cout << "Carrera: "; cin >> carrera;
                    cout << "Edad: "; cin >> edad;

                    alumno = new Alumno(apellido, nombre, dni, mail, carrera, edad);
                } else {
                    cout << "Ingrese una opción correcta!" << endl;
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6: return 0;
        }
    }  
}
