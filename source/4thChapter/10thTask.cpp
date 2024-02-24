#include <iostream>
#include <array>

namespace FourthChapter
{
    void RunTenthTask()
    {
        std::array<float, 3> run_results = { };

        std::cout << "Enter first run result: ";
        std::cin >> run_results[0];

        std::cout << "Enter second run result: ";
        std::cin >> run_results[1];

        std::cout << "Enter third run result: ";
        std::cin >> run_results[2];

        std::cout << "\nRun results: " << run_results[0] << ", " << run_results[1] << " and " << run_results[2] << std::endl;
        std::cout << "Average value: " << (run_results[0] + run_results[1] + run_results[2]) / 3;
    }
}