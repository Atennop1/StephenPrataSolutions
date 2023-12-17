#pragma warning(disable : 4996)

#include "EighthChapter.h"

#include <iostream>
#include <ostream>
#include <string>

//----------------------------------------------------------------------------------------------------
int kCallsCount = 0;

void Print(const std::string &string, int n = 0)
{
    if (n == 0)
    {
        std::cout << string << std::endl;
        kCallsCount++;
        return;
    }

    for (int _ = 0; _ < kCallsCount; _++)
        std::cout << string << std::endl;

    kCallsCount++;
}

void EighthChapter::RunFirstTask() const
{
    Print("Hello");
    Print("Hey");
    Print("???", -1);
}

//----------------------------------------------------------------------------------------------------
struct EighthChapter::CandyBar
{
    char *name_;
    double weight_;
    int calories_count_;
};

void FillCandyBar(EighthChapter::CandyBar &candy_bar, const char *name = "Millennium Munch", const double &weight = 2.85, const int &calories_count = 350)
{
    candy_bar.name_ = (char*)name;
    candy_bar.weight_ = weight;
    candy_bar.calories_count_ = calories_count;
}

void Display(const EighthChapter::CandyBar &candy_bar)
{
    std::cout << "Candy box name: " << candy_bar.name_ << std::endl;
    std::cout << "Box weight: " << candy_bar.weight_ << std::endl;
    std::cout << "Calories in box: " << candy_bar.calories_count_ << std::endl << std::endl;
}

void EighthChapter::RunSecondTask() const
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

//----------------------------------------------------------------------------------------------------
void ToUpper(std::string &string)
{
    for (char &i : string)
        i = (char)std::toupper(i);
}

void EighthChapter::RunThirdTask() const
{
    std::string temp_string;
    std::cout << "Enter a string (q to quit): ";
    
    while (std::getline(std::cin, temp_string) && temp_string != "q")
    {
        ToUpper(temp_string);
        std::cout << temp_string << std::endl;
        std::cout << "Enter a string (q to quit): ";
    }

    std::cout << "Bye!" << std::endl;
}

//----------------------------------------------------------------------------------------------------
struct Stringy
{
    char *string_ = nullptr;
    int count_;
};

void Set(Stringy &stringy, const char *value)
{
    const int value_length = strlen(value) + 1;
    stringy.count_ = value_length;

    delete[] stringy.string_;
    stringy.string_ = new char[value_length];
    strcpy(stringy.string_, value);
}

void Show(const Stringy &stringy, const int count = 1)
{
    for (int i = 0; i < count; i++)
        std::cout << stringy.string_ << std::endl;
}

void Show(const char *characters, const int count = 1)
{
    for (int i = 0; i < count; i++)
        std::cout << characters << std::endl;
}

void EighthChapter::RunFourthTask() const
{
    Stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    Set(beany, testing);
    
    Show(beany);
    Show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';
    
    Show(testing);
    Show(testing, 3);
    Show("Done!");
}

//----------------------------------------------------------------------------------------------------
template <typename T>
T Max5(T values[5])
{
    T max = values[0];
    
    for (int i = 0; i < 5; i++)
        if (values[i] > max)
            max = values[i];

    return max;
}

void EighthChapter::RunFifthTask() const
{
    int integers[] = { 1, 2, 3, 4, 5 };
    std::cout << Max5(integers) << std::endl;

    double doubles[] = { -2.4, 11.0, 2.5, -7.3, 24.9 };
    std::cout << Max5(doubles) << std::endl;
}

//----------------------------------------------------------------------------------------------------
template <typename T>
T MaxN(T values[], const int n)
{
    T max = values[0];
    
    for (int i = 0; i < n; i++)
        if (values[i] > max)
            max = values[i];

    return max;
}

template <> const char* MaxN(const char* values[], const int n)
{
    const char *max = values[0];
    
    for (int i = 0; i < n; i++)
        if (strlen(values[i]) > strlen(max))
            max = values[i];

    return max;
}

void EighthChapter::RunSixthTask() const
{
    int integers[] = { 3, 5, -2, 11, 72, -96 };
    std::cout << MaxN(integers, 6) << std::endl;

    double doubles[] = { -2.4, 11.0, 2.5, -7.3 };
    std::cout << MaxN(doubles, 4) << std::endl;
    
    const char* strings[] = { "Hello", "Antidisestablishmentarianism", "C++ is cool", "Help", "???" };
    std::cout << MaxN(strings, 5) << std::endl;
}

//----------------------------------------------------------------------------------------------------
struct Debt
{
    char name_[50];
    double amount_;
};

template <typename T>
int SumArray(T array[], const int n)
{
    T result = 0;

    for (int i = 0; i < n; i++)
        result += array[i];

    return result;
}

template <typename T>
int SumArray(T* array[], const int n)
{
    T result = 0;

    for (int i = 0; i < n; i++)
        result += *array[i];

    return result;
}

void EighthChapter::RunSeventhTask() const
{
    int things[6] = { 13, 31, 103, 301, 310, 130 };
    Debt debts[3] = { { "Ima Wolfe", 2400.0 }, { "Ura Foxe", 1300.0 }, { "Iby Stout", 1800.0 } };

    double* debts_pointers[3];
    for (int i = 0; i < 3; i++)
        debts_pointers[i] = &debts[i].amount_;

    std::cout << "Things count: " << SumArray(things, 6) << std::endl;
    std::cout << "Debts sum: " << SumArray(debts_pointers, 3) << std::endl;
}

//----------------------------------------------------------------------------------------------------
