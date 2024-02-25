#ifndef STEPHENPRATASOLUTIONS_16532D989A9540BBB17E9C282DA19043
#define STEPHENPRATASOLUTIONS_16532D989A9540BBB17E9C282DA19043

template <typename T>
class Stack
{
private:
    const static int m_size_ = 10;
    T m_items_[m_size_];
    int m_top_index_;

public:
    explicit Stack()
    {
        m_top_index_ = -1;
    }

    bool IsFull() const
    {
        return m_top_index_ + 1 == m_size_;
    }

    bool IsEmpty() const
    {
        return m_top_index_ == -1;
    }

    bool Push(const T &item)
    {
        if (IsFull())
            return false;

        m_top_index_++;
        m_items_[m_top_index_] = item;
        return true;
    }

    T Peek() const
    {
        return m_items_[m_top_index_];
    }

    bool Pop()
    {
        if (IsEmpty())
            return false;

        m_top_index_--;
        return true;
    }
};

#endif
