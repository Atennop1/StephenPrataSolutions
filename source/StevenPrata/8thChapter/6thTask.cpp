#include <iostream>
#include <cstring>

namespace EighthChapter
{
    template <typename T>
    T MaxN(T values[], const int n)
    {
        T max = values[0];

        for (int i = 0; i < n; i++)
            if (values[i] > max)
                max = values[i];

        return max;
    }

    template<> const char* MaxN(const char* values[], const int n)
    {
        const char *max = values[0];

        for (int i = 0; i < n; i++)
            if (strlen(values[i]) > strlen(max))
                max = values[i];

        return max;
    }

    void RunSixthTask()
    {
        int integers[] = { 3, 5, -2, 11, 72, -96 };
        std::cout << MaxN(integers, 6) << std::endl;

        double doubles[] = { -2.4, 11.0, 2.5, -7.3 };
        std::cout << MaxN(doubles, 4) << std::endl;

        const char* strings[] = { "Hello", "Antidisestablishmentarianism", "C++ is cool", "Help", "???" };
        std::cout << MaxN(strings, 5) << std::endl;
    }
}