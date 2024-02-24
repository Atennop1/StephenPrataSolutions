#pragma once
#include <ostream>

class VectorRect
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
    
public:
    VectorRect();
    VectorRect(double first, double second, Mode form = kRectangle);
    void Reset(double first, double second, Mode form = kRectangle);

    void SetPolarMode();
    void SetRectangleMode();
    
    double GetX() const { return m_x_; }
    double GetY() const { return m_y_; }
    double GetMagnitude() const;
    double GetAngle() const;
    
    VectorRect operator+(const VectorRect &second) const;
    VectorRect operator-(const VectorRect &second) const;
    VectorRect operator-() const;
    VectorRect operator*(double n) const;
    
    friend VectorRect operator*(double n, const VectorRect & vector);
    friend std::ostream & operator<<(std::ostream & output_stream, const VectorRect & vector);
};
