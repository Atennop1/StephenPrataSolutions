#include "Plorg.h"

#include <cstring>
#include <iostream>

Plorg::Plorg(const char *name)
{
    strcpy_s(m_name_, 19, name);
    m_ci_ = 50;
}

void Plorg::SetCI(const int ci)
{
    m_ci_ = ci;
}

void Plorg::ShowFields() const
{
    std::cout << "Plorg's name: " << m_name_ << std::endl;
    std::cout << "Plorg's CI: " << m_ci_ << std::endl;
}
