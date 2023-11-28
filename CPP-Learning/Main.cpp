#include <cstdlib>
#include <iostream>

#include "Chapters/6th/SixthChapter.h"

int main()
{
    const auto chapter = new SixthChapter();
    chapter->RunFirstTask();

    free(chapter);
    return 0;
}
