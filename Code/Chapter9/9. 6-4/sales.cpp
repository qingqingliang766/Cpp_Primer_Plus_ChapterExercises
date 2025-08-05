#include <iostream>
#include "sales.h"
namespace SALES
{

    // 从数组ar中复制4个或n个（取较小值）元素到s的sales成员中，  
    // 并计算并存储所输入元素的平均值、最大值和最小值；  
    // sales中剩余的元素（如果有）设为0
void setSales(Sales & s, const double ar[], int n)
{
    (0 == n || n > QUARTERS) ? n = QUARTERS : n = n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
        if (0 == i)
        {
            s.max = s.sales[0];
            s.min = s.sales[0];
        }
        if (s.sales[i] > s.max)s.max = s.sales[i];
        if (s.sales[i] < s.min)s.min = s.sales[i];
        sum += s.sales[i];
    }
    s.average = sum / n;
    for (int i = n; i < QUARTERS; i++)
        s.sales[i] = 0;    

}

    // 交互式地收集4个季度的销售额，将其存储在s的sales成员中，  
    // 并计算并存储平均值、最大值和最小值  
void setSales(Sales & s)
{
    using namespace std;
    double sum = 0;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << "请输入每个季度的销售额： " << endl;
        while (!(cin >> s.sales[i]))
        {
            cout << "输入错误，请输入一个数字：";
            cin.clear();
            cin.ignore(1000, '\n');
        }   
        if (0 == i)
        {
            s.max = s.sales[0];
            s.min = s.sales[0];
        }
        if (s.sales[i] > s.max)s.max = s.sales[i];
        if (s.sales[i] < s.min)s.min = s.sales[i];
        sum += s.sales[i];
    }
    s.average = sum / QUARTERS;
}
// 显示结构s中的所有信息  
void showSales(const Sales & s)
{
    using namespace std;
    cout << "显示结构s中的所有信息 " << endl;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << s.sales[i] << " " << endl;
    }
    cout << "平均值为： " << s.average << endl;
    cout << "最小值为： " << s.min << endl;
    cout << "最大值为： " << s.max << endl;
}
}