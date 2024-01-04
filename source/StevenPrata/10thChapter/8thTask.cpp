#include <iostream>
#include "8thTaskFiles/List.h"

namespace TenthChapter
{
    void ShowElements(Item &item)
    {
        std::cout << "Element: " << item << std::endl;
    }

    void SquareElements(Item &item)
    {
        item *= item;
    }

    void RunEighthTask()
    {
        std::cout << std::boolalpha;

        auto list = List(3);
        std::cout << "Is list empty after creation: " << list.IsEmpty() << std::endl;
        std::cout << "Is list full after creation: " << list.IsFull() << std::endl << std::endl;

        list.Add(12);
        list.Add(3);
        list.Add(59);

        std::cout << "Is list empty after adding elements: " << list.IsEmpty() << std::endl;
        std::cout << "Is list full after adding elements: " << list.IsFull() << std::endl << std::endl;

        list.Visit(ShowElements);
        std::cout << std::endl;

        list.Visit(SquareElements);
        list.Visit(ShowElements);
        std::cout << std::endl;
    }
}