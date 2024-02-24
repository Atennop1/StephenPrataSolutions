#include <iostream>

namespace SecondChapter
{
    void RunFifthTask()
    {
        float temperature_in_celsius;
        std::cout << "Enter temperature in Celsius: ";

        std::cin >> temperature_in_celsius;
        std::cout << temperature_in_celsius << " degrees in Celsius is " << 1.8f * temperature_in_celsius + 32 << " degrees Fahrenheit" << std::endl;
    }
}
