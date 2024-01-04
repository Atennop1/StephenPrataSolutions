#include <iostream>

namespace ThirdChapter
{
    void RunSecondTask()
    {
        int height_feet;
        int height_inches;
        std::cout << "Enter your height in feet and inches." << std::endl;

        std::cout << "Feet: ";
        std::cin >> height_feet;

        std::cout << "Inches: ";
        std::cin >> height_inches;

        float weight_in_lbs;
        std::cout << "\nEnter your weight in lbs: ";
        std::cin >> weight_in_lbs;

        constexpr float kgs_in_lb = 2.2f;
        constexpr int inches_in_foot = 12;
        constexpr double metres_in_inch = 0.0254;

        const double height_in_meters = (height_inches + height_feet * inches_in_foot) * metres_in_inch;
        const float weight_in_kgs = weight_in_lbs / kgs_in_lb;

        std::cout << "Your BMI is " << weight_in_kgs / (height_in_meters * height_in_meters) << std::endl;
    }
}