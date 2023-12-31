#include <cstdlib>
#include <iostream>

#include "Chapters/11th/EleventhChapter.h"

int main()
{
    const auto chapter = new EleventhChapter();
    chapter->RunThirdTask();

    free(chapter);
    return 0;
}
