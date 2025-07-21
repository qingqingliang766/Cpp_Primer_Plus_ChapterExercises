//基于练习 6，修改要求：不声明包含 3 个元素的  CandyBar  数组，而是用  new  动态分配数组。
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
    CandyBar* bar = new CandyBar[3]{
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
    delete[] bar;
    return 0;
}