#ifndef STEPHENPRATASOLUTIONS_3B10C7722CA648C49787D97CEED0F039
#define STEPHENPRATASOLUTIONS_3B10C7722CA648C49787D97CEED0F039

namespace TwelfthChapter
{
    typedef unsigned long Item;

    class Stack
    {
    private:
        static const int m_maximum_ = 3;
        Item *m_items_;
        int m_top_index_;
        int m_size_;

    public:
        explicit Stack(int size = 10);
        Stack(const Stack &stack);
        ~Stack();

        bool IsEmpty() const;
        bool IsFull() const;
        bool Push(const Item &item);
        bool Pop(Item &item);

        Stack& operator=(const Stack &stack);
    };
}

#endif
