#include "SeventhChapter.h"

#include <iostream>

//----------------------------------------------------------------------------------------------------
float CalculateHarmonicMean(float first, float second)
{
    return 2.0f * first * second / (first + second);
}

void SeventhChapter::RunFirstTask() const
{
    float first = 0;
    float second = 0;

    std::cout << "Enter two numbers: ";
    while (std::cin >> first >> second && first != 0.0f && second != 0.0f)
    {
        std::cout << "Harmonic mean of these numbers: " << CalculateHarmonicMean(first, second) << std::endl;
        std::cout << "Enter two numbers: ";
    }

    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
