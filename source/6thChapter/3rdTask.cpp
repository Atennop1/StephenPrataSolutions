#include <iostream>

namespace SixthChapter
{
    void RunThirdTask()
    {
        std::string temp_line;
        std::cout << "Please enter one of the following choices: \n" <<
                  "c) carnivore   p) pianist\nt) tree        g) game\n";

        while (true)
        {
            std::cout << "Please enter a c, p, t or g: ";
            std::getline(std::cin, temp_line);

            if (temp_line == "c") std::cout << "Wolf is a carnivore";
            else if (temp_line == "p") std::cout << "Pianist is a musical profession";
            else if (temp_line == "t") std::cout << "Maple is a tree";
            else if (temp_line == "g") std::cout << "Half-Life 2 is a great game";
            else continue;

            break;
        }
    }
}