#include <iostream>
#include <windows.h>
#include <psapi.h>
#include <chrono>
#include "2ndTaskFiles/VectorRect.h"
#include "4thTaskFiles/Time.h"

namespace EleventhChapter
{
    void RunFourthTask()
    {
        const auto aida = Time(3, 35);
        const auto tosca = Time(2, 48);

        std::cout << "Aida and Tosca:\n";
        std::cout << aida << "; " << tosca << std::endl;

        Time temp = aida + tosca;
        std::cout << "Aida + Tosca: " << temp << std::endl;

        temp = aida * 1.17;
        std::cout << "Aida * 1.17: " << temp << std::endl;
        std::cout << "10.0 * Tosca: " << 10.0 * tosca << std::endl;
    }
}