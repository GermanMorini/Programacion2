#include <exception>
#include <iostream>

class ZeroDivException : public std::exception {
    private:
        std::string mensaje = "No se puede dividir por 0";
    public:       
        std::string getMessage() {return mensaje;};
};
