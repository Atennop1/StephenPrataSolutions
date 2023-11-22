#include <cstdlib>
#include <iostream>

#include "Chapters/5th/FifthChapter.h"

int main()
{
    const auto chapter = new FifthChapter();
    chapter->RunSixthTask();

    free(chapter);
    return 0;
}
