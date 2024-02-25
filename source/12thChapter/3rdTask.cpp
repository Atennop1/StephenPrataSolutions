#include <iostream>
#include "3rdTaskFiles/Stock.h"

namespace TwelfthChapter
{
    void RunThirdTask()
    {
        const int stocks_count = 4;

        Stock stocks[stocks_count] =
        {
            Stock("NanoSmart", 12, 20.0),
            Stock("Boffo Objects", 200, 2.0),
            Stock("Monolithic Obelisks", 130, 3.25),
            Stock("Fleep Enterprises", 60, 6.5),
        };

        std::cout << "Stock holdings:\n";
        for (const auto &stock: stocks)
            std::cout << stock;

        const Stock *top = stocks;
        for (int i = 1; i < stocks_count; ++i)
            top = &top->TopValue(stocks[i]);

        std::cout << "Most valuable holdings:\n";
        std::cout << *top;
    }
}