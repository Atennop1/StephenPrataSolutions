#ifndef CPP_LEARNING_DECLARATIONS_4kyu_H
#define CPP_LEARNING_DECLARATIONS_4kyu_H

#include <vector>
#include <string>
#include <array>

namespace FourthKyu
{
    class SumOfDivided
    {
    private:
        static std::vector<int> FindPrimeNumbers(int n);

    public:
        static std::string Return(const std::vector<int> &list);
    };
}

#endif
