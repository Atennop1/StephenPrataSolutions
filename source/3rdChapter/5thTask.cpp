#include <iostream>

namespace ThirdChapter
{
    void RunFifthTask()
    {
        long long world_population;
        std::cout << "Enter the world's population: ";
        std::cin >> world_population;

        long long usa_population;
        std::cout << "Enter the population of the US: ";
        std::cin >> usa_population;

        std::cout << "The population of the US is " << static_cast<double>(usa_population) / static_cast<double>(world_population) * 100.0 << "% of the world population";
    }
}