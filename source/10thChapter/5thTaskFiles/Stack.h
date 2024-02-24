#pragma once

template <typename T>
class Stack
{
private:
    int m_size_ ;
    T *m_items_;
    int m_top_index_;
    
public:
    explicit Stack(const int size)
    {
        m_top_index_ = -1;
        m_size_ = size;
        m_items_ = new T[size];
    }
    
    ~Stack()
    {
        delete[] m_items_;
    }
    
    bool IsFull() const
    {
        return m_top_index_ + 1 == m_size_; 
    }
    
    bool IsEmpty() const
    {
        return m_top_index_ == -1; 
    }
    
    void Push(const T &item)
    {
        if (IsFull())
            return;

        m_top_index_++;
        m_items_[m_top_index_] = item;
    }
    
    T Peek() const
    {
        return m_items_[m_top_index_];
    }
    
    void Pop()
    {
        if (IsEmpty())
            return;
    
        m_top_index_--;
    }
};
