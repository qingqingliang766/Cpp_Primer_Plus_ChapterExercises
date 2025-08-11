#ifndef _SALES_H
#define _SALES_H
namespace SALES
{
class Sales
{
private:
    static const int QUARTERS = 4;
    double m_sales[QUARTERS];  // 四个季度的销售额
    double m_average;          // 平均销售额
    double m_max;              // 最大销售额
    double m_min;              // 最小销售额
public:

    Sales(const double ar[],int n);//非交互版本

    Sales();//交互版本

    void showSales() const;
};
};
#endif