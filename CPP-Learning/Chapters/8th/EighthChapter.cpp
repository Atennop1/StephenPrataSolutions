#include "EighthChapter.h"

#include <iostream>
#include <ostream>
#include <string>

//----------------------------------------------------------------------------------------------------
int kCallsCount = 0;

void Print(const std::string &string, int n = 0)
{
    if (n == 0)
    {
        std::cout << string << std::endl;
        kCallsCount++;
        return;
    }

    for (int _ = 0; _ < kCallsCount; _++)
        std::cout << string << std::endl;

    kCallsCount++;
}

void EighthChapter::RunFirstTask() const
{
    Print("Hello");
    Print("Hey");
    Print("???", -1);
}

//----------------------------------------------------------------------------------------------------
