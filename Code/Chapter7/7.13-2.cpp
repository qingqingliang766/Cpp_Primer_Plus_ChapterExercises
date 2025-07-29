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
std::array<double,10> input(int& count);
void show(std::array<double,10>& score,int count);
double average(std::array<double,10>& score,int& count);
int main()
{
    int count = 0;
    std::array<double,10> score = input(count);
    show(score,count);
    average(score,count);
    return 0;
}
std::array<double,10> input(int& count)
{
    std::array <double,10> score;
    int i = 0;
    std::cout << "请输入成绩（输入0退出）\n";
    while (i<10)
    {
        std::cin >> score[i];
        if(score[i] == 0)break;
        i++;
    }
    count = i;
    return score;
}
void show(std::array<double,10>& score,int count)
{
    std::cout << "显示所有成绩： " << std::endl;
    for(int i = 0; i < count; i++)
    std::cout << score[i] << " ";
}
double average(std::array<double,10>& score,int& count)
{
    double sum = 0;
    double average = 0;
    for(int i = 0; i < count; i++)
    sum += score[i];
    average = sum / count;
    std::cout << std::endl << average;
    return average;
}