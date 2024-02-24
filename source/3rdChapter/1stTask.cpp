#include <iostream>

namespace ThirdChapter
{
    void RunFirstTask()
    {
        constexpr int inches_in_foot = 12;

        int height_in_inches;
        std::cout << "Enter your height in inches: ___\b\b\b";

        std::cin >> height_in_inches;
        std::cout << "Your height is " << height_in_inches / inches_in_foot << " feet and " << height_in_inches % inches_in_foot << " inches.\n";
    }
}