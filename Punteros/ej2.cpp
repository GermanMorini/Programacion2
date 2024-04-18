#include <iostream>

using namespace std;

int main() {
	int z;
	int* p;

	p = &z;

	cout << "Ingrese un valor: ";
	cin >> *p;

	cout << "Valor de z: " << *p << " (" << p << ")" << endl;
}
