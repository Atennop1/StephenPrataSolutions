#include <iostream>
#include "7thTaskFiles/Plorg.h"

namespace TenthChapter
{
    void RunSeventhTask()
    {
        auto first = Plorg();
        auto second = Plorg("Anton");

        first.ShowFields();
        std::cout << std::endl;
        second.ShowFields();

        first.SetCI(23);
        second.SetCI(19);

        std::cout << std::endl;
        first.ShowFields();
        std::cout << std::endl;
        second.ShowFields();
    }
}