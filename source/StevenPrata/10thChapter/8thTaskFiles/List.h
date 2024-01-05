#pragma once

typedef long Item;

class List
{
    int m_capacity_;
    int m_count_;
    Item *m_items_;
    
public:
    explicit List(int capacity = 10);
    ~List();

    bool IsEmpty() const;
    bool IsFull() const;
    
    void Add(const Item &item);
    void Visit(void (*visitor)(Item&));
};
