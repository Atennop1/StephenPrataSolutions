#include <iostream>

namespace ThirdChapter
{
    void RunSixthTask()
    {
        float distance;
        std::cout << "Enter distance in kms: ";
        std::cin >> distance;

        float fuel;
        std::cout << "Enter amount of used fuel in liters: ";
        std::cin >> fuel;

        std::cout << "Amount of fuel for 100 kms in liters: " << fuel / (distance / 100) << std::endl;
    }
}