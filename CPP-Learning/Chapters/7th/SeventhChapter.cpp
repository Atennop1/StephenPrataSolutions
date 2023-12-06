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
struct Box
{
    char maker_[40];
    float height_;
    float width_;
    float length_;
    float volume_;
};

void FunctionA(Box box)
{
    std::cout << "Box maker: " << box.maker_ << std::endl;
    std::cout << "Box height: " << box.height_ << std::endl;
    std::cout << "Box width: " << box.width_ << std::endl;
    std::cout << "Box length: " << box.length_ << std::endl;
    std::cout << "Box volume: " << box.volume_ << std::endl << std::endl;
}

void FunctionB(Box &box)
{
    box.volume_ = box.height_ * box.width_ * box.length_;
}

void SeventhChapter::RunThirdTask() const
{
    Box box = { "Pavel Durov", 14.3f, 7.4f, 11.7f, 0.0f };
    FunctionA(box);
    
    FunctionB(box);
    FunctionA(box);
}

//----------------------------------------------------------------------------------------------------
long double CalculateProbability(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    long double n;
    unsigned int p;
    
    for (n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p;

    return result;
}

void SeventhChapter::RunFourthTask() const
{
    unsigned int total;
    unsigned int choices;
    unsigned int mega_total;

    std::cout << "Enter the total number of choices on the game card and the number of picks allowed: ";

    while (std::cin >> total >> choices && choices <= total)
    {
        std::cout << "Enter the number of cards for megachoice: ";
        if (!(std::cin >> mega_total))
            break;

        std::cout << "You have one chance in " << CalculateProbability(total, choices) * CalculateProbability(mega_total, 1) << " of winning\n";
        std::cout << "\nNext two numbers (q to quit): ";
    }

    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
