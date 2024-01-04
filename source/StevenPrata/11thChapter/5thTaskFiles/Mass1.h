#pragma once
#include <ostream>

class Mass1
{
public:
    enum Mode
    {
        kStones,
        kPounds
    };
    
private:
    Mode m_mode_;
    static constexpr int kPoundsPerStone = 14;
    
    int m_stone_;
    double m_pounds_left_;
    double m_all_pounds_;
    
public:
    explicit Mass1(double pounds = 0.0);
    Mass1(int stones, double pounds, Mode mode = kStones);
    ~Mass1() = default;
    
    void SetStonesMode() { m_mode_ = kStones; }
    void SetPoundsMode() { m_mode_ = kPounds; }
    
    Mass1 operator+(const Mass1 &mass) const;
    Mass1 operator-(const Mass1 &mass) const;
    Mass1 operator*(double n) const;
    
    friend Mass1 operator*(double n, const Mass1 &mass);
    friend std::ostream& operator<<(std::ostream &output_stream, const Mass1 &mass);
};
