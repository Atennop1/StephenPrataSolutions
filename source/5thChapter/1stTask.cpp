#include <iostream>

namespace FifthChapter
{
    void RunFirstTask()
    {
        int first;
        int second;
        int result = 0;

        std::cout << "Enter first number: ";
        std::cin >> first;

        std::cout << "Enter second number: ";
        std::cin >> second;

        for (int i = first; i <= second; i++)
            result += i;

        std::cout << "Result is " << result << std::endl;
    }
}