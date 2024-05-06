#include "ej10_lib.h"
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

// ajustan el rango de valores generados aleatoriamente
int MIN = 0;
int MAX = 5;

Matrix::Matrix(Matrix &mat) {
    rows = mat.rows;
    cols = mat.cols;
    values = new int*[rows];

    for (int i = 0; i < rows; i++) {
        values[i] = new int[cols];
        
        for (int j = 0; j < cols; j++) {
            values[i][j] = mat(i, j);
        }
    }
}

// si random es falso inicializa una matriz r * c con ceros
// sino, la rellena con numeros aleatorios
Matrix::Matrix(int r, int c, bool random) {
    rows = r;
    cols = c;
    values = new int*[rows];
    
    if (random) {
        for (int i = 0; i < rows; i++) {
            values[i] = new int[cols];

            for (int j = 0; j < cols; j++) {
                values[i][j] = MIN + rand()%(MAX - MIN + 1);
            }
        }
    } else {
        for (int i = 0; i < rows; i++) {
            values[i] = new int[cols];

            for (int j = 0; j < cols; j++) {
                values[i][j] = 0;
            }
        }
    }
}

int Matrix::getRows() {return rows;}
int Matrix::getCols() {return cols;}

Matrix Matrix::operator+(Matrix m) {
    Matrix result(m);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result(i, j) += values[i][j];
        }
    }

    return result;
}

Matrix Matrix::operator-(Matrix m) {
    Matrix result(*this);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result(i, j) -= m(i, j);
        }
    }

    return result;
}

Matrix Matrix::operator*(Matrix m) {
    Matrix result(rows, m.cols, false);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            for (int k = 0; k < cols; k++) {
                result(i, j) += values[i][k] * m(k, j);
            }
        }
    }

    return result;
}

int& Matrix::operator()(int row, int col) {
    return values[row][col];
}

int& Matrix::operator[](int indx) {
    return values[indx][indx];
}

string Matrix::toString() {
    string str = "";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                str += "| " + to_string(values[i][j]) + "\t";
            } else if (j == cols-1) {
                str += to_string(values[i][j]) + " |\n";
            }
            else {
                str += to_string(values[i][j]) + "\t";
            }
        }
    }

    return str;
}
