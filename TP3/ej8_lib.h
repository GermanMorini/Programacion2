struct Fecha {
    int dia, mes, anio;
};

struct Datos {
    char* nombre;
    char sexo;
    int dni;
    float peso, altura;
    int edad;
    Fecha nacimiento;
};

class Persona {
    public:
        Persona();

        Persona(char* n, int ed, char s);

        float calcularIMC();

        int calcularEdad();

        bool esMayorDeEdad();

        char* toString();

        char* getNombre();
        char getSexo();
        int getDni();
        float getPeso();
        float getAltura();
        int getEdad();
        Fecha getNacimiento();
        
        void setNombre(char* n);
        void setSexo(char s);
        void setDni(int d);
        void setPeso(float p);
        void setAltura(float a);
        void setEdad(int e);
        void setNacimiento(Fecha n);
    private:
        Datos datos;
};
