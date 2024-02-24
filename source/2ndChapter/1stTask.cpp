#include <iostream>

namespace SecondChapter
{
    void RunFirstTask()
    {
        const char *name = "Anton";
        const char *address = "Planet Earth, Russia, Moscow";

        std::cout << "My creator's name is " << name << std::endl;
        std::cout << "He lives on " << address;
    }
}