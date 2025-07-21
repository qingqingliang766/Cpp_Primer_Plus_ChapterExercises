/*
编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。
当用户输入 0 时，程序结束。*/
#include <iostream>
using namespace std;
int main()
{
    double number;
    double sum = 0.0;
    while (true)
    {   
        cout << "请输入一个数字： （按0结束）" << endl;
        cin >> number;
        if (number == 0)
        break;
        cout << "你输入的是：" << number << endl;
        sum += number; 
    }
    cout << "输入的数字加起来是：" << sum;
    return 0;

}