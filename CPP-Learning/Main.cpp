#include <cstdlib>
#include "Chapters/Fourth/FourthChapter.h"

int main()
{
    const auto chapter = new FourthChapter();
    chapter->RunNinthTask();

    free(chapter);
    return 0;
}
