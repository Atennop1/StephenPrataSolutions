#include <iostream>
#include "6thTaskFiles/Mass2.h"

namespace EleventhChapter
{
    void RunSixthTask()
    {
        Mass2 array[6] =
        {
            Mass2(12, 1.4),
            Mass2(134.3),
            Mass2(94.7)
        };

        const auto eleven_stones = Mass2(11, 0.0);
        int greater_count = 0;
        Mass2 max = array[0];
        Mass2 min = array[0];

        int temp_stones;
        double temp_pounds;

        for (int i = 0; i < 3; i++)
        {
            std::cout << "Enter count of stones in element #" << i + 4 << ": ";
            (std::cin >> temp_stones).get();

            std::cout << "Enter count of pounds in element #" << i + 4 << ": ";
            (std::cin >> temp_pounds).get();

            array[i + 3] = Mass2(temp_stones, temp_pounds);
            std::cout << std::endl;
        }

        for (const auto &i : array)
        {
            if (max < i)
                max = i;

            if (min > i)
                min = i;

            if (i >= eleven_stones)
                greater_count++;
        }

        std::cout << "Max value: ";
        max.ShowPounds();

        std::cout << "Min value: ";
        min.ShowPounds();

        std::cout << "Greater count: " << greater_count << std::endl;
    }
}