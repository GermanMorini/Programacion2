class Persona {
    public:
        Persona();
        Persona(char* n, int e, char s);
        Persona(char* n, int e, char s, float p, float a);
        
        int calcularIMC();
        bool esMayorDeEdad();
        void comprobarSexo(char s);
        void generaDNI();

        char* getNombre();
        void setNombre(char* n);

        int getEdad();
        void setEdad(int e);

        char getSexo();
        void setSexo(char s);

        float getPeso();
        void setPeso(float p);

        float getAltura();
        void setAltura(float a);

    private:
        char* nombre;
        int edad, dni;
        char sexo;
        float peso, altura;
};