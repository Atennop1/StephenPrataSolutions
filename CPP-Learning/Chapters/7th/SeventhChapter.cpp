#include "SeventhChapter.h"

#include <array>
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
std::array<float, 10> RequestArray()
{
    float temp_number;
    auto numbers = std::array<float, 10> { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };
    std::cout << "Enter 10 numbers (q to quit)" << std::endl;

    std::cout << "First: ";
    for (float &number : numbers)
    {
        if (!(std::cin >> temp_number) || temp_number < 0)
            break;

        number = temp_number;
        std::cout << "Next: ";
    }

    return numbers;
}

float CalculateAverage(const std::array<float, 10>& numbers)
{
    float sum = 0;
    int count = 0;
    
    for (const float number : numbers)
    {
        if (number < 0)
            break;
        
        sum += number;
        count++;
    }

    return sum / count;
}

void DisplayResults(const std::array<float, 10>& numbers, float average_value)
{
    std::cout << "\nHere is your numbers: ";
    
    for (const float number : numbers)
        if (number >= 0)
            std::cout << number << " ";

    std::cout << std::endl << "Their average value: " << average_value;
}

void SeventhChapter::RunSecondTask() const
{
    const std::array<float, 10> numbers = RequestArray();
    const float average = CalculateAverage(numbers);
    DisplayResults(numbers, average);
}

//----------------------------------------------------------------------------------------------------
