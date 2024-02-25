#ifndef STEPHENPRATASOLUTIONS_8DF65515E2F84709BC56AF1A2D69CD20
#define STEPHENPRATASOLUTIONS_8DF65515E2F84709BC56AF1A2D69CD20

#include <ostream>

namespace TwelfthChapter
{
    class Stock
    {
    private:
        char *m_company_name_ { };
        int m_shares_count_ { };
        double m_share_price_ { };

        double m_total_value_ { };
        void CalculateAndSetTotalValue() { m_total_value_ = m_shares_count_ * m_share_price_; }


    public:
        explicit Stock(const char *company_name, long count = 0, double price = 0.0);
        Stock(const Stock &stock);
        Stock();
        ~Stock();

        void Buy(long count, double price);
        void Sell(long count, double price);
        void Update(double price);
        const Stock& TopValue(const Stock &stock) const;

        Stock& operator=(const Stock& stock);
        friend std::ostream& operator<<(std::ostream& stream, const Stock& stock);
    };
}

#endif
