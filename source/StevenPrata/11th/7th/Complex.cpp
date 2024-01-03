#include "Complex.h"

//----------------------------------------------------------------------------------------------------
Complex::Complex()
{
    m_real_ = m_imaginary_ = 0.0;
}

//----------------------------------------------------------------------------------------------------
Complex::Complex(const double real, const double imaginary)
{
    m_real_ = real;
    m_imaginary_ = imaginary;
}

//----------------------------------------------------------------------------------------------------
Complex Complex::operator+(const Complex &second) const
{
    return Complex(m_real_ + second.m_real_, m_imaginary_ + second.m_imaginary_);
}

//----------------------------------------------------------------------------------------------------
Complex Complex::operator-(const Complex &second) const
{
    return Complex(m_real_ - second.m_real_, m_imaginary_ - second.m_imaginary_);
}

//----------------------------------------------------------------------------------------------------
Complex Complex::operator*(const Complex &second) const
{
    return Complex(m_real_ * second.m_real_ - m_imaginary_ * second.m_imaginary_, m_real_ * second.m_imaginary_ + m_imaginary_ * second.m_real_);
}

//----------------------------------------------------------------------------------------------------
Complex Complex::operator*(const double n) const
{
    return Complex(m_real_ * n, m_imaginary_ * n);
}

//----------------------------------------------------------------------------------------------------
Complex Complex::operator~() const
{
    return Complex(m_real_, -m_imaginary_);
}

//----------------------------------------------------------------------------------------------------
Complex operator*(const double n, const Complex &complex)
{
    return complex * n;
}

//----------------------------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream &output_stream, const Complex &complex)
{
    output_stream << "(" << complex.m_real_ << ", " << complex.m_imaginary_ << "i)";
    return output_stream;
}

//----------------------------------------------------------------------------------------------------
std::istream& operator>>(std::istream &input_stream, Complex &complex)
{
    std::cout << "real: ";
    if (!(input_stream >> complex.m_real_))
        return input_stream;

    input_stream.get();
    std::cout << "imaginary: ";
    return input_stream >> complex.m_imaginary_;
}

//----------------------------------------------------------------------------------------------------
