#include <iostream>
#include <array>

namespace FifthChapter
{
    void RunFifthTask()
    {
        const std::array<std::string, 12> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
        std::array<int, 12> sales = { };

        for (int i = 0; i < months.size(); i++)
        {
            std::cout << "Enter sales for " << months[i] << ": ";
            std::cin >> sales[i];
        }

        int total_sales = 0;
        for (const int value : sales)
            total_sales += value;

        std::cout << std::endl << "Sales for entire year is equal to " << total_sales << " books" << std::endl;
    }
}