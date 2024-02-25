#ifndef STEPHENPRATASOLUTIONS_6DB7559306AA46A0AD15591C775B5D09
#define STEPHENPRATASOLUTIONS_6DB7559306AA46A0AD15591C775B5D09

namespace sales
{
    constexpr int kQuarters = 4;

    struct Sales
    {
        double sales_[kQuarters];
        double average_;
        double max_;
        double min_;
    };

    void SetSales(Sales &sales);
    void SetSales(Sales &sales, const double array[], int n);
    void ShowSales(const Sales &sales);
}

#endif
