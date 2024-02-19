#include <vector>

namespace SixthKyu
{
    std::vector<long long int> CalculatePrimes(long long int n)
    {
        std::vector<long long int> result = { };
        bool *all_numbers = new bool[n + 1] { };

        for (long long int i = 0; i <= n; ++i)
            all_numbers[i] = true;

        for (long long int i = 2; i * i <= n; i++)
            for (long long int j = i + 1; j != n; j++)
                all_numbers[j] |= !(j % i);

        for (long long int i = 2; i * i <= n; i++)
            if (all_numbers[i])
                result.push_back(i);

        return result;
    }
    
    int Mobius(long long int n)
    {
        std::vector<long long int> primes = CalculatePrimes(n);

        for (long long int &prime: primes)
            if (n % (prime * prime) == 0)
                return 0;

        int count_of_factors = 0;
        for (long long int &prime: primes)
        {
            while (n % prime == 0)
            {
                count_of_factors++;
                n /= prime;
            }
        }

        if (count_of_factors % 2 == 0)
            return 1;

        return -1;
    }
}