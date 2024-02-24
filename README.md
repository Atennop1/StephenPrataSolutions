# StephenPrataSolutions
A repository for learning C++, in which I do assignments from Steven Prata's book "C++ Primer Plus (6th edition)"
<br>It is also worth saying that in early tasks there may be things unknown to the reader that I added due to IDE prompts, and also not all tasks here are completed as the author intended. For example, in task 5 of chapter 10 it was necessary to use the stack class from the book, which worked on `typedef`, and I made my own stack on `templates` ;)

## Tasks structure
The project has every task from Steven Prata's book up to and including tasks, on which I am right now. In the `source` folder there are folders with each chapter, and inside these folders there are files with the tasks themselves and a `Declarations.h` file so that the tasks can be included in main.cpp. Each chapter's assignments are in their own namespace to avoid conflicts.
<br>Also there is `source/Declarations.h` file for quickly connecting all tasks. Thus, the launch code for 3th task of 11th chapter will look like this:

```cpp
#include "source/Declarations.h"

int main()
{
    EleventhChapter::RunThirdTask();
    return 0;
}
```
