#include <iostream>

namespace SecondChapter
{
    void RunFourthTask()
    {
        int age_in_years;
        std::cout << "Enter your age in years: ";

        std::cin >> age_in_years;
        std::cout << "Your age in month is " << age_in_years * 12 << std::endl;
    }
}
