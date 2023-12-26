#pragma once
#include <string>

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
