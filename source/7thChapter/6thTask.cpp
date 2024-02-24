#include <iostream>

namespace SeventhChapter
{
    int FillArray(double *array, int n)
    {
        int i = 0;
        std::cout << "Enter number with number 1: ";

        while (std::cin >> array[i])
        {
            i++;

            if (i >= n)
                break;

            std::cout << "Enter number with number " << i + 1 << ": ";
        }

        return i;
    }

    void ShowArray(const double *array, int n)
    {
        std::cout << "\nNumbers in an array: ";

        for (int i = 0; i < n; i++)
            std::cout << array[i] << " ";

        std::cout << std::endl;
    }

    void ReverseArray(double *array, int n)
    {
        const int swaps_count = n / 2;

        for (int i = 0; i < swaps_count; i++)
        {
            const double temp_value = array[i];
            array[i] = array[n - i - 1];
            array[n - i - 1] = temp_value;
        }
    }

    void RunSixthTask()
    {
        int n = 0;
        std::cout << "Enter array length: ";
        std::cin >> n;

        const auto array = new double[n];
        n = FillArray(array, n);
        ShowArray(array, n);

        std::cout << "Reversing...\n";
        ReverseArray(array + 1, n - 2);
        ShowArray(array, n);

        std::cout << "Bye!\n";
        delete[] array;
    }
}