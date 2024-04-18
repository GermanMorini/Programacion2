# Punteros

Tipo de dato que contiene la posición de memoria de un dato

~~~cpp
int i = 3;
int *p;
int *r;

// a estos punteros se les dicen 'alias' de i
p = &i; // '&' retorna la posición de memoria de una variable
r = p; // apunta a 'i'

*p = 10; // accede al lugar donde apunta
*r = 10; // equivalente al anterior

cin >> *p;
~~~

- La memoria se particiona y se distribuye entre el sistema operativo, las aplicaciónes, cosas del usuario...
- La memoria que es reservada para el sistema operativo no se puede acceder
