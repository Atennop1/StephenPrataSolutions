#pragma warning(disable : 4996)

#include "FourthChapter.h"
#include <iostream>
#include <string>
#include <cstring>

//----------------------------------------------------------------------------------------------------
void FourthChapter::RunFirstTask() const
{
    int age;
    char grade;
    
    char first_name[20];
    char last_name[20];

    std::cout << "What is your first name? ";
    std::cin.getline(first_name, sizeof(first_name) / sizeof(char));

    std::cout << "What is your last name? ";
    std::cin >> last_name;

    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;
    grade += 1;
    
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << std::endl << "Name: " <<  last_name << ", " << first_name << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age;
}

//----------------------------------------------------------------------------------------------------
void FourthChapter::RunSecondTask() const
{
    std::string name;
    std::string dessert;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your favourite dessert: ";
    std::getline(std::cin, dessert);

    std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
}

//----------------------------------------------------------------------------------------------------
void FourthChapter::RunThirdTask() const
{
    char first_name[20];
    char last_name[20];
    char total_string[40];
    
    std::cout << "Enter your first name: ";
    std::cin.getline(first_name, strlen(first_name));

    std::cout << "Enter your last name: ";
    std::cin.getline(last_name, strlen(last_name));

    strcpy(total_string, last_name);
    strcat(total_string, ", ");
    strcat(total_string, first_name);

    std::cout << "Here's information in a single string: " << total_string;
}

//----------------------------------------------------------------------------------------------------
void FourthChapter::RunFourthTask() const
{
    std::string first_name;
    std::string last_name;
    
    std::cout << "Enter your first name: ";
    std::getline(std::cin, first_name);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, last_name);

    const std::string total_string = last_name + ", " + first_name;
    std::cout << "Here's information in a single string: " << total_string;
}

//----------------------------------------------------------------------------------------------------
struct CandyBar
{
    std::string name_;
    float weight_;
    int calories_;
};

void FourthChapter::RunFifthTask() const
{
    const CandyBar snack = { "Mocha Munch", 2.3f, 350 };
    std::cout << "Name: " << snack.name_ << "\nWeight: " << snack.weight_ << "\nCalories: " << snack.calories_;
}

//----------------------------------------------------------------------------------------------------
void FourthChapter::RunSixthTask() const
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

void FourthChapter::RunSeventhTask() const
{
    struct PizzaInfo
    {
        std::string manufacturer_name_;
        float diameter_;
        float weight_;
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

//----------------------------------------------------------------------------------------------------

