#include "TenthChapter.h"

#include <iostream>
#include <ostream>

#include "1st/BackAccount.h"
#include "2nd/Person.h"
#include "3rd/GolfClass.h"
#include "4th/SalesClass.h"

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
void TenthChapter::RunThirdTask() const
{
    int n = 0;
    std::cout << "Enter golfers count: ";
    (std::cin >> n).get();
    std::cout << std::endl;

    int count = 0;
    const auto golfers = new GolfClass[n] { };
    for (int i = 0; i < n; i++)
    {
        if (!golfers[i].SetGolf())
        {
            std::cout << std::endl;
            break;
        }

        count++;
        std::cout << std::endl;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << "Golfer #" << i + 1 << std::endl;
        golfers[i].ShowGolf();
        std::cout << std::endl;
    }

    delete[] golfers;
}

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunFourthTask() const
{
    auto first = sales::SalesClass();
    first.SetSales();

    constexpr double array[5] = { 12.0, 14.0, 34.4 };
    const auto second = sales::SalesClass(array, 5);

    std::cout << std::endl << std::endl;
    first.ShowSales();
    std::cout << std::endl;
    second.ShowSales();
}

//----------------------------------------------------------------------------------------------------
