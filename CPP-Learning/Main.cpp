#include <cstdlib>
#include "Chapters/Third/ThirdChapter.h"

int main()
{
    const auto chapter = new ThirdChapter();
    chapter->RunFirstTask();

    free(chapter);
    return 0;
}
