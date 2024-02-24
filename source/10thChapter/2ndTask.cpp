#include <iostream>
#include "2ndTaskFiles/Person.h"

namespace TenthChapter
{
    void RunSecondTask()
    {
        const Person one;
        const Person two("Smythecraft");
        const Person three("Dimwiddy", "Sam");

        one.Show();
        two.Show();
        three.Show();

        std::cout << std::endl;

        one.FormalShow();
        two.FormalShow();
        three.FormalShow();
    }
}