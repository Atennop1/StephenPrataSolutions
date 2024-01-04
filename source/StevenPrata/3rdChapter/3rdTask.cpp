#include <iostream>

namespace ThirdChapter
{
    void RunThirdTask()
    {
        std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;

        int degrees;
        std::cout << "First, enter the degrees: ";
        std::cin >> degrees;

        int minutes;
        std::cout << "Next, enter the minutes of arc: ";
        std::cin >> minutes;

        int seconds;
        std::cout << "Finally, enter the seconds of arc: ";
        std::cin >> seconds;

        constexpr int minutes_in_degree = 60;
        constexpr int seconds_in_degree = 3600;

        const double total_degrees = degrees + static_cast<double>(minutes) / minutes_in_degree + static_cast<double>(seconds) / seconds_in_degree;
        std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total_degrees << " degrees";
    }
}