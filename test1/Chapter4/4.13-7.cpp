/*
William Wingate 从事比萨饼分析服务，需记录每个比萨的以下信息：
 
- 比萨饼公司的名称（可包含多个单词）；
- 比萨饼的直径；
- 比萨饼的重量。
 
要求：
 
1. 设计存储这些信息的结构；
2. 编写程序，使用该结构的变量：
- 通过  cin （或其方法）请求用户输入上述信息；
- 通过  cout  显示这些信息。*/
#include <iostream>
#include <string>
using namespace std;
struct William
{
    string name;
    double diameter;
    double weight;
};
William Wingate;
int main()
{   
    cout << "请分别输入名字和直径和重量" << endl;
    cin >> Wingate.name >> Wingate.diameter >> Wingate.weight;
    cout << "你输入的是： " << Wingate.name << "\t" << Wingate.diameter << "\t" << Wingate.weight;
}
