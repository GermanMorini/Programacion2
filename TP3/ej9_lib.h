#include <string>

class Vector {
    public:
        Vector(int n);
        Vector(Vector &v);

        int getLargo();
        int* getElements();

        Vector operator+(Vector v);
        Vector operator-(Vector v);
        int operator*(Vector v);
        int& operator[](int i);

        std::string toString();
    private:
        int* arr;
        int largo;
};
