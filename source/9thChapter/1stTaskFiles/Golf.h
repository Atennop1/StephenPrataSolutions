﻿#pragma once

constexpr int kLength = 40;

struct Golf
{
    char full_name_[kLength];
    int handicap_;
};

int SetGolf(Golf &golf);
void SetGolf(Golf &golf, const char *name, int handicap);
void SetHandicap(Golf &golf, int handicap);
void ShowGolf(const Golf &golf);
