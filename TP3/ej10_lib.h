#include <string>

class Matrix {
    public:
        Matrix(Matrix &mat);
        Matrix(int r, int c, bool random);

        int getRows();
        int getCols();

        Matrix operator+(Matrix m);
        Matrix operator-(Matrix m);
        Matrix operator*(Matrix m);
        int& operator()(int row, int col);
        int& operator[](int indx);

        std::string toString();
    private:
        int** values;
        int rows, cols;
};
