#include <iostream>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"

int main()
{
    auto result = LeetCodeNormal::Solutions::LetterCombinations("23");

    for (const auto &i : result)
        std::cout << i << " ";

    return 0;
}
