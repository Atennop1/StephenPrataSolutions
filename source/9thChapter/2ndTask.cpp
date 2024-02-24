#include <iostream>

namespace NinthChapter
{
    void StringCount(const std::string &string)
    {
        static int total = 0;
        const int length = (int)string.length();
        total += length;

        std::cout << "\"" << string << "\" contains " << length << " characters\n";
        std::cout << total << " characters in total\n";
    }

    void RunSecondTask()
    {
        std::string input;
        std::cout << "Enter a line: ";
        std::getline(std::cin, input);

        while (!input.empty())
        {
            StringCount(input);
            std::cout << std::endl;
            std::cout << "Enter next line (empty line to quit): ";
            std::getline(std::cin, input);
        }

        std::cout << "Bye!\n";
    }
}