#include <iostream>

namespace FourthChapter
{
    struct PizzaInfo
    {
        std::string manufacturer_name_;
        float diameter_;
        float weight_;
    };

    void RunEighthTask()
    {
        auto *pizza_info = new PizzaInfo();

        std::cout << "Pizza diameter: ";
        (std::cin >> pizza_info->diameter_).get();

        std::cout << "Pizza manufacturer name: ";
        std::getline(std::cin, pizza_info->manufacturer_name_);

        std::cout << "Pizza weight: ";
        std::cin >> pizza_info->weight_;

        std::cout << "\nHere's information about your pizza:" << std::endl;
        std::cout << "Manufacturer name: " << pizza_info->manufacturer_name_ << "\nDiameter: " << pizza_info->diameter_ << "\nWeight: " << pizza_info->weight_;

        delete pizza_info;
    }
}