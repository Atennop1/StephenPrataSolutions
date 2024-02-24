#include <iostream>

namespace FourthChapter
{
    void RunFourthTask()
    {
        std::string first_name;
        std::string last_name;

        std::cout << "Enter your first name: ";
        std::getline(std::cin, first_name);

        std::cout << "Enter your last name: ";
        std::getline(std::cin, last_name);

        const std::string total_string = last_name + ", " + first_name;
        std::cout << "Here's information in a single string: " << total_string;
    }
}