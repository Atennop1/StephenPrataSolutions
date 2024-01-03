#include "SalesClass.h"

#include <iostream>

//----------------------------------------------------------------------------------------------------
sales::SalesClass::SalesClass(const double array[], int n)
{
    double min = array[0];
    double max = array[0];
    double total = 0.0;

    for (int i = 0; i < kQuarters; i++)
    {
        m_sales_[i] = i < n ? array[i] : 0.0;
        total += m_sales_[i];
    }

    n = n > kQuarters ? kQuarters : n;
        
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
            min = array[i];

        if (max < array[i])
            max = array[i];
    }

    m_max_ = max;
    m_min_ = min;
    m_average_ = total / n;
}

//----------------------------------------------------------------------------------------------------
void sales::SalesClass::SetSales()
{
    double array[kQuarters];
        
    for (int i = 0; i < kQuarters; i++)
    {
        std::cout << "Enter sales for quarter #" << i + 1 << ": ";
        std::cin >> array[i];
    }

    *this = SalesClass(array, kQuarters);
}

//----------------------------------------------------------------------------------------------------
void sales::SalesClass::ShowSales() const
{
    for (int i = 0; i < kQuarters; i++)
        std::cout << "Sales for quarter #" << i + 1 << ": " << m_sales_[i] << std::endl;
        
    std::cout << "Min sales: " << m_min_ << std::endl;
    std::cout << "Max sales: " << m_max_ << std::endl;
    std::cout << "Average sales: " << m_average_ << std::endl;
}

//----------------------------------------------------------------------------------------------------