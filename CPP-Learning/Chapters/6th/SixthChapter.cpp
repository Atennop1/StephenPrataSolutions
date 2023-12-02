#include "SixthChapter.h"

#include <array>
#include <iostream>
#include <string>

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunFirstTask() const
{
    std::string final_string;
    char current_character;
    std::cin.get(current_character);

    while (current_character != '@')
    {
        if (isdigit(current_character))
        {
            std::cin.get(current_character);
            continue;
        }

        final_string += islower(current_character) ? (char)toupper(current_character) : (char)tolower(current_character);
        std::cin.get(current_character);
    }

    std::cout << std::endl << "Output: " << std::endl;
    std::cout << final_string;
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunSecondTask() const
{
    std::array<double, 10> donations;
    double temp_donation = 0;
    int counter = 0;

    std::cout << "Enter value number " << counter + 1 << ": ";
    
    while (counter < donations.max_size() && std::cin >> temp_donation)
    {
        donations[counter] = temp_donation;
        counter++;
        std::cout << "Enter value number " << counter + 1 << ": ";
    } 

    if (counter == 0)
    {
        std::cout << "\nNo data" << std::endl;
        return;
    }
    
    double average_donation = 0.0;
    for (int i = 0; i < counter; i++)
        average_donation += donations[i];

    average_donation /= counter;
    std::cout << "\nAverage value: " << average_donation << std::endl;

    double greater_count = 0.0;
    for (int i = 0; i < counter; i++)
        if (donations[i] > average_donation)
            greater_count++;

    std::cout << "Count of donations greater than average: " << greater_count << std::endl;
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunThirdTask() const
{
    std::string temp_line;
    std::cout << "Please enter one of the following choices: \n" <<
        "c) carnivore   p) pianist\nt) tree        g) game\n";
    
    while (true)
    {
        std::cout << "Please enter a c, p, t or g: ";
        std::getline(std::cin, temp_line);

        if (temp_line == "c") std::cout << "Wolf is a carnivore";
        else if (temp_line == "p") std::cout << "Pianist is a musical profession";
        else if (temp_line == "t") std::cout << "Maple is a tree";
        else if (temp_line == "g") std::cout << "Half-Life 2 is a great game";
        else continue;

        break;
    }
}

//----------------------------------------------------------------------------------------------------
constexpr int kArraySize = 50;

struct BOP
{
    char fullname_[kArraySize];
    char title_[kArraySize];
    char bop_name_[kArraySize];
    int preference_;
};

void SixthChapter::RunFourthTask() const
{
    BOP bop_programmers[5] =
    {
        { "Wimp Macho", "Project Manager", "WAMPUS", 0 },
        { "Raki Rhodes", "Junior Programmer", "RAMZES", 1 },
        { "Celia Laiter", "Architect", "MIPS", 2 },
        { "Hoppy Hipman", "Analyst Trainee", "HIPPO", 1 },
        { "Pat Hand", "Senior Software Engineer", "LOOPY", 2 }
    };
    
    char temp_line[kArraySize];
    std::cout << "Benevolent Order of Programmers Report\n" <<
         "a. display by name      b. display by title\nc. display by bopname   d. display by preference\nq. quit\n";

    std::cout << "Enter your choice: ";
    while (true)
    {
        std::cin.getline(temp_line, kArraySize);
        
        switch (temp_line[0])
        {
            case 'a':
                for (const BOP &programmer : bop_programmers)
                    std::cout << programmer.fullname_ << std::endl;
                
                break;
                
            case 'b':
                for (const BOP &programmer : bop_programmers)
                    std::cout << programmer.title_ << std::endl;
                
                break;
                
            case 'c':
                for (const BOP &programmer : bop_programmers)
                    std::cout << programmer.bop_name_ << std::endl;
                
                break;
                
            case 'd':
                for (const BOP &programmer : bop_programmers)
                {
                    if (programmer.preference_ == 0) std::cout << programmer.fullname_ << std::endl;
                    else if (programmer.preference_ == 1) std::cout << programmer.title_ << std::endl;
                    else std::cout << programmer.bop_name_ << std::endl;
                }
                
                break;
                
            case 'q':
                std::cout << "Bye!\n";
                goto exit;
                
            default:
                std::cout << "Unknown code" << std::endl;
                break;
        }
        
        std::cout << "Next choice: ";
    }

    exit:;
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunFifthTask() const
{
    float count = 0;
    std::cout << "Enter twarps count: ";
    std::cin >> count;

    while (std::cin && count >= 0)
    {
        float duty = 0;
        
        if (count > 35000)
        {
            duty += (count - 35000) * 0.2f;
            count = 35000;
        }

        if (count > 15000)
        {
            duty += (count - 15000) * 0.15f;
            count = 15000;
        }

        if (count > 5000)
            duty += (count - 5000) * 0.1f;

        std::cout << "Duty: " << duty << std::endl;
        std::cout << "\nNext: ";
        std::cin >> count;
    }
}

//----------------------------------------------------------------------------------------------------
