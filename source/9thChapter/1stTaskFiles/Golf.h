#ifndef STEPHENPRATASOLUTIONS_B79870A941C64F9E99242F0B66F1949C
#define STEPHENPRATASOLUTIONS_B79870A941C64F9E99242F0B66F1949C

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

#endif
