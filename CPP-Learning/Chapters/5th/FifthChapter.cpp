#include "FifthChapter.h"

#include <array>
#include <iostream>
#include <string>

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunFirstTask() const
{
    int first;
    int second;
    int result = 0;

    std::cout << "Enter first number: ";
    std::cin >> first;

    std::cout << "Enter second number: ";
    std::cin >> second;

    for (int i = first; i <= second; i++)
        result += i;

    std::cout << "Result is " << result << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunSecondTask() const
{
    constexpr int array_size = 101;
    
    std::array<long double, array_size> factorials;
    factorials[0] = factorials[1] = 1L;

    for (int i = 2; i < array_size; i++)
        factorials[i] = i * factorials[i - 1];

    for (int i = 0; i < array_size; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunThirdTask() const
{
    int n;
    int result = 0;

    std::cout << "Enter the number: ";
    std::cin >> n;
    
    while (n != 0)
    {
        result += n;
        std::cout << "Current sum is " << result << std::endl << std::endl;
        
        std::cout << "Enter the number: ";
        std::cin >> n;
    }

    std::cout << "Final sum is " << result << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunFourthTask() const
{
    constexpr float daphne_initial_balance = 100;
    constexpr float daphne_percents = 10.0f;
    float daphne_profit = 0;

    float cleo_current_balance = 100;
    constexpr float cleo_percents = 5.0f;
    float cleo_profit = 0;

    int counter = 0;
    while (cleo_profit <= daphne_profit)
    {
        counter++;
        std::cout << "Year " << counter << std::endl;
        daphne_profit += daphne_initial_balance * daphne_percents / 100.0f;

        const float cleo_current_profit = cleo_current_balance * cleo_percents / 100.0f;
        cleo_profit += cleo_current_profit;
        cleo_current_balance += cleo_current_profit;

        std::cout << "Daphne's balance: " << daphne_initial_balance + daphne_profit << "$" << std::endl;
        std::cout << "Cleo's balance: " << cleo_current_balance << "$" << std::endl << std::endl;
    }

    std::cout << "It will take Cleo " << counter << " years to make more profit than Daphne" << std::endl;
    std::cout << "Then Daphne's profit will be " << daphne_profit << "$" << " and Cleo's profit will be " << cleo_profit << "$" << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunFifthTask() const
{
    const std::array<std::string, 12> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    std::array<int, 12> sales = { };

    for (int i = 0; i < months.size(); i++)
    {
        std::cout << "Enter sales for " << months[i] << ": ";
        std::cin >> sales[i];
    }

    int total_sales = 0;
    for (const int value : sales)
        total_sales += value;
    
    std::cout << std::endl << "Sales for entire year is equal to " << total_sales << " books" << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunSixthTask() const
{
    const std::array<std::string, 12> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    std::array<std::array<int, 12>, 3> sales_array = { };

    for (int i = 0; i < sales_array.size(); i++)
    {
        for (int j = 0; j < months.size(); j++)
        {
            std::cout << "Enter sales for " << months[j] << " of year " << i + 1 << ": ";
            std::cin >> sales_array[i][j];
        }

        int year_sales = 0;
        for (const int value : sales_array[i])
            year_sales += value;
    
        std::cout << "Sales for " << i + 1 << " year is equal to " << year_sales << " books" << std::endl << std::endl;
    }

    int total_sales = 0;
    for (const std::array<int, 12> year_sales : sales_array)
        for (const int value : year_sales)
            total_sales += value;
    
    std::cout << "Sales for 3 years is equal to " << total_sales << " books" << std::endl;
}

//----------------------------------------------------------------------------------------------------

struct Car
{
    std::string manufacturer_name_;
    int manufacture_year_;
};

void FifthChapter::RunSeventhTask() const
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

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunEighthTask() const
{
    setlocale(LC_ALL, "ru-RU");
    std::cout << "Вводите слов (для завершения введите слово done):" << std::endl;

    int count = 0;
    char temp_word[100];
    std::cin >> temp_word;
    
    while (strcmp(temp_word, "done") != 0)
    {
        std::cin >> temp_word;
        count++;
    }
    
    std::cout << "Вы ввели " << count << " слов.\n";
}

//----------------------------------------------------------------------------------------------------
