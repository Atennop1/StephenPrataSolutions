#include <iostream>

namespace SecondChapter
{
    void SeventhTaskMethod(int hours, int minutes)
    {
        std::cout << "Time: " << hours << ":" << minutes << std::endl;
    }

    void RunSeventhTask()
    {
        int number_of_hours;
        int number_of_minutes;

        std::cout << "Enter number of hours: ";
        std::cin >> number_of_hours;

        std::cout << "Enter number of minutes: ";
        std::cin >> number_of_minutes;

        SeventhTaskMethod(number_of_hours, number_of_minutes);
    }
}
