#include "sales.h"
#include <iostream>
using namespace SALES;

    // 从数组ar中复制4个或n个（取较小值）元素到s的sales成员中，  
    // 并计算并存储所输入元素的平均值、最大值和最小值；  
    // sales中剩余的元素（如果有）设为0  
Sales::Sales(const double ar[],int n)//非交互
{
    double sum = 0;
    m_min = ar[0];
    m_max = ar[0];
    n > QUARTERS ? n=QUARTERS : n;
    for (int i = 0; i < n; i++)
    {
        m_sales[i] = ar[i];
        sum += ar[i];
        if (m_sales[i] < m_min)
        {m_min = m_sales[i];}    
        if (m_sales[i] > m_max)
        {m_max = m_sales[i];}
    }
    m_average = sum / n;
    for(int i = n; i < QUARTERS; i++)
        m_sales[i] = 0;
}
    // 交互式地收集4个季度的销售额，将其存储在s的sales成员中，  
    // 并计算并存储平均值、最大值和最小值  
Sales::Sales()//交互
{
    using std::cout,std::cin;
    double sum = 0;
    int count = 0;    
    while (count < QUARTERS)
    {
        cout << "请输入： "<< "\n";
        if (!(cin >> m_sales[count]))
        {   cin.clear();
            cin.ignore(1024,'\n');
            cout << "请输入有效数字：\n";
        }
        else
        {
            m_min = m_sales[0];
            m_max = m_sales[0];
            count++;
        }
    }
    for (int i = 0; i < QUARTERS; i++)
    {
        sum += m_sales[i];
        if (m_sales[i] < m_min)
            m_min = m_sales[i];
        if (m_sales[i] > m_max)
            m_max = m_sales[i];
    }
    m_average = sum / QUARTERS;  
}
    // 显示结构s中的所有信息  
void Sales::showSales() const
{
    using std::cout,std::cin;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << "第" << i+1 << "季度的销售额为： " << m_sales[i] << " ";
        cout << "\n";
    }
    cout << "最小值为： " << m_min << "\n";
    cout << "最大值为： " << m_max << "\n";
    cout << "平均值为： " << m_average << "\n";
}