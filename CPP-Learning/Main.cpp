#include <cstdlib>
#include <iostream>

#include "Chapters/10th/TenthChapter.h"

int main()
{
    const auto chapter = new TenthChapter();
    chapter->RunFifthTask();

    free(chapter);
    return 0;
}
