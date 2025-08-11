#ifndef SALES_H
#define SALES_H
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];  // 四个季度的销售额
        double average;          // 平均销售额
        double max;              // 最大销售额
        double min;              // 最小销售额
    };
    // 从数组ar中复制4个或n个（取较小值）元素到s的sales成员中，  
    // 并计算并存储所输入元素的平均值、最大值和最小值；  
    // sales中剩余的元素（如果有）设为0  
    void setSales(Sales & s, const double ar[], int n);

    // 交互式地收集4个季度的销售额，将其存储在s的sales成员中，  
    // 并计算并存储平均值、最大值和最小值  
    void setSales(Sales & s);

    // 显示结构s中的所有信息  
    void showSales(const Sales & s);
}



#endif