#include <iostream>

namespace SeventhChapter
{
    int CalculateFactorial(int n)
    {
        if (n == 1 || n == 0)
            return 1;

        return n * CalculateFactorial(n - 1);
    }

    void RunFifthTask()
    {
        int temp_n;
        std::cout << "Enter the number whose factorial you want to calculate: ";

        while (std::cin >> temp_n && temp_n >= 0)
        {
            std::cout << temp_n << "! is " << CalculateFactorial(temp_n) << std::endl;
            std::cout << "\nNext number (q or negative number to quit): ";
        }

        std::cout << "Bye!\n";
    }
}