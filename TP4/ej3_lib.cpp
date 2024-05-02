#include <string>
#include "ej3_lib.h"

using namespace std;

Producto::Producto(string n, float p) {
    nombre = n;
    precio = p;
}

string Producto::getNombre() {return nombre;}
float Producto::getPrecio() {return precio;}

Perecedero::Perecedero(string n, float p, int d) : Producto(n,p) {
    dias_a_caducar = d;
}

float Perecedero::calcularMonto(int cantidad) {
    if (dias_a_caducar == 1) return cantidad*getPrecio()/4;
    if (dias_a_caducar == 2) return cantidad*getPrecio()/3;
    if (dias_a_caducar == 3) return cantidad*getPrecio()/2;
    return cantidad*getPrecio();
}

No_perecedero::No_perecedero(std::string n, float p, char t) : Producto(n,p) {
    tipo = t;
}

float No_perecedero::calcularMonto(int cantidad) {
    return cantidad*getPrecio();
}
