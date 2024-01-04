#include <iostream>

namespace FourthChapter
{
    struct CandyBar
    {
        std::string name_;
        float weight_;
        int calories_;
    };

    void RunNinthTask()
    {
        CandyBar (*snacks)[3] = new CandyBar[1][3];

        (*snacks)[0] = { "Mocha Munch", 2.3f, 350 };
        (*snacks)[1] = { "Snickers", 3.4f, 450 };
        (*snacks)[2] = { "Mars", 2.9f, 375 };

        for (const CandyBar snack : *snacks)
            std::cout << "Name: " << snack.name_ << "\nWeight: " << snack.weight_ << "\nCalories: " << snack.calories_ << std::endl;

        delete[] snacks;
    }
}