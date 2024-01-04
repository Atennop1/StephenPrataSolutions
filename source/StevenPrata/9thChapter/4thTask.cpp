#include <iostream>
#include "4thTaskFiles/Sales.h"

namespace NinthChapter
{
    void RunFourthTask()
    {
        sales::Sales first { };
        sales::Sales second { };

        SetSales(first);
        constexpr double array[5] = { 12.0, 14.0, 34.4 };
        SetSales(second, array, 5);

        std::cout << std::endl << std::endl;
        ShowSales(first);
        std::cout << std::endl;
        ShowSales(second);
    }
}