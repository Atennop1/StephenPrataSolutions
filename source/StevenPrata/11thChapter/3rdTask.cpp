#include <iostream>
#include <windows.h>
#include <psapi.h>
#include <chrono>
#include "2ndTaskFiles/VectorRect.h"

namespace EleventhChapter
{
    void RunThirdTask()
    {
        int n;
        srand((unsigned int)time(nullptr));
        std::chrono::time_point<std::chrono::system_clock> time1;

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

            std::chrono::time_point<std::chrono::system_clock> time2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> ms_double = time2 - time1;

            PROCESS_MEMORY_COUNTERS_EX pmc;
            GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof pmc);

            std::cout << "Executed in " << ms_double.count() << " ms\n";
            std::cout << "Process used " << pmc.PeakWorkingSetSize / 1048576 << " MBytes of physical memory\n";
            std::cout << "Process used " << pmc.PrivateUsage / 1048576 << " MBytes of virtual memory\n\n";
            std::cout << "Enter target distance (q to quit): ";
        }

        std::cout << "Bye!\n";
    }
}