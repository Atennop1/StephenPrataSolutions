#include <iostream>

namespace FifthChapter
{
    void RunFourthTask()
    {
        constexpr float daphne_initial_balance = 100;
        constexpr float daphne_percents = 10.0f;
        float daphne_profit = 0;

        float cleo_current_balance = 100;
        constexpr float cleo_percents = 5.0f;
        float cleo_profit = 0;

        int counter = 0;
        while (cleo_profit <= daphne_profit)
        {
            counter++;
            std::cout << "Year " << counter << std::endl;
            daphne_profit += daphne_initial_balance * daphne_percents / 100.0f;

            const float cleo_current_profit = cleo_current_balance * cleo_percents / 100.0f;
            cleo_profit += cleo_current_profit;
            cleo_current_balance += cleo_current_profit;

            std::cout << "Daphne's balance: " << daphne_initial_balance + daphne_profit << "$" << std::endl;
            std::cout << "Cleo's balance: " << cleo_current_balance << "$" << std::endl << std::endl;
        }

        std::cout << "It will take Cleo " << counter << " years to make more profit than Daphne" << std::endl;
        std::cout << "Then Daphne's profit will be " << daphne_profit << "$" << " and Cleo's profit will be " << cleo_profit << "$" << std::endl;
    }
}