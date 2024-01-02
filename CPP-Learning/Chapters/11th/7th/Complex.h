#pragma once
#include <iostream>

class Complex
{
private:
    double m_real_;
    double m_imaginary_;
    
public:
    Complex();
    explicit Complex(double real, double imaginary = 0.0);

    Complex operator+(const Complex &second) const;
    Complex operator-(const Complex &second) const;
    Complex operator*(const Complex &second) const;
    Complex operator*(double n) const;
    Complex operator~() const;
    
    friend Complex operator*(double n, const Complex &complex);
    friend std::ostream& operator<<(std::ostream &output_stream, const Complex &complex);
    friend std::istream& operator>>(std::istream &input_stream, Complex &complex);
};
