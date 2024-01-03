#include "Mass1.h"

//----------------------------------------------------------------------------------------------------
Mass1::Mass1(const double pounds)
{
    m_stone_ = (int)pounds / kPoundsPerStone;
    m_pounds_left_ = (int)pounds % kPoundsPerStone + pounds - (int)pounds;
    m_all_pounds_ = pounds;
    m_mode_ = kPounds;
}

//----------------------------------------------------------------------------------------------------
Mass1::Mass1(const int stones, const double pounds, const Mode mode)
{
    m_stone_ = stones;
    m_pounds_left_ = pounds;
    m_all_pounds_ = stones * kPoundsPerStone + pounds;
    m_mode_ = mode;
}

//----------------------------------------------------------------------------------------------------
Mass1 Mass1::operator+(const Mass1& mass) const
{
    return Mass1(m_all_pounds_ + mass.m_all_pounds_);
}

//----------------------------------------------------------------------------------------------------
Mass1 Mass1::operator-(const Mass1& mass) const
{
    return Mass1(m_all_pounds_ - mass.m_all_pounds_);
}

//----------------------------------------------------------------------------------------------------
Mass1 Mass1::operator*(const double n) const
{
    return Mass1(m_all_pounds_ * n);
}

//----------------------------------------------------------------------------------------------------
Mass1 operator*(const double n, const Mass1 &mass)
{
    return mass * n;
}

//----------------------------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& output_stream, const Mass1& mass)
{
    if (mass.m_mode_ == Mass1::kStones)
    {
        output_stream << mass.m_stone_ << " stone, " << mass.m_pounds_left_ << " pounds\n";
        return output_stream;
    }

    output_stream << mass.m_all_pounds_ << " pounds\n";
    return output_stream;
}

//----------------------------------------------------------------------------------------------------
