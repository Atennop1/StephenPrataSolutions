#include <cstdlib>
#include "Chapters/Fourth/FourthChapter.h"

int main()
{
    const auto chapter = new FourthChapter();
    chapter->RunTenthTask();

    free(chapter);
    return 0;
}
