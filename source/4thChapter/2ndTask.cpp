#include <iostream>

namespace FourthChapter
{
    void RunSecondTask()
    {
        std::string name;
        std::string dessert;

        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        std::cout << "Enter your favourite dessert: ";
        std::getline(std::cin, dessert);

        std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    }
}