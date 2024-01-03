#include <iostream>

namespace SecondChapter
{
    void RunSecondTask()
    {
        int furlongs_count;
        std::cout << "Enter number of furlongs: ";

        std::cin >> furlongs_count;
        std::cout << furlongs_count << " furlongs is equal to " << furlongs_count * 220 << " yards" << std::endl;
    }
}
