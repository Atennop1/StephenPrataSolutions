#include <iostream>
#include "1stTaskFiles/BackAccount.h"

namespace TenthChapter
{
    void RunFirstTask()
    {
        auto account = BackAccount();
        account.Initialize("Atennop", "9374638964", 100);

        account.ShowInformation();
        account.Put(200);
        std::cout << std::endl;
        account.ShowInformation();

        std::cout << std::endl;
        account.Take(350);
        std::cout << std::endl;
        account.ShowInformation();

        account.Take(250);
        std::cout << std::endl;
        account.ShowInformation();
    }
}