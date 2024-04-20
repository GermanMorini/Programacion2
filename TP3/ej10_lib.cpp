#include "ej10_lib.h"
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

// ajustan el rango de valores generados aleatoriamente
int MIN = 0;
int MAX = 5;

Matrix::Matrix(int** mat) {
    rows = sizeof(**mat) / sizeof(*mat[0]);
    cols = sizeof(*mat[0]) / sizeof(mat[0][0]);
    data = new int*[rows];

    for (int i = 0; i < rows; i++) {
        data[i] = new int[cols];
        
        for (int j = 0; j < cols; j++) {
            data[i][j] = mat[i][j];
        }
    }
}

// inicializa una matriz r * c con ceros, si 'random' es falso
// sino, la rellena con numeros aleatorios
Matrix::Matrix(int r, int c, bool random) {
    rows = r;
    cols = c;
    data = new int*[rows];
    
    if (random) {
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];

            for (int j = 0; j < cols; j++) {
                data[i][j] = MIN + rand()%(MAX - MIN + 1);
            }
        }
    } else {
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];

            for (int j = 0; j < cols; j++) {
                data[i][j] = 0;
            }
        }
    }
}

int Matrix::getRows() {return rows;}
int Matrix::getCols() {return cols;}

Matrix Matrix::operator+(Matrix m) {
    if (rows != m.rows or cols != m.cols) return nullptr;

    Matrix result(rows, cols, false);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result(i, j) = data[i][j] + m(i, j);
        }
    }

    return result;
}

Matrix Matrix::operator-(Matrix m) {
    if (rows != m.rows or cols != m.cols) return nullptr;

    Matrix result(rows, cols, false);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result(i, j) = data[i][j] - m(i, j);
        }
    }

    return result;
}

Matrix Matrix::operator*(Matrix m) {
    if (cols != m.rows) return nullptr;

    Matrix result(rows, m.cols, false);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            for (int k = 0; k < cols; k++) {
                result(i, j) += data[i][k] * m(k, j);
            }
        }
    }

    return result;
}

int& Matrix::operator()(int row, int col) {
    return data[row][col];
}

int& Matrix::operator[](int indx) {
    return data[indx][indx];
}

string Matrix::toString() {
    string str = "";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                str += "| " + to_string(data[i][j]) + "\t";
            } else if (j == cols-1) {
                str += to_string(data[i][j]) + " |\n";
            }
            else {
                str += to_string(data[i][j]) + "\t";
            }
        }
    }

    return str;
}
