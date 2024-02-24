#include <iostream>

namespace FifthChapter
{
    void RunNinthTask()
    {
        setlocale(LC_ALL, "ru-RU");
        std::cout << "Вводите слова (для завершения введите слово done):" << std::endl;

        int count = 0;
        std::string temp_word;
        std::cin >> temp_word;

        while (temp_word != "done")
        {
            std::cin >> temp_word;
            count++;
        }

        std::cout << "Вы ввели " << count << " слов.\n";
    }
}