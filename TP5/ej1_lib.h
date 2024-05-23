#include <string>

using namespace std;

template<class T>
class Vector {
    private:
        T* arr;
        int largo;
    public:
        Vector<T>(int n);
        Vector<T>(Vector<T> &v);

        int getLargo();
        T* getElements();

        Vector operator+(Vector v);
        Vector operator-(Vector v);
        T operator*(Vector v);
        T& operator[](int i);

        std::string toString();
};

template<class T>
Vector<T>::Vector(int l) {
    largo = l;
    arr = new T[l];
}

template<class T>
Vector<T>::Vector(Vector<T> &v) {
    largo = v.largo;
    arr = new T[largo];

    for (int i = 0; i < largo; i++) {
        arr[i] = v.arr[i];
    }
}

template<class T>
Vector<T> Vector<T>::operator+(Vector<T> v) {
    Vector<T> vec(v.largo);
    for (int i = 0; i < largo; i++) {
        vec[i] = arr[i] + v[i];
    }
    return vec;
}

template<class T>
Vector<T> Vector<T>::operator-(Vector<T> v) {
    Vector<T> vec(v.largo);
    for (int i = 0; i < largo; i++) {
        vec[i] = arr[i] - v[i];
    }
    return vec;
}

template<class T>
T Vector<T>::operator*(Vector<T> v) {
    T result = 0;

    for (int i = 0; i < largo; i++) {
        result += arr[i] * v[i];
    }
    return result;
}

template<class T>
T& Vector<T>::operator[](int i) {
    return arr[i];
}

template<class T>
int Vector<T>::getLargo() {
    return largo;
}

template<class T>
T* Vector<T>::getElements() {
    return arr;
}

template<class T>
string Vector<T>::toString() {
    string rtn = "{";
    for (int i = 0; i < largo-1; i++) {
        rtn += to_string(arr[i]) + ", ";
    }
    rtn += to_string(arr[largo-1]) + "}";

    return rtn;
}
