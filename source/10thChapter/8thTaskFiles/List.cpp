﻿#include "List.h"

List::List(const int capacity)
{
    m_count_ = 0;
    m_capacity_ = capacity;
    m_items_ = new Item[m_capacity_];
}

List::~List()
{
    delete[] m_items_;
}

bool List::IsEmpty() const
{
    return m_count_ == 0;
}

bool List::IsFull() const
{
    return m_count_ == m_capacity_;
}

void List::Add(const Item& item)
{
    if (IsFull())
        return;
    
    m_items_[m_count_] = item;
    m_count_++;
}

void List::Visit(void (*visitor)(Item&))
{
    if (IsEmpty())
        return;

    for (int i = 0; i < m_count_; i++)
        visitor(m_items_[i]);
}
