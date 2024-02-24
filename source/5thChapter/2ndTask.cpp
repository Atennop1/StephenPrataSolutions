#include <iostream>
#include <array>

namespace FifthChapter
{
    void RunSecondTask()
    {
        constexpr int array_size = 101;

        std::array<long double, array_size> factorials { };
        factorials[0] = factorials[1] = 1L;

        for (int i = 2; i < array_size; i++)
            factorials[i] = i * factorials[i - 1];

        for (int i = 0; i < array_size; i++)
            std::cout << i << "! = " << factorials[i] << std::endl;
    }
}