#include <iostream>
#include <cstring>

namespace EighthChapter
{
    struct Stringy
    {
        char *string_ = nullptr;
        int count_ { };
    };

    void Set(Stringy &stringy, const char *value)
    {
        const int value_length = static_cast<int>(strlen(value)) + 1;
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

    void RunFourthTask()
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
}