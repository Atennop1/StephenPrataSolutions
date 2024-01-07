#include <iostream>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"

int main()
{
    using LeetCodeNormal::AddTwoNumberSolution;

    auto *first = new AddTwoNumberSolution::ListNode(2, new AddTwoNumberSolution::ListNode(4, new AddTwoNumberSolution::ListNode(3)));
    auto *second = new AddTwoNumberSolution::ListNode(5, new AddTwoNumberSolution::ListNode(6, new AddTwoNumberSolution::ListNode(4)));

    AddTwoNumberSolution::AddTwoNumbers(first, second);
    return 0;
}
