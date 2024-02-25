#include "Stock.h"
#include <cstring>
#include <iostream>

namespace TwelfthChapter
{
    Stock::Stock(const char *company_name, long count, double price)
    {
        m_company_name_ = new char[strlen(company_name) + 1];
        strcpy(m_company_name_, company_name);

        m_shares_count_ = count;
        if (count < 0)
        {
            std::cout << "Number of shares can't be negative";
            m_shares_count_ = 0;
        }

        m_share_price_ = price;
        CalculateAndSetTotalValue();
    }

    Stock::Stock(const Stock &stock)
        : Stock(stock.m_company_name_, stock.m_shares_count_, stock.m_share_price_) { }

    Stock::Stock()
        : Stock("no name", 0, 0.0) { }

    Stock::~Stock()
        { delete m_company_name_; }

    void Stock::Buy(long count, double price)
    {
        if (count < 0)
        {
            std::cout << "Number of shares purchased can't be negative. Transaction is aborted.\n";
            return;
        }

        m_shares_count_ += count;
        Update(price);
    }

    void Stock::Sell(long count, double price)
    {
        if (count < 0)
        {
            std::cout << "Number of shares sold can't be negative. Transaction is aborted.\n";
            return;
        }

        if (count > m_shares_count_)
        {
            std::cout << "You can't sell more than you have! Transaction is aborted.\n";
            return;
        }

        m_shares_count_ -= count;
        Update(price);
    }

    void Stock::Update(double price)
    {
        m_share_price_ = price;
        CalculateAndSetTotalValue();
    }

    const Stock &Stock::TopValue(const Stock &stock) const
        { return (stock.m_total_value_ > m_total_value_ ? stock : *this); }

    Stock &Stock::operator=(const Stock &stock)
    {
        if (&stock == this)
            return *this;

        delete m_company_name_;
        m_company_name_ = new char[strlen(stock.m_company_name_) + 1];
        strcpy(m_company_name_, stock.m_company_name_);
        m_shares_count_ = stock.m_shares_count_;
        m_share_price_ = stock.m_share_price_;
        CalculateAndSetTotalValue();

        return *this;
    }

    std::ostream &operator<<(std::ostream &stream, const Stock &stock)
    {
        std::ios_base::fmtflags original = stream.setf(std::ios_base::fixed, std::ios_base::floatfield);
        std::streamsize precision = stream.precision(3);

        stream << "Company: " << stock.m_company_name_ << "  Shares: " << stock.m_shares_count_ << '\n';
        stream << " Share Price $" << stock.m_share_price_;
        stream.precision(2);
        stream << "  Total Worth: $" << stock.m_total_value_ << '\n';

        stream.setf(original);
        stream.precision(precision);
        return stream;
    }
}