#pragma once
#include <string>

class Person
{
private:
    static constexpr int kLimit = 25;
    char m_first_name_[kLimit] { };
    std::string m_last_name_;
    
public:
    Person();
    explicit Person(const std::string &last_name, const char *first_name = "Heyyou");

    void Show() const;
    void FormalShow() const;
};
