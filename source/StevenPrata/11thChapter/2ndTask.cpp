#include <iostream>
#include "2ndTaskFiles/VectorRect.h"

namespace EleventhChapter
{
    void RunSecondTask()
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
}