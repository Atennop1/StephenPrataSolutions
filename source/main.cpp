#include <iostream>

#include "StevenPrata/Declarations.h"
#include "CodeWars/Declarations.h"
#include "LeetCode/Declarations.h"

int main()
{
    using LeetCodeNormal::AddTwoNumbersSolution;

    auto *first = new AddTwoNumbersSolution::ListNode(2, new AddTwoNumbersSolution::ListNode(4, new AddTwoNumbersSolution::ListNode(3)));
    auto *second = new AddTwoNumbersSolution::ListNode(5, new AddTwoNumbersSolution::ListNode(6, new AddTwoNumbersSolution::ListNode(4)));

    AddTwoNumbersSolution::AddTwoNumbers(first, second);
    return 0;
}
