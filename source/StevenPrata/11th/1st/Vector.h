#pragma once
#include <iostream>

class Vector
{
public:
    enum Mode
    {
        kRectangle,
        kPolar
    };
    
private:
    Mode m_mode_;
    
    double m_x_;
    double m_y_;
    
    double m_magnitude_;
    double m_angle_;

    void SetMagnitude();
    void SetAngle();
    void SetX();
    void SetY();
    
public:
    Vector();
    Vector(double first, double second, Mode form = kRectangle);
    void Reset(double first, double second, Mode form = kRectangle);

    void SetPolarMode();
    void SetRectangleMode();
    
    double GetX() const { return m_x_; }
    double GetY() const { return m_y_; }
    double GetMagnitude() const { return m_magnitude_; }
    double GetAngle() const { return m_angle_; }
    
    Vector operator+(const Vector & second) const;
    Vector operator-(const Vector & second) const;
    Vector operator-() const;
    Vector operator*(double n) const;
    
    friend Vector operator*(double n, const Vector & vector);
    friend std::ostream & operator<<(std::ostream & output_stream, const Vector & vector);
};
