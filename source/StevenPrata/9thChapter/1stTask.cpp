#include <iostream>
#include "1stTaskFiles/Golf.h"

namespace NinthChapter
{
    void RunFirstTask()
    {
        int n = 0;
        std::cout << "Enter golfers count: ";
        (std::cin >> n).get();
        std::cout << std::endl;

        int count = 0;
        const auto golfers = new Golf[n];
        for (int i = 0; i < n; i++)
        {
            if (!SetGolf(golfers[i]))
            {
                std::cout << std::endl;
                break;
            }

            count++;
            std::cout << std::endl;
        }

        for (int i = 0; i < count; i++)
        {
            std::cout << "Golfer #" << i + 1 << std::endl;
            ShowGolf(golfers[i]);
            std::cout << std::endl;
        }

        delete[] golfers;
    }
}