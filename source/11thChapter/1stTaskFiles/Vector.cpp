#include "Vector.h"

#include <cmath>
#include "iostream"

const double kRadiansToDegrees = 45.0 / atan(1.0);

void Vector::SetMagnitude()
{
    m_magnitude_ = sqrt(m_x_ * m_x_ + m_y_ * m_y_);
}

void Vector::SetAngle()
{
    m_angle_ = m_x_ == 0.0 && m_y_ == 0.0 ? 0.0 : atan2(m_y_, m_x_);
}

void Vector::SetX()
{
    m_x_ = m_magnitude_ * cos(m_angle_);
}

void Vector::SetY()
{
    m_y_ = m_magnitude_ * sin(m_angle_);
}

Vector::Vector()
{
    m_x_ = m_y_ = m_magnitude_ = m_angle_ = 0.0;
    m_mode_ = kRectangle;
}

Vector::Vector(const double first, const double second, const Mode form)
{
    m_mode_ = form;
    
    if (form == kRectangle)
    {
        m_x_ = first;
        m_y_ = second;
        SetMagnitude();
        SetAngle();
        return;
    }
    
    if (form == kPolar)
    {
        m_magnitude_ = first;
        m_angle_ = second / kRadiansToDegrees;
        SetX();
        SetY();
        return;
    }
    
    std::cout << "Incorrect 3rdChapter argument to Vector() -- vector set to 0\n";
    m_x_ = m_y_ = m_magnitude_ = m_angle_ = 0.0;
    m_mode_ = kRectangle;
}

void Vector::Reset(const double first, const double second, const Mode form)
{
    *this = Vector(first, second, form);
}

void Vector::SetPolarMode()
{
    m_mode_ = kPolar;
}

void Vector::SetRectangleMode()
{
    m_mode_ = kRectangle;
}

Vector Vector::operator+(const Vector &second) const
{
    return Vector(m_x_ + second.m_x_, m_y_ + second.m_y_);
}

Vector Vector::operator-(const Vector &second) const
{
    return Vector(m_x_ - second.m_x_, m_y_ - second.m_y_);
}

Vector Vector::operator-() const
{
    return Vector(-m_x_, -m_y_);
}

Vector Vector::operator*(const double n) const
{
    return Vector(n * m_x_, n * m_y_);
}

Vector operator*(const double n, const Vector &vector)
{
    return vector * n;
}

std::ostream & operator<<(std::ostream &output_stream, const Vector &vector)
{
    if (vector.m_mode_ == Vector::kRectangle)
    {
        output_stream << "(x, y) = (" << vector.m_x_ << ", " << vector.m_y_ << ")";
        return output_stream;
    }

    if (vector.m_mode_ == Vector::kPolar)
    {
        output_stream << "(m, a) = (" << vector.m_magnitude_ << ", " << vector.m_angle_ * kRadiansToDegrees << ")";
        return output_stream;
    }

    output_stream << "Vector object mode is invalid";
    return output_stream;
}
