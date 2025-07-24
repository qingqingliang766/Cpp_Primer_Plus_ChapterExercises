/*
2. 编写一个程序，最多将10个donation值读入到一个double数组中（如果您愿意，也可使用模板类array）。
程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。*/
#include <iostream>
#include <array>
using namespace std;
int main ()
{
    int i = 0;
    double average =0.0;
    double sum =0.0;
    int bignumber =0;
    array <double,10> number;
    cout << "请输入数字： " << endl;
    while (i<10 && cin >> number[i])
    {
        sum += number[i];
        i++;
    }
    // 安全的平均值计算
    if (i > 0)average = sum / i;
    
    for(int j=0;j<i;j++)
    if (number[j] > average)bignumber++;
    cout << "平均数为： " << average << endl
        << "大于平均数的数的数量为： " << bignumber;
    
}