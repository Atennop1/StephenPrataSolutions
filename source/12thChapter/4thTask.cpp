#include <iostream>
#include "4thTaskFiles/Stack.h"

namespace TwelfthChapter
{
    void RunFourthTask()
    {
        Stack stack = Stack(1);
        std::cout << std::boolalpha << "Created stack with size 1, maximum size is 3.\n";
        std::cout << "Is stack full: " << stack.IsFull() << '\n';
        std::cout << "Is stack empty: " << stack.IsEmpty() << "\n\n";

        stack.Push(12);
        std::cout << "Pushed \"12\" in stack, " << "is stack full: " << stack.IsFull() << "\n";

        stack.Push(15);
        std::cout << "Pushed \"15\" in stack, " << "is stack full: " << stack.IsFull() << "\n";

        stack.Push(18);
        std::cout << "Pushed \"18\" in stack, " << "is stack full: " << stack.IsFull() << "\n\n";
        std::cout << "So you see that the stack size can grow on its own up to the maximum size, in which case the memory will be reallocated.\n\n";

        Stack copy = stack;
        std::cout << "Calling copy constructor...\n";
        std::cout << "Is copy full: " << copy.IsFull() << '\n';
        std::cout << "Is copy empty: " << copy.IsEmpty() << "\n\n";

        Item element = 0;
        copy.Pop(element);
        std::cout << "Popping elements from copy: " << element << " ";
        copy.Pop(element);
        std::cout << element << " ";
        copy.Pop(element);
        std::cout << element << '\n';

        std::cout << "So the copying was successful! Now copy is empty and original stack is full\n\nCalling the assignment operator...\n";
        stack = copy;
        std::cout << "Is stack full: " << stack.IsFull() << '\n';
        std::cout << "Is stack empty: " << stack.IsEmpty() << "\n\n";

        std::cout << "Now both stacks are empty. That means that everything works fine and there is no bugs in Stack class, cool!\n";
    }
}