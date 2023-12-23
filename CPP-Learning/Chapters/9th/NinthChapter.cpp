#include "NinthChapter.h"

#include <iostream>
#include <string>

#include "1st/Golf.h"
#include "4th/Sales.h"

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
    total += length;
    
    std::cout << "\"" << string << "\" contains " << length << " characters\n";
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
constexpr int kN = 2;

struct Chaff
{
    char dross_[20];
    int slag_;
};

void NinthChapter::RunThirdTask() const
{
    char buffer[sizeof Chaff * kN];
    const auto chaffs = new (buffer) Chaff[kN];

    for (int i = 0; i < kN; i++)
    {
        std::cout << "Enter dross of chaff #" << i + 1 << ": ";
        std::cin >> chaffs[i].dross_;
        
        std::cout << "Enter slag of chaff #" << i + 1 << ": ";
        (std::cin >> chaffs[i].slag_).get();
        std::cout << std::endl;
    }

    std::cout << std::endl;
    
    for (int i = 0; i < kN; i++)
    {
        std::cout << "Dross of chaff #" << i + 1 << ": " << chaffs[i].dross_ << std::endl;
        std::cout << "Slag of chaff #" << i + 1 << ": " << chaffs[i].slag_ << std::endl << std::endl;
    }
}

//----------------------------------------------------------------------------------------------------
void NinthChapter::RunFourthTask() const
{
    sales::Sales first;
    sales::Sales second;

    SetSales(first);
    constexpr double array[5] = { 12.0, 14.0, 34.4 };
    SetSales(second, array, 5);

    std::cout << std::endl << std::endl;
    ShowSales(first);
    std::cout << std::endl;
    ShowSales(second);
}

//----------------------------------------------------------------------------------------------------
