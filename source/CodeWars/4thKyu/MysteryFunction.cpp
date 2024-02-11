#include <valarray>
#include "Declarations.h"

namespace FourthKyu
{
    static unsigned long Mystery(unsigned long n)
    {
        n++;
        unsigned long result = 0;
        int pow = 1;

        while (std::pow(2, pow) < n)
            pow++;

        for (int i = 0; i < (pow - 1); ++i)
        {
            result += (unsigned long)std::pow(2, pow - 1);

            if ((n - std::pow(2, pow - 1)) <= std::pow(2, pow - 2))
            {

            }
        }
    }

    static unsigned long MysteryInversion(unsigned long n)
    {

    }

    static std::string NameOfMystery()
    {

    }
}