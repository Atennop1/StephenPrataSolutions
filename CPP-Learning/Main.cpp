#include <cstdlib>
#include "Chapters/Second/SecondChapter.h"

int main()
{
    const auto chapter = new SecondChapter();
    chapter->RunSeventhTask();

    free(chapter);
    return 0;
}