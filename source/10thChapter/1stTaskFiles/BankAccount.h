#ifndef STEPHENPRATASOLUTIONS_83EE1FD0641C4659A05B52FBE313BFE2
#define STEPHENPRATASOLUTIONS_83EE1FD0641C4659A05B52FBE313BFE2

#include <string>

class BankAccount
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

#endif
