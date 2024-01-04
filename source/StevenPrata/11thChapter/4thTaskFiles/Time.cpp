#include "Time.h"

Time::Time(const int hours, const int minutes)
{
    m_hours_ = hours;
    m_minutes_ = minutes;
}

void Time::AddMinutes(const int minutes)
{
    m_minutes_ += minutes;
    m_hours_ += m_minutes_ / 60;
    m_minutes_ %= 60;
}

void Time::AddHours(const int hours)
{
    m_hours_ += hours;
}

void Time::Reset(const int hours, const int minutes)
{
    *this = Time(hours, minutes);
}

Time operator+(const Time& first, const Time& second)
{
    Time result;
    result.m_minutes_ = first.m_minutes_ + second.m_minutes_;
    result.m_hours_ = first.m_hours_ + second.m_hours_ + result.m_minutes_ / 60;
    result.m_minutes_ %= 60;
    return result;
}

Time operator-(const Time& first, const Time& second)
{
    Time result;
    const int first_minutes = first.m_minutes_ + first.m_hours_ * 60;
    const int second_minutes = second.m_minutes_ + second.m_hours_ * 60;

    result.m_minutes_ = (first_minutes - second_minutes) % 60;
    result.m_hours_ = (first_minutes - second_minutes) / 60;
    return result;
}

Time operator*(const Time& time, const double multiplier)
{
    Time result;
    const long total_minutes = (long)(multiplier * (double)(time.m_hours_ * 60 + time.m_minutes_));
    result.m_hours_ = total_minutes / 60;
    result.m_minutes_ = total_minutes % 60;
    return result;
}

std::ostream& operator<<(std::ostream& output_stream, const Time& time)
{
    output_stream << time.m_hours_ << " hours, " << time.m_minutes_ << " minutes";
    return output_stream;
}

