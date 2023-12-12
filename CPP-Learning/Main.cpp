#include <cstdlib>
#include <iostream>

#include "Chapters/8th/EighthChapter.h"

int main()
{
    const auto chapter = new EighthChapter();
    chapter->RunFirstTask();

    free(chapter);
    return 0;
}
