#include <iostream>
#include <fstream>
#include "1stTaskFiles/Vector.h"

namespace EleventhChapter
{
    void RunFirstTask()
    {
        srand((unsigned int)time(nullptr));
        double step_direction;
        double step_magnitude;

        auto step_vector = Vector();
        auto result = Vector(0.0, 0.0);

        unsigned long steps = 0;
        double target_magnitude;
        std::ofstream file;
        file.open("source/StevenPrata/11thChapter/1stTaskFiles/output.txt");

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
}