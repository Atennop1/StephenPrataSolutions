#include "BackAccount.h"

#include <iostream>

void BackAccount::Initialize(const std::string &owner_name, const std::string &account_number, const float balance = 0)
{
    m_owner_name_ = owner_name;
    m_account_number_ = account_number;
    m_balance_ = balance;
}

void BackAccount::ShowInformation() const
{
    std::cout << "Account owner: " << m_owner_name_ << std::endl;
    std::cout << "Account number: " << m_account_number_ << std::endl;
    std::cout << "Account balance: " << m_balance_ << std::endl;
}

void BackAccount::Put(const float value)
{
    m_balance_ += value;
}

void BackAccount::Take(const float value)
{
    if (value > m_balance_)
    {
        std::cout << "Can't take more money than contains\n";
        return;
    }

    m_balance_ -= value;
}