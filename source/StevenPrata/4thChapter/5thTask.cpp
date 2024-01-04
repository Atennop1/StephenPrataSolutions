#include <iostream>

namespace FourthChapter
{
    struct CandyBar
    {
        std::string name_;
        float weight_;
        int calories_;
    };

    void RunFifthTask()
    {
        const CandyBar snack = { "Mocha Munch", 2.3f, 350 };
        std::cout << "Name: " << snack.name_ << "\nWeight: " << snack.weight_ << "\nCalories: " << snack.calories_;
    }
}