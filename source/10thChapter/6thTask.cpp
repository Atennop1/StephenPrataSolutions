#include <iostream>
#include "6thTaskFiles/Move.h"

namespace TenthChapter
{
    void RunSixthTask()
    {
        auto first = Move(12.7, 11.2);
        auto second = Move(7.9, 4.8);

        first.ShowMove();
        std::cout << std::endl;
        second.ShowMove();

        std::cout << std::endl;
        first.Add(second).ShowMove();
        std::cout << std::endl;

        first.Reset();
        second.Reset();

        first.ShowMove();
        std::cout << std::endl;
        second.ShowMove();
    }
}