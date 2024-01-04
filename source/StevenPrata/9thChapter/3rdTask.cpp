#include <iostream>

namespace NinthChapter
{
    constexpr int kN = 2;

    struct Chaff
    {
        char dross_[20];
        int slag_;
    };

    void RunThirdTask()
    {
        char buffer[sizeof(Chaff) * kN];
        const auto chaffs = new (buffer) Chaff[kN];

        for (int i = 0; i < kN; i++)
        {
            std::cout << "Enter dross of chaff #" << i + 1 << ": ";
            std::cin >> chaffs[i].dross_;

            std::cout << "Enter slag of chaff #" << i + 1 << ": ";
            (std::cin >> chaffs[i].slag_).get();
            std::cout << std::endl;
        }

        std::cout << std::endl;

        for (int i = 0; i < kN; i++)
        {
            std::cout << "Dross of chaff #" << i + 1 << ": " << chaffs[i].dross_ << std::endl;
            std::cout << "Slag of chaff #" << i + 1 << ": " << chaffs[i].slag_ << std::endl << std::endl;
        }
    }
}