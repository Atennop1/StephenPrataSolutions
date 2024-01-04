#include <iostream>

namespace SeventhChapter
{
    long double CalculateProbability(unsigned int numbers, unsigned int picks)
    {
        long double result = 1.0;
        long double n;
        unsigned int p;

        for (n = numbers, p = picks; p > 0; n--, p--)
            result *= n / p;

        return result;
    }

    void RunFourthTask()
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
}