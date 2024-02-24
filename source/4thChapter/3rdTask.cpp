#include <iostream>
#include <cstring>

namespace FourthChapter
{
    void RunThirdTask()
    {
        char first_name[20];
        char last_name[20];
        char total_string[40];

        std::cout << "Enter your first name: ";
        std::cin.getline(first_name, (std::streamsize)strlen(first_name));

        std::cout << "Enter your last name: ";
        std::cin.getline(last_name, (std::streamsize)strlen(last_name));

        strcpy(total_string, last_name);
        strcat(total_string, ", ");
        strcat(total_string, first_name);

        std::cout << "Here's information in a single string: " << total_string;
    }
}