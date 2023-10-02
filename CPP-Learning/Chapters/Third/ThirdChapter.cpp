#include "ThirdChapter.h"
#include <iostream>

//----------------------------------------------------------------------------------------------------
void ThirdChapter::RunFirstTask() const
{
    constexpr int inches_in_foot = 12;
    
    int height_in_inches;
    std::cout << "Enter your height in inches: ";
    
    std::cin >> height_in_inches;
    std::cout << "Your height is " << height_in_inches / inches_in_foot << " feet and " << height_in_inches % inches_in_foot << " inches.\n";
}

//----------------------------------------------------------------------------------------------------
void ThirdChapter::RunSecondTask() const
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

//----------------------------------------------------------------------------------------------------
void ThirdChapter::RunThirdTask() const
{
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;

    int degrees;
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;

    int minutes;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;

    int seconds;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;

    constexpr int minutes_in_degree = 60;
    constexpr int seconds_in_degree = 3600;

    const double total_degrees = degrees + static_cast<double>(minutes) / minutes_in_degree + static_cast<double>(seconds) / seconds_in_degree;
    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total_degrees << " degrees"; 
}

//----------------------------------------------------------------------------------------------------
void ThirdChapter::RunFourthTask() const
{
    long long total_seconds;
    std::cout << "Enter the number of seconds: ";
    std::cin >> total_seconds;

    constexpr long long seconds_in_minute = 60;
    constexpr long long minutes_in_hour = 60;
    constexpr long long hours_in_day = 24;

    const long long days = total_seconds / (seconds_in_minute * minutes_in_hour * hours_in_day);
    const long long hours = total_seconds / (seconds_in_minute * minutes_in_hour) % hours_in_day;
    const long long minutes = total_seconds / seconds_in_minute % minutes_in_hour;
    const long long seconds = total_seconds % seconds_in_minute;
    
    std::cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
}

//----------------------------------------------------------------------------------------------------