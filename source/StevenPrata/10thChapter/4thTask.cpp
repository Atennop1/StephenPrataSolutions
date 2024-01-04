#include <iostream>
#include "4thTaskFiles/SalesClass.h"

namespace TenthChapter
{
    void RunFourthTask()
    {
        auto first = sales::SalesClass();
        first.SetSales();

        constexpr double array[5] = { 12.0, 14.0, 34.4 };
        const auto second = sales::SalesClass(array, 5);

        std::cout << std::endl << std::endl;
        first.ShowSales();
        std::cout << std::endl;
        second.ShowSales();
    }
}