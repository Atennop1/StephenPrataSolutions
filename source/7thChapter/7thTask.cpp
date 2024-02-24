#include <iostream>

namespace SeventhChapter
{
    double* FillArray7(double *begin, const int limit)
    {
        int i;
        double temp_value;

        for (i = 0; i < limit; i++)
        {
            std::cout << "Enter value #" << i + 1 << ": ";
            std::cin >> temp_value;

            if (std::cin)
            {
                if (temp_value < 0)
                    break;

                begin[i] = temp_value;
                continue;
            }

            std::cin.clear();
            while (std::cin.get() != '\n') { }
            break;
        }

        return begin + i;
    }

    void ShowArray7(const double *begin, const double *end)
    {
        for (const double *element = begin; element != end; element++)
            std::cout << "Property #" << std::distance(begin, element) + 1 << ": $" << *element << std::endl;
    }

    void Revalue(double* begin, const double *end, double revaluation_factor)
    {
        for (double *element = begin; element != end; element++)
            *element *= revaluation_factor;
    }

    void RunSeventhTask()
    {
        double properties[5];
        double *end = FillArray7(properties, 5);
        ShowArray7(properties, end);

        if (std::distance(properties, end) > 0)
        {
            double factor = 0.0;
            std::cout << "Enter revaluation factor: ";

            while (!(std::cin >> factor))
            {
                std::cin.clear();
                while (std::cin.get() != '\n') { }
                std::cout << "Bad input; input process terminated.\n";
            }

            Revalue(properties, end, factor);
            ShowArray7(properties, end);
        }

        std::cout << "Done.\n";
    }
}