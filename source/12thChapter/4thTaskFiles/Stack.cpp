#include <algorithm>
#include "Stack.h"

namespace TwelfthChapter
{
    Stack::Stack(int size)
    {
        if (size < 0 || size > m_maximum_)
            size = m_maximum_;

        m_items_ = new Item[size];
        m_size_ = size;
        m_top_index_ = -1;
    }

    Stack::Stack(const Stack &stack)
    {
        m_top_index_ = stack.m_top_index_;
        m_size_ = stack.m_size_;

        m_items_ = new Item[m_size_];
        std::copy(stack.m_items_, stack.m_items_ + m_size_, m_items_);
    }

    Stack::~Stack()
    {
        delete[] m_items_;
    }

    bool Stack::IsEmpty() const
    {
        return m_top_index_ == -1;
    }

    bool Stack::IsFull() const
    {
        return m_top_index_ == (m_maximum_ - 1);
    }

    bool Stack::Push(const Item &item)
    {
        if (IsFull())
            return false;

        m_top_index_++;
        if (m_top_index_ == m_size_)
        {
            m_size_++;
            Item *old_items = m_items_;
            m_items_ = new Item[m_size_];

            std::copy(old_items, old_items + m_size_ - 1, m_items_);
            delete[] old_items;
        }

        m_items_[m_top_index_] = item;
        return true;
    }

    bool Stack::Pop(Item &item)
    {
        if (IsEmpty())
            return false;

        item = m_items_[m_top_index_];
        m_top_index_--;
        return true;
    }

    Stack &Stack::operator=(const Stack &stack)
    {
        if (this == &stack)
            return *this;

        delete[] m_items_;
        m_top_index_ = stack.m_top_index_;
        m_size_ = stack.m_size_;

        m_items_ = new Item[m_size_];
        std::copy(stack.m_items_, stack.m_items_ + m_size_, m_items_);
        return *this;
    }
}