#pragma warning(disable : 4996)

#include "Cow.h"

#include <cstring>
#include <iostream>

//----------------------------------------------------------------------------------------------------
void Cow::Init(const char* name, const char* hobby, const double weight)
{
    strcpy_s(m_name_, 20, name);
    m_hobby_ = new char[strlen(hobby) + 1];
    strcpy(m_hobby_, hobby);
    m_weight_ = weight;
}

//----------------------------------------------------------------------------------------------------
Cow::Cow()
{
    m_hobby_ = nullptr;
    m_name_[0] = '\0';
    m_weight_ = 0.0;
}

//----------------------------------------------------------------------------------------------------
Cow::Cow(const char *name, const char *hobby, const double weight)
{
    Init(name, hobby, weight);
}

//----------------------------------------------------------------------------------------------------
Cow::Cow(const Cow &cow)
{
    Init(cow.m_name_, cow.m_hobby_, cow.m_weight_);
}

//----------------------------------------------------------------------------------------------------
Cow::~Cow()
{
    delete[] m_hobby_;
}

//----------------------------------------------------------------------------------------------------
Cow& Cow::operator=(const Cow &cow)
{
    if (this == &cow)
        return *this;
    
    delete[] m_hobby_;
    Init(cow.m_name_, cow.m_hobby_, cow.m_weight_);
    return *this;
}

//----------------------------------------------------------------------------------------------------
void Cow::ShowCow() const
{
    std::cout << "Cow's name: " << m_name_ << std::endl;
    std::cout << "Cow's hobby: " << m_hobby_ << std::endl;
    std::cout << "Cow's weight: " << m_weight_ << std::endl;
}

//----------------------------------------------------------------------------------------------------
