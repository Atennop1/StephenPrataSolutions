#include <iostream>

namespace EighthChapter
{
    template <typename T>
    T Max5(T values[5])
    {
        T max = values[0];

        for (int i = 0; i < 5; i++)
            if (values[i] > max)
                max = values[i];

        return max;
    }

    void RunFifthTask()
    {
        int integers[] = {1, 2, 3, 4, 5};
        std::cout << Max5(integers) << std::endl;

        double doubles[] = {-2.4, 11.0, 2.5, -7.3, 24.9};
        std::cout << Max5(doubles) << std::endl;
    }
}