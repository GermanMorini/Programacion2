#include<iostream>

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

        Fecha& operator++() {
            
            return *this;
        }

        Fecha& operator--() {
            --dia;
            return *this;
        }

        Fecha& operator+(int d) {
            
            return *this;
        }
    private:
        int dia, mes, anio;

        int dias_en_un_mes(int *mes) {
            switch (*mes) {
                case 1: return 31;
                case 2: return 28;
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
            return *dia >= 1 and *dia <= dias_en_un_mes(mes);
        }

        void sumar_dias(int d) {
            dia += d;
            dia = dia % dias_en_un_mes(&mes);
            mes += dia/;
            anio += mes/12;
        }
};

int main() {
    
    return 0;
}