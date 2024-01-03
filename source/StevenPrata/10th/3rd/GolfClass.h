#pragma once

class GolfClass
{
private:
    static constexpr int kLength = 40;
    char m_full_name_[kLength];
    int m_handicap_;
    
public:
    GolfClass();
    GolfClass(const char *name, const int handicap);
    int SetGolf();
    
    void SetHandicap(const int handicap);
    void ShowGolf() const;
};
