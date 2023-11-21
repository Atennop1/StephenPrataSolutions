#include "FifthChapter.h"

#include <array>
#include <iostream>
#include <valarray>

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunFirstTask() const
{
    int first;
    int second;
    int result = 0;

    std::cout << "Enter first number: ";
    std::cin >> first;

    std::cout << "Enter second number: ";
    std::cin >> second;

    for (int i = first; i <= second; i++)
        result += i;

    std::cout << "Result is " << result << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunSecondTask() const
{
    constexpr int array_size = 101;
    
    std::array<long double, array_size> factorials;
    factorials[0] = factorials[1] = 1L;

    for (int i = 2; i < array_size; i++)
        factorials[i] = i * factorials[i - 1];

    for (int i = 0; i < array_size; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunThirdTask() const
{
    int n;
    int result = 0;

    std::cout << "Enter the number: ";
    std::cin >> n;
    
    while (n != 0)
    {
        result += n;
        std::cout << "Current sum is " << result << std::endl << std::endl;
        
        std::cout << "Enter the number: ";
        std::cin >> n;
    }

    std::cout << "Final sum is " << result << std::endl;
}

//----------------------------------------------------------------------------------------------------
void FifthChapter::RunFourthTask() const
{
    constexpr float daphne_initial_balance = 100;
    constexpr float daphne_percents = 10.0f;
    float daphne_profit = 0;

    float cleo_current_balance = 100;
    constexpr float clea_percents = 5.0f;
    float cleo_profit = 0;

    int counter = 0;
    while (cleo_profit <= daphne_profit)
    {
        counter++;
        std::cout << "Year " << counter << std::endl;
        daphne_profit += daphne_initial_balance * daphne_percents / 100.0f;

        const float cleo_current_profit = cleo_current_balance * clea_percents / 100.0f;
        cleo_profit += cleo_current_profit;
        cleo_current_balance += cleo_current_profit;

        std::cout << "Daphne's balance: " << daphne_initial_balance + daphne_profit << "$" << std::endl;
        std::cout << "Cleo's balance: " << cleo_current_balance << "$" << std::endl << std::endl;
    }

    std::cout << "It will take Cleo " << counter << " years to make more profit than Daphne" << std::endl;
    std::cout << "Then Daphne's profit will be " << daphne_profit << "$" << " and Cleo's profit will be " << cleo_profit << "$" << std::endl;
}

//----------------------------------------------------------------------------------------------------