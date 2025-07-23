/*
假设要销售 C++ For Fools 一书。请编写一个程序，
输入全年中每个月的销售量（图书数量，而不是销售额）。
程序通过循环，使用初始化为月份字符串的  char *  数组（或  string  对象数组）逐月进行提示，
并将输入的数据储存在一个  int  数组中。然后，程序计算数组中各元素的总数，
并报告这一年的销售情况。*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sales[12];
    const char* months[] = {"一月", "二月", "三月", "四月", "五月", "六月",
                       "七月", "八月", "九月", "十月", "十一月", "十二月"};
    
    // 输入每个月的销售量
    for (int i = 0; i < 12; i++) {
        cout << "请输入" << months[i] << "的销售量: ";
        cin >> sales[i];
    }
    
    // 计算总销售量
    int total = 0;
    for (int i = 0; i < 12; i++) {
        total += sales[i];
    }
    
    // 输出结果
    cout << "\n全年销售情况：" << endl;
    for (int i = 0; i < 12; i++) {
        cout << months[i] << ": " << sales[i] << "本" << endl;
    }
    cout << "全年总销售量: " << total << "本" << endl;
    
    return 0;
}