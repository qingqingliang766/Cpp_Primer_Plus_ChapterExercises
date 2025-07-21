/*
编写一个要求用户输入两个整数的程序。
该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。
这里假设先输入较小的整数。例如，如果用户输入的是 2 和 9，则程序将指出 2~9 之间所有整数的和为 44。*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int sum;
    cout << "请输入两个整数： " << endl;
    cin >> a >> b;
    for (int i = a;a<=b;a++)
    {
        sum += a;
    }
    cout << sum;
    return 0;
}