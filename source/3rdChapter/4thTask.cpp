#include <iostream>

namespace ThirdChapter
{
    void RunFourthTask()
    {
        long long total_seconds;
        std::cout << "Enter the number of seconds: ";
        std::cin >> total_seconds;

        constexpr long long seconds_in_minute = 60;
        constexpr long long minutes_in_hour = 60;
        constexpr long long hours_in_day = 24;

        const long long days = total_seconds / (seconds_in_minute * minutes_in_hour * hours_in_day);
        const long long hours = total_seconds / (seconds_in_minute * minutes_in_hour) % hours_in_day;
        const long long minutes = total_seconds / seconds_in_minute % minutes_in_hour;
        const long long seconds = total_seconds % seconds_in_minute;

        std::cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
    }
}