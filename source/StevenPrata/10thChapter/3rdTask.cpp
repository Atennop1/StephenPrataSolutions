#include <iostream>
#include "3rdTaskFiles/GolfClass.h"

namespace TenthChapter
{
    void RunThirdTask()
    {
        int n = 0;
        std::cout << "Enter golfers count: ";
        (std::cin >> n).get();
        std::cout << std::endl;

        int count = 0;
        const auto golfers = new GolfClass[n] { };
        for (int i = 0; i < n; i++)
        {
            if (!golfers[i].SetGolf())
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
            golfers[i].ShowGolf();
            std::cout << std::endl;
        }

        delete[] golfers;
    }
}