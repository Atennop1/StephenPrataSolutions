#include "NinthChapter.h"

#include <iostream>
#include <string>

#include "1st/Golf.h"

void NinthChapter::RunFirstTask() const
{
    int n = 0;
    std::cout << "Enter golfers count: ";
    (std::cin >> n).get();
    std::cout << std::endl;

    int count = 0;
    const auto golfers = new Golf[n];
    for (int i = 0; i < n; i++)
    {
        if (!SetGolf(golfers[i]))
        {
            std::cout << std::endl;
            break;
        }

        count++;
        std::cout << std::endl;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << "Golfer #" << i + 1 << std::endl;
        ShowGolf(golfers[i]);
        std::cout << std::endl;
    }

    delete[] golfers;
}

//----------------------------------------------------------------------------------------------------
void StringCount(const std::string &string)
{
    static int total = 0;
    const int length = (int)string.length();
    int count = 0;
    
    for (int i = 0; i < length; i++)
        if (string[i] != ' ')
            count++;
    
    total += count;
    std::cout << "\"" << string << "\" contains " << count << " characters\n";
    std::cout << total << " characters in total\n";
}

void NinthChapter::RunSecondTask() const
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

//----------------------------------------------------------------------------------------------------
