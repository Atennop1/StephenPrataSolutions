﻿#include "Move.h"

#include <iostream>
#include <ostream>

Move::Move(const double a, const double b)
{
    m_x_ = a;
    m_y_ = b;
}

void Move::Reset(const double a, const double b)
{
    *this = Move(a, b);
}

void Move::ShowMove() const
{
    std::cout << "Move X: " << m_x_ << std::endl;
    std::cout << "Move Y: " << m_y_ << std::endl;
}

Move Move::Add(const Move& move) const
{
    return Move(m_x_ + move.m_x_, m_y_ + move.m_y_);
}

