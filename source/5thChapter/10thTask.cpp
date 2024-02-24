#include <iostream>

namespace FifthChapter
{
    void RunTenthTask()
    {
        setlocale(LC_ALL, "ru-RU");
        std::cout << "Введите количество строк: ";

        int n = 0;
        std::cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int m = 1; m < n - i; m++)
                std::cout << ".";

            for (int m = 0; m < i + 1; m++)
                std::cout << "*";

            std::cout << std::endl;
        }
    }
}