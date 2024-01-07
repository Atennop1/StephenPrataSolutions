# CPP-Learning
A repository for learning C++, in which I first did assignments from Steven Prata's book "C++ Primer Plus (6th edition)", but then, on the advice of the Internet, I stopped reading it at chapter 12 and switched to assignments from CodeWars
<br>It is also worth saying that in early tasks there may be things unknown to the reader that I added due to IDE prompts, and also not all tasks here are completed as the author intended. For example, in task 5 of chapter 10 it was necessary to use the stack class from the book, which worked on `typedef`, and I made my own stack on `templates` ;)

## Tasks structure
The project has every task from Steven Prata's book up to and including task 2 of chapter 12, after which I stopped reading this book. In the `source/StevenPrata` folder there are folders with each chapter, and inside these folders there are files with the tasks themselves and a `Declarations.h` file so that the tasks can be included in main.cpp. Each chapter's assignments are in their own namespace to avoid conflicts.
<br>Also there is `source/StevenPrata/Declarations.h` file for quickly connecting all tasks. Thus, the launch code for 3th task of 11th chapter will look like this:

```cpp
#include "StevenPrata/Declarations.h"

int main()
{
    EleventhChapter::RunThirdTask();
    return 0;
}
```

The structure of tasks with CodeWars is similar, there is a folder `source/CodeWars`, in which tasks are divided by kyu, from 8 to 1, each kyu has its own `Declarations.h` and its own namespace, and of course there is `source/CodeWars/Declarations.h` file for fast access to all tasks from main.cpp
<br><br>Same thing with LeetCode, there is a folder `source/LeetCode`, in which tasks are divided by difficulty, from easy to hard, each difficulty has its own `Declarations.h` and its own namespace, and there is `source/LeetCode/Declarations.h` file for fast access to all tasks from main.cpp
