#include <iostream>

namespace SixthChapter
{
    void RunSeventhTask()
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
}