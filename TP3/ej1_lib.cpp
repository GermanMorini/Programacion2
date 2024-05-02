#include "ej1_lib.h"
#include <cstdio>
#include <iostream>

using namespace std;

Fecha::Fecha() {
  dia = 1;
  mes = 1;
  anio = 1900;
}

Fecha::Fecha(int dia, int mes, int anio) {
    this->anio = anio;

    if (!validar_fecha(&dia, &mes)) {
        cout << "No se puede crear una fecha con esos parámetros" << endl;
    }
    this->mes = mes;
    this->dia = dia;
}

void Fecha::operator++() { sumar_dias(1); }
void Fecha::operator--() { restar_dias(1); }

void Fecha::operator+(int d) { sumar_dias(d); }
void Fecha::operator-(int d) { restar_dias(d); }

char* Fecha::toString() {
    char* str = new char[30];
    sprintf(str, "%d/%d/%d", dia, mes, anio);
    return str;
}

int Fecha::dias_en_un_mes(int mes) {
    switch (mes) {
    case 1:
        return 31;
    case 2:
        if (es_bisiesto(anio))
        return 29;
        return 28;
    case 3:
        return 31;
    case 4:
        return 30;
    case 5:
        return 31;
    case 6:
        return 30;
    case 7:
        return 31;
    case 8:
        return 31;
    case 9:
        return 30;
    case 10:
        return 31;
    case 11:
        return 30;
    case 12:
        return 31;
    default:
        return 0;
    }
}

bool Fecha::validar_fecha(int *dia, int *mes) {
    return *dia >= 1 and *dia <= dias_en_un_mes(*mes);
}

bool Fecha::es_bisiesto(int a) {
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
}

void Fecha::sumar_dias(int d) {
    dia += d;

    while (dia > dias_en_un_mes(mes)) {
        dia -= dias_en_un_mes(mes);
        mes++;
        if (mes > 12) {
            anio++;
            mes = 1;
        }
    }
}

void Fecha::restar_dias(int d) {
    dia -= d;

    while (dia < 1) {
        dia += dias_en_un_mes(mes - 1);
        mes--;
        if (mes < 1) {
            anio--;
            mes = 12;
        }
    }
}
