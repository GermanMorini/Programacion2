class Complex {
    public:
        Complex(float r, float i);

        Complex conjugado();

        Complex operator+(Complex c);
        Complex operator-(Complex c);
        Complex operator*(Complex c);

        void toString();
    private:
        float real, imag;
};
