#ifndef CPP_LEARNING_DECLARATIONS_LEETCODE_EASY_H
#define CPP_LEARNING_DECLARATIONS_LEETCODE_EASY_H

#include <vector>
#include <string>

namespace LeetCodeEasy
{
    class Solutions
    {
    public:
        static bool IsPalindrome(int x);
        static std::vector<int> TwoSum(std::vector<int> &numbers, int target);
        static std::string longestCommonPrefix(std::vector<std::string> &strings);
        static std::vector<int> plusOne(std::vector<int> &digits);
    };
}

#endif
