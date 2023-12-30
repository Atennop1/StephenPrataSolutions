#include "EleventhChapter.h"

#include <iostream>

#include "4th/Time.h"

//----------------------------------------------------------------------------------------------------
void EleventhChapter::RunFourthTask() const
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

//----------------------------------------------------------------------------------------------------
