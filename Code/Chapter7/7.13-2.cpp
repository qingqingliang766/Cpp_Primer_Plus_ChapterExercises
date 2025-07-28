/*
2. 编写一个程序，要求用户输入最多 10 个高尔夫成绩，
并将其存储在一个数组中。程序允许用户提前结束输入，
并在一行上显示所有成绩，然后报告平均成绩。
请使用 3 个数组处理函数来分别进行：
- 输入（获取高尔夫的成绩）；
- 显示（显示所有成绩）；
- 计算平均成绩（计算平均成绩）。*/
#include <iostream>
#include <array>
int main()
{
    return 0;
}
input()
{
    std::array <double,10> count;
    int i = 0;
    std::cout << "请输入成绩（输入0退出）\n";
    while (std::cin >> count[i])
    {
        if(count[i] == 0)break;
        i++;
    }
    
}