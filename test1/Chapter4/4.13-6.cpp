// 假设  CandyBar  结构包含 3 个成员（同练习 5 的结构定义），编写程序： 
// - 创建一个包含 3 个元素的  CandyBar  数组；
// - 将数组元素初始化为自定义的值；
// - 显示每个结构的内容。
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand;
    double weight;
    int calories;
};
int main()
{
    CandyBar bar [3] = 
    {
        {"one",10,10},
        {"two",20,20},
        {"three",30,30}
    };
    cout << bar[0].brand << endl
        <<bar[0].calories << endl
        << bar[0].weight << endl;

    cout << bar[1].brand << endl
        <<bar[1].calories << endl
        << bar[1].weight << endl;

    cout << bar[2].brand << endl
    <<bar[2].calories << endl
    << bar[2].weight << endl;

    return 0;
}
