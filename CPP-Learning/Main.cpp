#include <cstdlib>
#include <iostream>

#include "Chapters/10th/TenthChapter.h"

int main()
{
    const auto chapter = new TenthChapter();
    chapter->RunSecondTask();

    free(chapter);
    return 0;
}
