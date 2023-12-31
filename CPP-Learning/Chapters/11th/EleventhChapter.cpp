// ReSharper disable CppJoinDeclarationAndAssignment
#include "EleventhChapter.h"

#include <windows.h>
#include <stdio.h>
#include <psapi.h>
#include <chrono>
#include <fstream>
#include <iostream>

#include "1st/Vector.h"
#include "2nd/VectorRect.h"
#include "4th/Time.h"

//----------------------------------------------------------------------------------------------------
void EleventhChapter::RunFirstTask() const
{
    srand((unsigned int)time(nullptr));
    double step_direction;
    double step_magnitude;

    auto step_vector = Vector();
    auto result = Vector(0.0, 0.0);

    unsigned long steps = 0;
    double target_magnitude;
    std::ofstream file;
    file.open("Chapters/11th/1st/output.txt");

    std::cout << "Enter target distance (q to quit): ";
    while (std::cin >> target_magnitude)
    {
        std::cout << "Enter step magnitude: ";
        if (!(std::cin >> step_magnitude))
            break;

        file << "Target Distance: " << target_magnitude << ", Step Size: " << step_magnitude << std::endl;
        while (result.GetMagnitude() < target_magnitude)
        {
            file << steps << ": " << result << std::endl;
            step_direction = rand() % 360;
            step_vector.Reset(step_magnitude, step_direction, Vector::kPolar);
            result = result + step_vector;
            steps++;
        }

        result.SetRectangleMode();
        file << steps << ": " << result << std::endl;
        file << "After " << steps << " steps, the subject has the following location:\n";
        file << result << std::endl;
        result.SetPolarMode();
        file << "or\n" << result << std::endl;
        file << "Average outward distance per step: " << result.GetMagnitude() / steps << std::endl;

        steps = 0;
        result.Reset(0.0, 0.0);
        std::cout << "Enter target distance (q to quit): ";
    }

    std::cout << "Bye!\n";
    file.close();
}

//----------------------------------------------------------------------------------------------------
void EleventhChapter::RunSecondTask() const
{
    srand((unsigned int)time(nullptr));
    double step_direction;
    double step_magnitude;

    auto step_vector = VectorRect();
    auto result = VectorRect(0.0, 0.0);

    unsigned long steps = 0;
    double target_magnitude;

    std::cout << "Enter target distance (q to quit): ";
    while (std::cin >> target_magnitude)
    {
        std::cout << "Enter step magnitude: ";
        if (!(std::cin >> step_magnitude))
            break;

        while (result.GetMagnitude() < target_magnitude)
        {
            step_direction = rand() % 360;
            step_vector.Reset(step_magnitude, step_direction, VectorRect::kPolar);
            result = result + step_vector;
            steps++;
        }

        result.SetRectangleMode();
        std::cout << "After " << steps << " steps, the subject has the following location:\n";
        std::cout << result << std::endl;
        result.SetPolarMode();
        std::cout << "or\n" << result << std::endl;
        std::cout << "Average outward distance per step: " << result.GetMagnitude() / steps << std::endl;

        steps = 0;
        result.Reset(0.0, 0.0);
        std::cout << "Enter target distance (q to quit): ";
    }

    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
void EleventhChapter::RunThirdTask() const
{
    int n;
    srand((unsigned int)time(nullptr));
    std::chrono::time_point<std::chrono::steady_clock> time1;
    
    double step_direction;
    double step_magnitude;
    auto step_vector = VectorRect();
    
    auto result = VectorRect(0.0, 0.0);
    double target_magnitude;
    
    unsigned long temp_steps = 0;
    unsigned long all_steps = 0;
    unsigned long max_steps = 0;
    unsigned long min_steps = ULONG_MAX;

    std::cout << "Enter target distance (q to quit): ";
    while (std::cin >> target_magnitude)
    {
        std::cout << "Enter step magnitude: ";
        if (!(std::cin >> step_magnitude))
            break;

        std::cout << "Enter amount of attempts: ";
        if (!(std::cin >> n))
            break;

        time1 = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < n; i++)
        {
            while (result.GetMagnitude() < target_magnitude)
            {
                step_direction = rand() % 360;
                step_vector.Reset(step_magnitude, step_direction, VectorRect::kPolar);
                result = result + step_vector;
                temp_steps++;
            }

            if (min_steps > temp_steps)
                min_steps = temp_steps;

            if (max_steps < temp_steps)
                max_steps = temp_steps;

            all_steps += temp_steps;
            temp_steps = 0;
            result.Reset(0.0, 0.0);
        }
        
        std::cout << "\nMin steps count: " << min_steps << std::endl;
        std::cout << "Max steps count: " << max_steps << std::endl;
        std::cout << "Average steps count: " << all_steps / n << std::endl << std::endl;

        std::chrono::time_point<std::chrono::steady_clock> time2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> ms_double = time2 - time1;

        PROCESS_MEMORY_COUNTERS pmc;
        GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof pmc);
        
        std::cout << "Executed in " << ms_double.count() << " ms\n";
        std::cout << "Used " << pmc.PeakWorkingSetSize / 1048576 << " MBytes of memory\n\n";
        std::cout << "Enter target distance (q to quit): ";
    }

    std::cout << "Bye!\n";
}

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
