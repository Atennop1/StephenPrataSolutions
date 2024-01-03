#pragma once

class Plorg
{
private:
    char m_name_[19];
    int m_ci_;
    
public:
    Plorg(const char *name = "Plorga");

    void SetCI(int ci);
    void ShowFields() const;
};
