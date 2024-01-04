#include <iostream>
#include "2ndTaskFiles/VectorRect.h"
#include "5thTaskFiles/Mass1.h"

namespace EleventhChapter
{
    void RunFifthTask()
    {
        auto first = Mass1(17.3);
        auto second = Mass1(5, 2.3, Mass1::kStones);

        std::cout << "First: " << first;
        std::cout << "Second: " << second;

        first.SetStonesMode();
        second.SetPoundsMode();

        std::cout << std::endl << "First: " << first;
        std::cout << "Second: " << second;

        std::cout << std::endl << "Sum: " << first + second;
        std::cout << "Difference: " << second - first;

        std::cout << "First * 1.7: " << 1.7 * first;
        std::cout << "Second * 1.3: " << second * 1.3;
    }
}