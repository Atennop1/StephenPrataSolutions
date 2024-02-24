#include <iostream>

namespace ThirdChapter
{
    void RunSeventhTask()
    {
        float fuel_for_100_kms_in_liters;
        std::cout << "Enter amount of fuel for 100 kms in liters: ";
        std::cin >> fuel_for_100_kms_in_liters;

        const float miles_for_1_gallon = 1.0f / (fuel_for_100_kms_in_liters / 3.875f / 62.14f);
        std::cout << "Amount of miles for gallon: " << miles_for_1_gallon << std::endl;
    }
}