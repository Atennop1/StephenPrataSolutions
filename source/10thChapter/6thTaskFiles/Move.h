#ifndef STEPHENPRATASOLUTIONS_6DDE43B697BB4D03911DEDA0468AAF39
#define STEPHENPRATASOLUTIONS_6DDE43B697BB4D03911DEDA0468AAF39

class Move
{
private:
    double m_x_;
    double m_y_;

public:
    explicit Move(double a = 0, double b = 0);
    void Reset(double a = 0, double b = 0);

    void ShowMove() const;
    Move Add(const Move &move) const;
};

#endif
