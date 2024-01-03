#pragma once
#include <ostream>

class Time
{
private:
    int m_hours_;
    int m_minutes_;
    
public:
    Time(int hours = 0, int minutes = 0);

    void AddMinutes(int minutes);
    void AddHours(int hours);
    void Reset(int hours = 0, int minutes = 0);

    friend Time operator+(const Time &first, const Time& second);
    friend Time operator-(const Time &first, const Time& second);
    friend Time operator*(const Time &time, double multiplier);
    friend Time operator*(const double multiplier, const Time &time) { return time * multiplier; }
    friend std::ostream& operator<<(std::ostream &output_stream, const Time &time);
};
