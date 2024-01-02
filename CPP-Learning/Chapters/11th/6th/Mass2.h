#pragma once

class Mass2
{
private:
    static constexpr int kPoundsPerStone = 14;
    
    int m_stone_;
    double m_pounds_left_;
    double m_all_pounds_;
    
public:
    Mass2();
    explicit Mass2(double pounds);
    Mass2(int stones, double pounds);
    ~Mass2() = default;
    
    void ShowPounds() const;
    void ShowStones() const;
    
    friend bool operator>(const Mass2 &mass1, const Mass2 &mass2);
    friend bool operator<(const Mass2 &mass1, const Mass2 &mass2);
    friend bool operator>=(const Mass2 &mass1, const Mass2 &mass2);
    friend bool operator<=(const Mass2 &mass1, const Mass2 &mass2);
    friend bool operator==(const Mass2 &mass1, const Mass2 &mass2);
    friend bool operator!=(const Mass2 &mass1, const Mass2 &mass2);
};
