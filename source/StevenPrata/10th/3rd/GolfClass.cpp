#include "GolfClass.h"

#include <cstring>
#include <iostream>

//----------------------------------------------------------------------------------------------------
GolfClass::GolfClass()
{
    strcpy_s(m_full_name_, kLength, "");
    SetHandicap(0);
}

//----------------------------------------------------------------------------------------------------
GolfClass::GolfClass(const char* name, const int handicap)
{
    strcpy_s(m_full_name_, kLength, name);
    SetHandicap(handicap);
}

//----------------------------------------------------------------------------------------------------
int GolfClass::SetGolf()
{
    char name[kLength];
    int handicap;
    
    std::cout << "Enter golfer's name: ";
    if (!std::cin.get(name, kLength))
        return 0;

    std::cout << "Enter golfer's handicap: ";
    (std::cin >> handicap).get();

    *this = GolfClass(name, handicap);
    return 1;
}

//----------------------------------------------------------------------------------------------------
void GolfClass::SetHandicap(const int handicap)
{
    m_handicap_ = handicap;
}

//----------------------------------------------------------------------------------------------------
void GolfClass::ShowGolf() const
{
    std::cout << "Golfer's name: " << m_full_name_ << std::endl;
    std::cout << "Golfer's handicap: " << m_handicap_ << std::endl;
}
//----------------------------------------------------------------------------------------------------
