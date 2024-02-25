#ifndef STEPHENPRATASOLUTIONS_92870C4D31FE4A08B086B8218452AEC6
#define STEPHENPRATASOLUTIONS_92870C4D31FE4A08B086B8218452AEC6

class GolfClass
{
private:
    static constexpr int kLength = 40;
    char m_full_name_[kLength] { };
    int m_handicap_ { };

public:
    GolfClass();
    GolfClass(const char *name, int handicap);
    int SetGolf();

    void SetHandicap(int handicap);
    void ShowGolf() const;
};

#endif
