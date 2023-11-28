#include "SixthChapter.h"

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
