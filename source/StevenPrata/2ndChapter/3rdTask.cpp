#include <iostream>

namespace SecondChapter
{
    void ThirdTaskFirstMethod()
    {
        std::cout << "Three blind mice" << std::endl;
    }

    void ThirdTaskSecondMethod()
    {
        std::cout << "See how they run" << std::endl;
    }

    void RunThirdTask()
    {
        ThirdTaskFirstMethod();
        ThirdTaskFirstMethod();

        ThirdTaskSecondMethod();
        ThirdTaskSecondMethod();
    }
}
