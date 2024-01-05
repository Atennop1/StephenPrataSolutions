#include <iostream>

namespace SeventhChapter
{
    double Calculate(const double first, const double second, double action(double, double))
    {
        return action(first, second);
    }

    double Add(const double first, const double second)
    {
        return first + second;
    }

    double Subtract(const double first, const double second)
    {
        return first - second;
    }

    double Multiply(const double first, const double second)
    {
        return first * second;
    }

    double Divide(const double first, const double second)
    {
        return first / second;
    }

    void RunTenthTask()
    {
        double (*actions[4])(double, double) = { Add, Subtract, Multiply, Divide };
        double first;
        double second;

        std::cout << "Enter numbers pair: ";
        while (std::cin >> first >> second)
        {
            for (int i = 0; i < 4; i++)
                std::cout << "#" << i + 1 << " function result: " << Calculate(first, second, actions[i]) << std::endl;

            std::cout << "\nEnter another numbers pair (q to quit): ";
        }
    }
}