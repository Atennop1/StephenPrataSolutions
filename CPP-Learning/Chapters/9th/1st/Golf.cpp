#include "Golf.h"

#include <iostream>

int SetGolf(Golf& golf)
{
    char name[kLength];
    std::cout << "Enter golfer's name: ";
    
    if (!std::cin.get(name, kLength))
        return 0;

    strcpy_s(golf.full_name_, kLength, name);
    std::cout << "Enter golfer's handicap: ";
    (std::cin >> golf.handicap_).get();
    return 1;
}

void SetGolf(Golf &golf, const char *name, const int handicap)
{
    strcpy_s(golf.full_name_, kLength, name);
    SetHandicap(golf, handicap);
}

void SetHandicap(Golf &golf, const int handicap)
{
    golf.handicap_ = handicap;
}

void ShowGolf(const Golf &golf)
{
    std::cout << "Golfer's name: " << golf.full_name_ << std::endl;
    std::cout << "Golfer's handicap: " << golf.handicap_ << std::endl;
}
