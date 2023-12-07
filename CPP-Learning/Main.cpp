#include <cstdlib>
#include <iostream>

#include "Chapters/7th/SeventhChapter.h"

int main()
{
    const auto chapter = new SeventhChapter();
    chapter->RunFifthTask();

    free(chapter);
    return 0;
}
