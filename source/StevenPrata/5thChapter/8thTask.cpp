#include <iostream>
#include <cstring>

namespace FifthChapter
{
    void RunEighthTask()
    {
        setlocale(LC_ALL, "ru-RU");
        std::cout << "Вводите слова (для завершения введите слово done):" << std::endl;

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
}