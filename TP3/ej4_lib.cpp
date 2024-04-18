#include <iostream>
#include "ej4_lib.h"

using namespace std;

Cronometro::Cronometro() {
    h = 0;
    m = 0;
    s = 0;
}

int Cronometro::getHoras() {return h;}
int Cronometro::getMinutos() {return m;}
int Cronometro::getSegundos() {return s;}

char* Cronometro::toString() {
    char* str = new char[100];
    sprintf(str, "%d:%d:%d", h, m, s);
    return str;
}

void Cronometro::reset() {
    h = 0;
    m = 0;
    s = 0;
}

void Cronometro::operator++() {
    s++;

    m += (s%60 == 0);
    h += (m%60 == 0 and m != 0);
    
    s %= 60;
    m %= 60;
}
