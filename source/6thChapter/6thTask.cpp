#include <iostream>

namespace SixthChapter
{
    struct Philanthropist
    {
        std::string name_;
        double donation_ { };
    };

    void RunSixthTask()
    {
        int count = 0;
        std::cout << "Enter the number of philanthropists: ";
        (std::cin >> count).get();

        const auto philanthropists = new Philanthropist[count];

        for (int i = 0; i < count; i++)
        {
            std::cout << "\nEnter name of philanthropist number " << i + 1 << ": ";
            std::getline(std::cin, philanthropists[i].name_);

            std::cout << "Enter donation of philanthropist number " << i + 1 << ": ";
            (std::cin >> philanthropists[i].donation_).get();
        }

        std::string grand_patrons_string;
        std::string patrons_string;

        // made 2 loops instead of 1 for educational purposes.
        for (int i = 0; i < count; i++)
        {
            if (philanthropists[i].donation_ >= 10000)
            {
                grand_patrons_string += philanthropists[i].name_ + "\n";
                continue;
            }

            patrons_string += philanthropists[i].name_ + "\n";
        }

        std::cout << "\nGrand Patrons: \n" << (grand_patrons_string.length() > 0 ? grand_patrons_string : "none\n");
        std::cout << "\nRegular Patrons: \n" << (patrons_string.length() > 0 ? patrons_string : "none\n");

        delete[] philanthropists;
    }
}