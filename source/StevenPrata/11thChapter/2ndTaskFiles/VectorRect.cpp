#include "VectorRect.h"

#include <cmath>
#include "iostream"

const double kRadiansToDegrees = 45.0 / atan(1.0);

VectorRect::VectorRect()
{
    m_x_ = m_y_ = 0.0;
    m_mode_ = kRectangle;
}

VectorRect::VectorRect(const double first, const double second, const Mode form)
{
    m_mode_ = form;
    
    if (form == kRectangle)
    {
        m_x_ = first;
        m_y_ = second;
        return;
    }
    
    if (form == kPolar)
    {
        m_x_ = first * cos(second);
        m_y_ = first * sin(second);
        return;
    }
    
    std::cout << "Incorrect 3rdChapter argument to Vector() -- vector set to 0\n";
    m_x_ = m_y_ = 0.0;
    m_mode_ = kRectangle;
}

void VectorRect::Reset(const double first, const double second, const Mode form)
{
    *this = VectorRect(first, second, form);
}

void VectorRect::SetPolarMode()
{
    m_mode_ = kPolar;
}

void VectorRect::SetRectangleMode()
{
    m_mode_ = kRectangle;
}

double VectorRect::GetMagnitude() const
{
    return sqrt(m_x_ * m_x_ + m_y_ * m_y_);
}

double VectorRect::GetAngle() const
{
    return m_x_ == 0.0 && m_y_ == 0.0 ? 0.0 : atan2(m_y_, m_x_);
}

VectorRect VectorRect::operator+(const VectorRect &second) const
{
    return VectorRect(m_x_ + second.m_x_, m_y_ + second.m_y_);
}

VectorRect VectorRect::operator-(const VectorRect &second) const
{
    return VectorRect(m_x_ - second.m_x_, m_y_ - second.m_y_);
}

VectorRect VectorRect::operator-() const
{
    return VectorRect(-m_x_, -m_y_);
}

VectorRect VectorRect::operator*(const double n) const
{
    return VectorRect(n * m_x_, n * m_y_);
}

VectorRect operator*(const double n, const VectorRect &vector)
{
    return vector * n;
}

std::ostream & operator<<(std::ostream &output_stream, const VectorRect &vector)
{
    if (vector.m_mode_ == VectorRect::kRectangle)
    {
        output_stream << "(x, y) = (" << vector.m_x_ << ", " << vector.m_y_ << ")";
        return output_stream;
    }

    if (vector.m_mode_ == VectorRect::kPolar)
    {
        output_stream << "(m, a) = (" << vector.GetMagnitude() << ", " << vector.GetAngle() * kRadiansToDegrees << ")";
        return output_stream;
    }

    output_stream << "Vector object mode is invalid";
    return output_stream;
}
