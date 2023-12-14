#include <cstdlib>
#include <iostream>

#include "Chapters/8th/EighthChapter.h"

int main()
{
    const auto chapter = new EighthChapter();
    chapter->RunThirdTask();

    free(chapter);
    return 0;
}
