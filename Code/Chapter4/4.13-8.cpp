/*
基于练习 7，修改要求：
 
- 不声明结构变量，而是用  new  动态为结构分配内存；
- 程序在请求输入比萨饼公司名称之前，先输入比萨饼的直径。*/
#include <iostream>
#include <string>
using namespace std;
struct William
{
    string name;
    double diameter;
    double weight;
};
William* Wingate = new William;
int main()
{   
    cout << "请分别输入直径和名字和重量" << endl;
    cin >> Wingate->diameter >> Wingate->name >> Wingate->weight;
    cout << "你输入的是： " << Wingate->name << "\t" << Wingate->diameter << "\t" << Wingate->weight;
    delete Wingate;
    return 0;

}