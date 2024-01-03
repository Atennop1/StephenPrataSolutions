// ReSharper disable CppClangTidyClangDiagnosticFloatEqual
#include "Mass2.h"

#include <iostream>

//----------------------------------------------------------------------------------------------------
Mass2::Mass2()
{
    m_all_pounds_ = m_pounds_left_ = m_stone_ = 0;
}

//----------------------------------------------------------------------------------------------------
Mass2::Mass2(const double pounds)
{
    m_stone_ = (int)pounds / kPoundsPerStone;
    m_pounds_left_ = (int)pounds % kPoundsPerStone + pounds - (int)pounds;
    m_all_pounds_ = pounds;
}

//----------------------------------------------------------------------------------------------------
Mass2::Mass2(const int stones, const double pounds)
{
    m_stone_ = stones;
    m_pounds_left_ = pounds;
    m_all_pounds_ = stones * kPoundsPerStone + pounds;
}

//----------------------------------------------------------------------------------------------------
void Mass2::ShowPounds() const
{
    std::cout << m_all_pounds_ << " pounds\n";
}

//----------------------------------------------------------------------------------------------------
void Mass2::ShowStones() const
{
    std::cout << m_stone_ << " stone, " << m_pounds_left_ << " pounds\n";
}

//----------------------------------------------------------------------------------------------------
bool operator>(const Mass2& mass1, const Mass2& mass2)
{
    return mass1.m_all_pounds_ > mass2.m_all_pounds_;
}

//----------------------------------------------------------------------------------------------------
bool operator<(const Mass2& mass1, const Mass2& mass2)
{
    return mass1.m_all_pounds_ < mass2.m_all_pounds_;
}

//----------------------------------------------------------------------------------------------------
bool operator>=(const Mass2& mass1, const Mass2& mass2)
{
    return mass1.m_all_pounds_ >= mass2.m_all_pounds_;
}

//----------------------------------------------------------------------------------------------------
bool operator<=(const Mass2& mass1, const Mass2& mass2)
{
    return mass1.m_all_pounds_ <= mass2.m_all_pounds_;
}

//----------------------------------------------------------------------------------------------------
bool operator==(const Mass2& mass1, const Mass2& mass2)
{
    return mass1.m_all_pounds_ == mass2.m_all_pounds_;
}

//----------------------------------------------------------------------------------------------------
bool operator!=(const Mass2& mass1, const Mass2& mass2)
{
    return mass1.m_all_pounds_ != mass2.m_all_pounds_;
}

//----------------------------------------------------------------------------------------------------
