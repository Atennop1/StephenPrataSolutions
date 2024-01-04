#include <iostream>
#include <fstream>

namespace SixthChapter
{
    void RunEighthTask()
    {
        int character_count = 0;
        std::ifstream file;
        file.open("source/StevenPrata/6thChapter/8thTask.txt");

        // counts including spaces and new string
        while (file.get() && file.good())
            character_count++;

        std::cout << "Characters count: " << character_count << std::endl;
        file.close();
    }
}