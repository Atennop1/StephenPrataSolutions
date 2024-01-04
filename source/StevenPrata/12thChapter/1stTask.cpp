#include "1stTaskFiles/Cow.h"

namespace TwelfthChapter
{
    void RunFirstTask()
    {
        auto first = Cow();
        const auto second = Cow("andrew", "dota", 200);
        const auto third = Cow(second);
        first = second;

        first.ShowCow();
        second.ShowCow();
        third.ShowCow();
    }
}