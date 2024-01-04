#include <iostream>
#include <fstream>

namespace SixthChapter
{
    void RunNinthTask()
    {
        std::ifstream input;
        input.open("source/StevenPrata/6thChapter/9thTask.txt");

        int count = 0;
        (input >> count).get();

        std::string grand_patrons_string;
        std::string patrons_string;

        for (int i = 0; i < count; i++)
        {
            std::string name;
            std::getline(input, name);

            double donation;
            (input >> donation).get();

            if (donation >= 10000)
            {
                grand_patrons_string += name + "\n";
                continue;
            }

            patrons_string += name + "\n";
        }

        std::cout << "\nGrand Patrons: \n" << (grand_patrons_string.length() > 0 ? grand_patrons_string : "none\n");
        std::cout << "\nRegular Patrons: \n" << (patrons_string.length() > 0 ? patrons_string : "none\n");
        input.close();
    }
}