#include <iostream>
#include <array>

namespace SeventhChapter
{
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

        return sum / static_cast<float>(count);
    }

    void DisplayResults(const std::array<float, 10>& numbers, float average_value)
    {
        std::cout << "\nHere is your numbers: ";

        for (const float number : numbers)
            if (number >= 0)
                std::cout << number << " ";

        std::cout << std::endl << "Their average value: " << average_value;
    }

    void RunSecondTask()
    {
        const std::array<float, 10> numbers = RequestArray();
        const float average = CalculateAverage(numbers);
        DisplayResults(numbers, average);
    }
}