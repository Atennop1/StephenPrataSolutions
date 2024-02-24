#include <iostream>

namespace SeventhChapter
{
    struct Box
    {
        char maker_[40];
        float height_;
        float width_;
        float length_;
        float volume_;
    };

    void FunctionA(Box box)
    {
        std::cout << "Box maker: " << box.maker_ << std::endl;
        std::cout << "Box height: " << box.height_ << std::endl;
        std::cout << "Box width: " << box.width_ << std::endl;
        std::cout << "Box length: " << box.length_ << std::endl;
        std::cout << "Box volume: " << box.volume_ << std::endl << std::endl;
    }

    void FunctionB(Box &box)
    {
        box.volume_ = box.height_ * box.width_ * box.length_;
    }

    void RunThirdTask()
    {
        Box box = { "Pavel Durov", 14.3f, 7.4f, 11.7f, 0.0f };
        FunctionA(box);

        FunctionB(box);
        FunctionA(box);
    }
}