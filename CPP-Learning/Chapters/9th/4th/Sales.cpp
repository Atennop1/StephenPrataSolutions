#include "Sales.h"

#include <iostream>

namespace sales
{
    //----------------------------------------------------------------------------------------------------
    void SetSales(Sales &sales)
    {
        double array[kQuarters];
        
        for (int i = 0; i < kQuarters; i++)
        {
            std::cout << "Enter sales for quarter #" << i + 1 << ": ";
            std::cin >> array[i];
        }

        SetSales(sales, array, kQuarters);
    }

    //----------------------------------------------------------------------------------------------------
    void SetSales(Sales &sales, const double array[], int n)
    {
        double min = array[0];
        double max = array[0];
        double total = 0.0;

        for (int i = 0; i < kQuarters; i++)
        {
            sales.sales_[i] = i < n ? array[i] : 0.0;
            total += sales.sales_[i];
        }

        n = n > kQuarters ? kQuarters : n;
        
        for (int i = 0; i < n; i++)
        {
            if (min > array[i])
                min = array[i];

            if (max < array[i])
                max = array[i];
        }

        sales.max_ = max;
        sales.min_ = min;
        sales.average_ = total / n;
    }

    //----------------------------------------------------------------------------------------------------
    void ShowSales(const Sales &sales)
    {
        for (int i = 0; i < kQuarters; i++)
            std::cout << "Sales for quarter #" << i + 1 << ": " << sales.sales_[i] << std::endl;
        
        std::cout << "Min sales: " << sales.min_ << std::endl;
        std::cout << "Max sales: " << sales.max_ << std::endl;
        std::cout << "Average sales: " << sales.average_ << std::endl;
    }
    //----------------------------------------------------------------------------------------------------
}
