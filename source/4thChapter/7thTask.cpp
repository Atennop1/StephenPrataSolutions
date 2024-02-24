#include <iostream>

namespace FourthChapter
{
    void RunSeventhTask()
    {
        struct PizzaInfo
        {
            std::string manufacturer_name_;
            float diameter_ { };
            float weight_ { };
        } pizza_info;

        std::cout << "Pizza manufacturer name: ";
        std::getline(std::cin, pizza_info.manufacturer_name_);

        std::cout << "Pizza diameter: ";
        std::cin >> pizza_info.diameter_;

        std::cout << "Pizza weight: ";
        std::cin >> pizza_info.weight_;

        std::cout << "\nHere's information about your pizza:" << std::endl;
        std::cout << "Manufacturer name: " << pizza_info.manufacturer_name_ << "\nDiameter: " << pizza_info.diameter_ << "\nWeight: " << pizza_info.weight_;
    }
}