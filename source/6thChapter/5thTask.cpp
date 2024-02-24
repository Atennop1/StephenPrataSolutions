#include <iostream>

namespace SixthChapter
{
    void RunFifthTask()
    {
        float count = 0;
        std::cout << "Enter twarps count: ";
        std::cin >> count;

        while (std::cin && count >= 0)
        {
            float duty = 0;

            if (count > 35000)
            {
                duty += (count - 35000) * 0.2f;
                count = 35000;
            }

            if (count > 15000)
            {
                duty += (count - 15000) * 0.15f;
                count = 15000;
            }

            if (count > 5000)
                duty += (count - 5000) * 0.1f;

            std::cout << "Duty: " << duty << std::endl;
            std::cout << "\nNext: ";
            std::cin >> count;
        }
    }
}