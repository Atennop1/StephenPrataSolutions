#include "Person.h"

#include <iostream>

//----------------------------------------------------------------------------------------------------
Person::Person()
{
    strcpy_s(m_first_name_, kLimit, "");
    m_last_name_ = "";
}

//----------------------------------------------------------------------------------------------------
Person::Person(const std::string& last_name, const char* first_name)
{
    strcpy_s(m_first_name_, kLimit, first_name);
    m_last_name_ = last_name;
}

//----------------------------------------------------------------------------------------------------
void Person::Show() const
{
    std::cout << m_first_name_ << " " << m_last_name_ << std::endl;
}

//----------------------------------------------------------------------------------------------------
void Person::FormalShow() const
{
    std::cout << m_last_name_ << ", " << m_first_name_ << std::endl;
}
//----------------------------------------------------------------------------------------------------
