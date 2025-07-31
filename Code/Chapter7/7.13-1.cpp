/*
1. 编写一个程序，不断要求用户输入两个数，直到其中的一个为 0。对于每个数对，程序将使用函数来计算它们的调和平均数，并输出结果（同时在  main()  中调用，然后查看报告结果）。调和平均数的计算方式如下：
调和平均数 = 2 * x * y / (x + y)*/
#include <iostream>
double calculate(double x, double y);
int main()
{
    double x, y;
    do {
        std::cout << "请输入第一个数（输入0结束）：\n";
        std::cin >> x;
        if (x == 0) break;
        
        std::cout << "请输入第二个数（输入0结束）：\n";
        std::cin >> y;
        if (y == 0) break;
        
        double result = calculate(x, y);
        std::cout << "调和平均数: " << result << std::endl;
    } while (true);
    return 0;
}
double calculate(double x, double y)
{
    double average = 2 * x * y / (x + y);
    return average;
}