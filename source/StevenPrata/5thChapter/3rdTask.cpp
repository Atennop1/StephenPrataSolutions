#include <iostream>
#include <array>

namespace FifthChapter
{
    void RunThirdTask()
    {
        int n;
        int result = 0;

        std::cout << "Enter the number: ";
        std::cin >> n;

        while (n != 0)
        {
            result += n;
            std::cout << "Current sum is " << result << std::endl << std::endl;

            std::cout << "Enter the number: ";
            std::cin >> n;
        }

        std::cout << "Final sum is " << result << std::endl;
    }
}