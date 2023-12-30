#include <cstdlib>
#include <iostream>

#include "Chapters/11th/EleventhChapter.h"

int main()
{
    const auto chapter = new EleventhChapter();
    chapter->RunFourthTask();

    free(chapter);
    return 0;
}
