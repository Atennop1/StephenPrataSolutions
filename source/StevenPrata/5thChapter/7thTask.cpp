#include <iostream>
#include <array>

namespace FifthChapter
{
    struct Car
    {
        std::string manufacturer_name_;
        int manufacture_year_;
    };

    void RunSeventhTask()
    {
        setlocale(LC_ALL, "ru-RU");
        int cars_count = 0;

        std::cout << "Сколько автомобилей поместить в каталог? ";
        std::cin >> cars_count;
        std::cin.get();
        std::cout << std::endl;

        const auto cars = new Car[cars_count];
        for (int i = 0; i < cars_count; i++)
        {
            std::cout << "Автомобиль #" << i + 1 << ":\n";
            std::cout << "Введите производителя: ";
            std::getline(std::cin, cars[i].manufacturer_name_);

            std::cout << "Укажите год выпуска: ";
            std::cin >> cars[i].manufacture_year_;
            std::cin.get();
            std::cout << std::endl;
        }

        std::cout << "Вот ваша коллекция: \n";
        for (int i = 0; i < cars_count; i++)
            std::cout << cars[i].manufacture_year_ << " " << cars[i].manufacturer_name_ << std::endl;

        delete[] cars;
    }
}