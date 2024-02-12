#include <iostream>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"


int main()
{
    for (int i = 0; i < 64; i++)
        std::cout << FourthKyu::Mystery(i) << " ";

    std::cout << std::endl;

    for (const int &i : { 0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, 24, 25, 27, 26, 30, 31, 29, 28, 20, 21, 23, 22, 18, 19, 17, 16 })
        std::cout << FourthKyu::MysteryInversion(i) << " ";

    std::cout << std::endl << "That was the " << FourthKyu::NameOfMystery() << ".";
    return 0;
}
