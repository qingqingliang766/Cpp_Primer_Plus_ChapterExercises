/*完成编程练习 5，但这一次使用一个二维数组来存储输入——3 年中每个月的销售量。
程序将报告 每年销售量 以及 三年的总销售量。
*/
/*练习5的题目：
假设要销售 C++ For Fools 一书。请编写一个程序，
输入全年中每个月的销售量（图书数量，而不是销售额）。
程序通过循环，使用初始化为月份字符串的  char *  数组（或  string  对象数组）逐月进行提示，
并将输入的数据储存在一个  int  数组中。然后，程序计算数组中各元素的总数，
并报告这一年的销售情况。*/
#include <iostream>
using namespace std;
int main()
{
    const char* months[12] = {"一月", "二月", "三月", "四月", "五月", "六月",
                       "七月", "八月", "九月", "十月", "十一月", "十二月"};
    int sales[3][12];

    // 输入三年的销售数据
    for(int i=0; i<3; i++)
    {
        cout << "请输入第" << i+1 << "年的每月销售量：" << endl;
        cout << "---------------------------------" << endl;
        for(int month=0; month<12; month++)
        {
            cout << "请输入" << months[month] << "的销售量: ";
            cin >> sales[i][month];
        }
    }

    // 输出每年销售明细并计算年度销售总和
    int yearly_sum[3] = {0};
    for(int i=0; i<3; i++)
    {
        cout << "\n第" << i+1 << "年销售明细：" << endl;
        cout << "---------------------------------" << endl;
        for(int month=0; month<12; month++)
        {
            cout << months[month] << "销售量: " << sales[i][month] << endl;
            yearly_sum[i] += sales[i][month];
        }
        cout << "第" << i+1 << "年销售总和: " << yearly_sum[i] << endl;
        cout << "---------------------------------" << endl;
    }
    // 计算三年总销售额
    int total = 0;
    for(int i=0; i<3; i++)
    {
        total += yearly_sum[i];
    }
    
    cout << "\n======================================" << endl;
    cout << "三年总销售总额: " << total << endl;
    cout << "======================================" << endl;

    return 0;
}