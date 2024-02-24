﻿#pragma once

namespace sales
{
    class SalesClass
    {
    private:
        static constexpr int kQuarters = 4;
        double m_sales_[kQuarters] { };
        double m_average_;
        double m_max_;
        double m_min_;
    
    public:
        SalesClass() = default;
        SalesClass(const double array[], int n);
        
        void SetSales();
        void ShowSales() const;
    };
}