#include "TenthChapter.h"

#include <iostream>
#include <ostream>

#include "1st/BackAccount.h"
#include "2nd/Person.h"

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunFirstTask() const
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

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunSecondTask() const
{
    const Person one;
    const Person two("Smythecraft");
    const Person three("Dimwiddy", "Sam");

    one.Show();
    two.Show();
    three.Show();

    std::cout << std::endl;

    one.FormalShow();
    two.FormalShow();
    three.FormalShow();
}

//----------------------------------------------------------------------------------------------------
