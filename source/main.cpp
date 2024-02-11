#include <iostream>
#include <algorithm>
#include <valarray>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"

std::vector<long> T(int n)
{
    if (n == 1)
        return { 0, 1 };

    std::vector<long> first_half = T(n - 1);
    std::vector<long> second_half = first_half;
    std::reverse(second_half.begin(), second_half.end());

    for (long &i : second_half)
        i += (long)std::pow(2, n - 1);

    first_half.insert(first_half.end(), second_half.begin(), second_half.end());
    return first_half;
}

int main()
{
    for (int i = 1; i < 7; i++)
    {
        std::vector<long> result = T(i);

        for (int j: result)
            std::cout << j << " ";

        std::cout << std::endl;
    }

    return 0;
}
