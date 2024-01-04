#include <iostream>

namespace FourthChapter
{
    struct CandyBar
    {
        std::string name_;
        float weight_;
        int calories_;
    };

    void RunSixthTask()
    {
        const CandyBar snacks[3] =
        {
            { "Mocha Munch", 2.3f, 350 },
            { "Snickers", 3.4f, 450 },
            { "Mars", 2.9f, 375 },
        };

        for (const CandyBar& snack : snacks)
            std::cout << "Name: " << snack.name_ << "\nWeight: " << snack.weight_ << "\nCalories: " << snack.calories_ << std::endl << std::endl;
    }
}