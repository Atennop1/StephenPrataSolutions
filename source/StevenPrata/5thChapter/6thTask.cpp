#include <iostream>
#include <array>

namespace FifthChapter
{
    void RunSixthTask()
    {
        const std::array<std::string, 12> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
        std::array<std::array<int, 12>, 3> sales_array = { };

        for (int i = 0; i < sales_array.size(); i++)
        {
            for (int j = 0; j < months.size(); j++)
            {
                std::cout << "Enter sales for " << months[j] << " of year " << i + 1 << ": ";
                std::cin >> sales_array[i][j];
            }

            int year_sales = 0;
            for (const int value : sales_array[i])
                year_sales += value;

            std::cout << "Sales for " << i + 1 << " year is equal to " << year_sales << " books" << std::endl << std::endl;
        }

        int total_sales = 0;
        for (const std::array<int, 12> year_sales : sales_array)
            for (const int value : year_sales)
                total_sales += value;

        std::cout << "Sales for 3 years is equal to " << total_sales << " books" << std::endl;
    }
}