#include <cstdlib>
#include <iostream>

#include "Chapters/12th/TwelfthChapter.h"

int main()
{
    const auto chapter = new TwelfthChapter();
    chapter->RunSecondTask();

    free(chapter);
    return 0;
}
