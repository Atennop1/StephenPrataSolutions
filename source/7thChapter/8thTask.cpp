#include <iostream>

namespace SeventhChapter
{
    constexpr int kSeasons = 4;
    const char* kSeasonsNames[4] = { "Spring", "Summer", "Fall" , "Winter" };

    void FillA(double expenses[])
    {
        for (int i = 0; i < kSeasons; i++)
        {
            std::cout << "Enter " << kSeasonsNames[i] << " expenses: ";
            std::cin >> expenses[i];
        }
    }

    void ShowA(const double expenses[])
    {
        double total = 0.0;
        std::cout << "EXPENSES\n";

        for (int i = 0; i < kSeasons; i++)
        {
            std::cout << kSeasonsNames[i] << ": $" << expenses[i] << std::endl;
            total += expenses[i];
        }

        std::cout << "Total Expenses: $" << total << std::endl;
    }

    void TaskA()
    {
        double *expenses[kSeasons];
        FillA((double*)expenses);
        ShowA((double*)expenses);
    }

    struct CustomArray
    {
        double elements_[kSeasons];
    };

    void FillB(CustomArray &expenses)
    {
        for (int i = 0; i < kSeasons; i++)
        {
            std::cout << "Enter " << kSeasonsNames[i] << " expenses: ";
            std::cin >> expenses.elements_[i];
        }
    }

    void ShowB(const CustomArray& expenses)
    {
        double total = 0.0;
        std::cout << "EXPENSES\n";

        for (int i = 0; i < kSeasons; i++)
        {
            std::cout << kSeasonsNames[i] << ": $" << expenses.elements_[i] << std::endl;
            total += expenses.elements_[i];
        }

        std::cout << "Total Expenses: $" << total << std::endl;
    }

    void TaskB()
    {
        CustomArray expenses = { { 0.0, 0.0, 0.0, 0.0 } };

        FillB(expenses);
        ShowB(expenses);
    }

    void RunEighthTask()
    {
        TaskA();
        std::cout << std::endl;
        TaskB();
    }
}