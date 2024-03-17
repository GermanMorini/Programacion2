#include <iostream>

using namespace std;

class Fecha {
    public:
        Fecha() {
            dia = 1;
            mes = 1;
            anio = 1900;
        }

        Fecha(int dia, int mes, int anio) {
            this->anio = anio;

            if (!validar_fecha(&dia, &mes)) {
                cout << "No se puede crear una fecha con esos parámetros" << endl;
                exit(1);
            }
            this->mes = mes;
            this->dia = dia;
        }

        string toString() {
            return to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
        }

        void operator++() {
            sumar_dias(1);
        }

        void operator--() {
            restar_dias(1);
        }

        void operator+(int d) {
            sumar_dias(d);
        }
        
        void operator-(int d) {
            restar_dias(d);
        }
    private:
        int dia, mes, anio;

        int dias_en_un_mes(int mes) {
            switch (mes) {
                case 1: return 31;
                case 2: if (es_bisiesto(anio)) return 29; return 28;
                case 3: return 31;
                case 4: return 30;
                case 5: return 31;
                case 6: return 30;
                case 7: return 31;
                case 8: return 31;
                case 9: return 30;
                case 10: return 31;
                case 11: return 30;
                case 12: return 31;
                default: return -1;
            }
        }

        bool validar_fecha(int *dia, int *mes) {
            return *dia >= 1 and *dia <= dias_en_un_mes(*mes);
        }

        bool es_bisiesto(int a) {
            return (a%4 == 0 && a%100 != 0) || (a%400 == 0);
        }

        void sumar_dias(int d) {
            dia += d;
            
            while (dia > dias_en_un_mes(mes)) {
                dia -= dias_en_un_mes(mes);
                mes++;
                if (mes > 12) anio++;
            }
        }

        void restar_dias(int d) {
            dia -= d;

            while (dia < 1) {
                dia += dias_en_un_mes(mes-1);
                mes--;
                if (mes < 1) anio--;
            }
        }
};

int main() {
    int dia, mes, anio;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;

    Fecha f(dia, mes, anio);

    cout << f.toString() << endl;

    ++f;
    cout << "++f: " << f.toString() << endl;
    
    --f;
    cout << "--f: " << f.toString() << endl;
    
    f + 76;
    cout << "f + 15: " << f.toString() << endl;
    
    f - 76;
    cout << "f - 17: " << f.toString() << endl;

    Fecha f2;
    cout << "f2: " << f2.toString() << endl;
    
    return 0;
}