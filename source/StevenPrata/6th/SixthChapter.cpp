#include "SixthChapter.h"

#include <array>
#include <fstream>
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
struct Philanthropist
{
    std::string name_;
    double donation_;
};

void SixthChapter::RunSixthTask() const
{
    int count = 0;
    std::cout << "Enter the number of philanthropists: ";
    (std::cin >> count).get();
    
    const auto philanthropists = new Philanthropist[count];
    
    for (int i = 0; i < count; i++)
    {
        std::cout << "\nEnter name of philanthropist number " << i + 1 << ": ";
        std::getline(std::cin, philanthropists[i].name_);

        std::cout << "Enter donation of philanthropist number " << i + 1 << ": ";
        (std::cin >> philanthropists[i].donation_).get();
    }

    std::string grand_patrons_string;
    std::string patrons_string;

    // made 2 loops instead of 1 for educational purposes.
    for (int i = 0; i < count; i++)
    {
        if (philanthropists[i].donation_ >= 10000)
        {
            grand_patrons_string += philanthropists[i].name_ + "\n";
            continue;
        }

        patrons_string += philanthropists[i].name_ + "\n";
    }

    std::cout << "\nGrand Patrons: \n" << (grand_patrons_string.length() > 0 ? grand_patrons_string : "none\n"); 
    std::cout << "\nRegular Patrons: \n" << (patrons_string.length() > 0 ? patrons_string : "none\n"); 

    delete[] philanthropists;
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunSeventhTask() const
{
    int vowels_count = 0;
    int consonants_count = 0;
    int others_count = 0;

    std::string temp_line;
    std::cout << "Enter words (q to exit):\n";

    while (std::cin >> temp_line && temp_line != "q")
    {
        if (!isalpha(temp_line[0]))
        {
            others_count++;
            continue;
        }

        const char lower_letter = (char)tolower(temp_line[0]);
        if (lower_letter == 'a' || lower_letter == 'e' || lower_letter == 'i' || lower_letter == 'o' || lower_letter == 'u')
        {
            vowels_count++;
            continue;
        }

        consonants_count++;
    }

    std::cout << std::endl << vowels_count << " words beginning with vowels\n"; 
    std::cout << consonants_count << " words beginning with consonants\n"; 
    std::cout << others_count << " others\n"; 
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunEighthTask() const
{
    int character_count = 0;
    std::ifstream file;
    file.open("Chapters/6th/8thTask.txt");

    //counts including spaces and new string
    while (file.get() && file.good())
        character_count++;

    std::cout << "Characters count: " << character_count << std::endl;
    file.close();
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunNinthTask() const
{
    std::ifstream input;
    input.open("Chapters/6th/9thTask.txt");

    int count = 0;
    (input >> count).get();

    std::string grand_patrons_string;
    std::string patrons_string;
    
    for (int i = 0; i < count; i++)
    {
        std::string name;
        std::getline(input, name);

        double donation;
        (input >> donation).get();

        if (donation >= 10000)
        {
            grand_patrons_string += name + "\n";
            continue;
        }

        patrons_string += name + "\n";
    }

    std::cout << "\nGrand Patrons: \n" << (grand_patrons_string.length() > 0 ? grand_patrons_string : "none\n"); 
    std::cout << "\nRegular Patrons: \n" << (patrons_string.length() > 0 ? patrons_string : "none\n");
    input.close();
}

//----------------------------------------------------------------------------------------------------
