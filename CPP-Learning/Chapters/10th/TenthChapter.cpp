#include "TenthChapter.h"

#include <iostream>
#include <ostream>
#include <string>

//----------------------------------------------------------------------------------------------------
class BackAccount
{
private:
    std::string m_owner_name_;
    std::string m_account_number_;
    float m_balance_ = 0;

public:
    void Initialize(const std::string& owner_name, const std::string& account_number, float balance);
    void ShowInformation() const;
    void Put(float value);
    void Take(float value);
};

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

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunFirstTask() const
{
    auto account = BackAccount();
    account.Initialize("Atennop", "9374638964", 100);

    account.ShowInformation();
    account.Put(200);
    std::cout << std::endl;
    account.ShowInformation();

    std::cout << std::endl;
    account.Take(350);
    std::cout << std::endl;
    account.ShowInformation();

    account.Take(250);
    std::cout << std::endl;
    account.ShowInformation();
}

//----------------------------------------------------------------------------------------------------
