#include <iostream>

namespace SeventhChapter
{
    constexpr int kStringLength = 30;

    struct Student
    {
        char full_name_[kStringLength];
        char hobby_[kStringLength];
        int oop_level_;
    };

    int GetInfo(Student students[], int n)
    {
        int i;

        for (i = 0; i < n; i++)
        {
            std::cout << "Enter #" << i + 1 << " student full name: ";
            if (!std::cin.get(students[i].full_name_, kStringLength))
                break;

            std::cout << "Enter #" << i + 1 << " student hobby: ";
            std::cin >> students[i].hobby_;

            std::cout << "Enter #" << i + 1 << " student OOP level: ";
            std::cin >> students[i].oop_level_;
            std::cin.get();
            std::cout << std::endl;
        }

        return i;
    }

    void Display1(const Student& student)
    {
        std::cout << "Student full name: " << student.full_name_ << std::endl;
        std::cout << "Student hobby: " << student.hobby_ << std::endl;
        std::cout << "Student OOP level: " << student.oop_level_ << std::endl;
    }

    void Display2(const Student *student)
    {
        std::cout << "Student full name: " << student->full_name_ << std::endl;
        std::cout << "Student hobby: " << student->hobby_ << std::endl;
        std::cout << "Student OOP level: " << student->oop_level_ << std::endl;
    }

    void Display3(Student students[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << std::endl;
            Display1(students[i]);
        }
    }

    void RunNinthTask()
    {
        int class_size;
        std::cout << "Enter class size: ";

        std::cin >> class_size;
        while (std::cin.get() != '\n') { }

        std::cout << std::endl;
        const auto students = new Student[class_size];
        const int entered = GetInfo(students, class_size);

        for (int i = 0; i < entered; i++)
        {
            std::cout << std::endl;
            Display1(students[i]);
            Display2(&students[i]);
        }

        std::cout << std::endl;
        Display3(students, entered);
        delete[] students;
        std::cout << std::endl << std::endl << "Done\n";
    }
}