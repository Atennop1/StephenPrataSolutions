#include <cstdlib>
#include <iostream>

#include "Chapters/10th/TenthChapter.h"

int main()
{
    const auto chapter = new TenthChapter();
    chapter->RunFourthTask();

    free(chapter);
    return 0;
}
