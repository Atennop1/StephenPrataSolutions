#include <iostream>

namespace EighthChapter
{
    struct CandyBar
    {
        char *name_;
        double weight_;
        int calories_count_;
    };

    void FillCandyBar(CandyBar &candy_bar, const char *name = "Millennium Munch", const double &weight = 2.85, const int &calories_count = 350)
    {
        candy_bar.name_ = (char*)name;
        candy_bar.weight_ = weight;
        candy_bar.calories_count_ = calories_count;
    }

    void Display(const CandyBar &candy_bar)
    {
        std::cout << "Candy box name: " << candy_bar.name_ << std::endl;
        std::cout << "Box weight: " << candy_bar.weight_ << std::endl;
        std::cout << "Calories in box: " << candy_bar.calories_count_ << std::endl << std::endl;
    }

    void RunSecondTask()
    {
        CandyBar first_bar = { };
        FillCandyBar(first_bar);
        Display(first_bar);

        char second_bar_name[50];
        std::cout << "Enter second bar name: ";
        std::cin.getline(second_bar_name, 50);

        int second_bar_weight = 0;
        std::cout << "Enter second bar weight: ";
        (std::cin >> second_bar_weight).get();

        int second_bar_calories = 0;
        std::cout << "Enter amount of calories in second bar: ";
        (std::cin >> second_bar_calories).get();

        std::cout << std::endl;
        CandyBar second_bar = { };
        FillCandyBar(second_bar, second_bar_name,  second_bar_weight, second_bar_calories);
        Display(second_bar);

    }
}