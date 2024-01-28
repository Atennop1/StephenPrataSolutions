#include <iostream>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"

int main()
{
    auto list = std::vector<int> { 4, 1, 2, 1, 2};
    auto result = LeetCodeEasy::Solutions::SingleNumber(list);
    return 0;
}
