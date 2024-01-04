#include <iostream>

namespace SixthChapter
{
    constexpr int kArraySize = 50;

    struct BOP
    {
        char fullname_[kArraySize];
        char title_[kArraySize];
        char bop_name_[kArraySize];
        int preference_;
    };

    void RunFourthTask()
    {
        BOP bop_programmers[5] =
                {
                        { "Wimp Macho", "Project Manager", "WAMPUS", 0 },
                        { "Raki Rhodes", "Junior Programmer", "RAMZES", 1 },
                        { "Celia Laiter", "Architect", "MIPS", 2 },
                        { "Hoppy Hipman", "Analyst Trainee", "HIPPO", 1 },
                        { "Pat Hand", "Senior Software Engineer", "LOOPY", 2 }
                };

        char temp_line[kArraySize];
        std::cout << "Benevolent Order of Programmers Report\n" <<
                  "a. display by name      b. display by title\nc. display by bopname   d. display by preference\nq. quit\n";

        std::cout << "Enter your choice: ";
        while (true)
        {
            std::cin.getline(temp_line, kArraySize);

            switch (temp_line[0])
            {
                case 'a':
                    for (const BOP &programmer : bop_programmers)
                        std::cout << programmer.fullname_ << std::endl;

                    break;

                case 'b':
                    for (const BOP &programmer : bop_programmers)
                        std::cout << programmer.title_ << std::endl;

                    break;

                case 'c':
                    for (const BOP &programmer : bop_programmers)
                        std::cout << programmer.bop_name_ << std::endl;

                    break;

                case 'd':
                    for (const BOP &programmer : bop_programmers)
                    {
                        if (programmer.preference_ == 0) std::cout << programmer.fullname_ << std::endl;
                        else if (programmer.preference_ == 1) std::cout << programmer.title_ << std::endl;
                        else std::cout << programmer.bop_name_ << std::endl;
                    }

                    break;

                case 'q':
                    std::cout << "Bye!\n";
                    goto exit;

                default:
                    std::cout << "Unknown code" << std::endl;
                    break;
            }

            std::cout << "Next choice: ";
        }

        exit:;
    }
}