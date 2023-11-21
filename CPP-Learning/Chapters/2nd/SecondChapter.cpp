#include "SecondChapter.h"
#include <iostream>

//----------------------------------------------------------------------------------------------------
void SecondChapter::RunFirstTask() const
{
    const char *name = "Anton";
    const char *address = "Planet Earth, Russia, Moscow";
    
    std::cout << "My creator's name is " << name << std::endl;
    std::cout << "He lives on " << address;
}

//----------------------------------------------------------------------------------------------------
void SecondChapter::RunSecondTask() const
{
    int furlongs_count;
    std::cout << "Enter number of furlongs: ";
    
    std::cin >> furlongs_count;
    std::cout << furlongs_count << " furlongs is equal to " << furlongs_count * 220 << " yards" << std::endl;
}

//----------------------------------------------------------------------------------------------------
void SecondChapter::ThirdTaskFirstMethod() const
{
    std::cout << "Three blind mice" << std::endl;
}

void SecondChapter::ThirdTaskSecondMethod() const
{
    std::cout << "See how they run" << std::endl;
}

void SecondChapter::RunThirdTask() const
{
    ThirdTaskFirstMethod();
    ThirdTaskFirstMethod();

    ThirdTaskSecondMethod();
    ThirdTaskSecondMethod();
}

//----------------------------------------------------------------------------------------------------
void SecondChapter::RunFourthTask() const
{
    int age_in_years;
    std::cout << "Enter your age in years: ";

    std::cin >> age_in_years;
    std::cout << "Your age in month is " << age_in_years * 12 << std::endl;
}

//----------------------------------------------------------------------------------------------------
void SecondChapter::RunFifthTask() const
{
    float temperature_in_celsius;
    std::cout << "Enter temperature in Celsius: ";

    std::cin >> temperature_in_celsius;
    std::cout << temperature_in_celsius << " degrees in Celsius is " << 1.8f * temperature_in_celsius + 32 << " degrees Fahrenheit" << std::endl;
}

//----------------------------------------------------------------------------------------------------
void SecondChapter::RunSixthTask() const
{
    double length_in_light_years;
    std::cout << "Enter length in light years: ";

    std::cin >> length_in_light_years;
    std::cout << length_in_light_years << " light years = " << 63240 * length_in_light_years << " astronomical units" << std::endl;
}

//----------------------------------------------------------------------------------------------------

void SecondChapter::SeventhTaskMethod(int hours, int minutes) const
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}

void SecondChapter::RunSeventhTask() const
{
    int number_of_hours;
    int number_of_minutes;

    std::cout << "Enter number of hours: ";
    std::cin >> number_of_hours;

    std::cout << "Enter number of minutes: ";
    std::cin >> number_of_minutes;

    SeventhTaskMethod(number_of_hours, number_of_minutes);
}

//----------------------------------------------------------------------------------------------------
