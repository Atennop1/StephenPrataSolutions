#include <iostream>

namespace EighthChapter
{
    void ToUpper(std::string &string)
    {
        for (char &i : string)
            i = (char)std::toupper(i);
    }

    void RunThirdTask()
    {
        std::string temp_string;
        std::cout << "Enter a string (q to quit): ";

        while (std::getline(std::cin, temp_string) && temp_string != "q")
        {
            ToUpper(temp_string);
            std::cout << temp_string << std::endl;
            std::cout << "Enter a string (q to quit): ";
        }

        std::cout << "Bye!" << std::endl;
    }
}