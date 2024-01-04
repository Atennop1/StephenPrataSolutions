#include <iostream>

namespace FourthChapter
{
    void RunFirstTask()
    {
        int age;
        char grade;

        char first_name[20];
        char last_name[20];

        std::cout << "What is your first name? ";
        std::cin.getline(first_name, sizeof(first_name) / sizeof(char));

        std::cout << "What is your last name? ";
        std::cin >> last_name;

        std::cout << "What letter grade do you deserve? ";
        std::cin >> grade;
        grade += 1;

        std::cout << "What is your age? ";
        std::cin >> age;

        std::cout << std::endl << "Name: " <<  last_name << ", " << first_name << std::endl;
        std::cout << "Grade: " << grade << std::endl;
        std::cout << "Age: " << age;
    }
}