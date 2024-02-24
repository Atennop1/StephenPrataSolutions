#include "2ndTaskFiles/String.h"

namespace TwelfthChapter
{
    void RunSecondTask()
    {
        String first(" and I am a C++ student.");
        String second = String("Please enter your name: ");
        String third;

        std::cout << second;
        std::cin >> third;
        second = "My name is " + third;
        std::cout << second << ".\n";

        second = second + first;
        second.ToUpper();
        std::cout << "The string\n" << second << "\ncontains " << second.CountOf('A') << " 'A' characters in it.\n";

        first = "red";
        String answer;
        bool success = false;
        const String rgb[3] = { String(first), String("green"), String("blue") };
        std::cout << "Enter the name of a primary color for mixing light: ";

        while(std::cin >> answer)
        {
            answer.ToLower();
            for (const auto &i : rgb)
            {
                if(answer == i)
                {
                    std::cout << "That's right!\n";
                    success = true;
                    break;
                }
            }

            if (success)
                break;

            std::cout << "Try again!\n";
        }

        std::cout << "Bye\n";
    }
}