#include <iostream>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"

int main()
{
    auto vector = std::vector<int> { 1, 2, 0, 1, 0, 1, 3, 0, 1, 0 };
    auto result = FifthKyu::MoveZeroes(vector);
    return 0;
}
