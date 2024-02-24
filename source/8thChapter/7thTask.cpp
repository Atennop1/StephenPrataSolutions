#include <iostream>

namespace EighthChapter
{
    struct Debt
    {
        char name_[50];
        double amount_;
    };

    template <typename T>
    int SumArray(T array[], const int n)
    {
        T result = 0;

        for (int i = 0; i < n; i++)
            result += array[i];

        return result;
    }

    template <typename T>
    int SumArray(T* array[], const int n)
    {
        T result = 0;

        for (int i = 0; i < n; i++)
            result += *array[i];

        return result;
    }

    void RunSeventhTask()
    {
        int things[6] = { 13, 31, 103, 301, 310, 130 };
        Debt debts[3] = { { "Ima Wolfe", 2400.0 }, { "Ura Foxe", 1300.0 }, { "Iby Stout", 1800.0 } };

        double* debts_pointers[3];
        for (int i = 0; i < 3; i++)
            debts_pointers[i] = &debts[i].amount_;

        std::cout << "Things count: " << SumArray(things, 6) << std::endl;
        std::cout << "Debts sum: " << SumArray(debts_pointers, 3) << std::endl;
    }
}