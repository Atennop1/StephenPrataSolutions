#include <cstdlib>
#include <iostream>

#include "Chapters/Fifth/FifthChapter.h"

int main()
{
    const auto chapter = new FifthChapter();
    chapter->RunFourthTask();

    free(chapter);
    return 0;
}
