#include <iostream>

namespace SecondChapter
{
    void RunSixthTask()
    {
        double length_in_light_years;
        std::cout << "Enter length in light years: ";

        std::cin >> length_in_light_years;
        std::cout << length_in_light_years << " light years = " << 63240 * length_in_light_years << " astronomical units" << std::endl;
    }
}
