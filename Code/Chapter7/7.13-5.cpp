/*
5. 定义一个 递归函数，接受一个整型参数，并返回该数的阶乘。规则：
- 3 的阶乘写作  3! = 3 * 2 * 1 ；
- 0 的阶乘定义为  1 ；
- 通用公式：若  n > 0 ，则  n! = n * (n-1)! 。
程序中需测试该函数，通过递归让用户输入不同值，报告对应阶乘。*/
#include <iostream>
long double factorial(int n);
int main()
{
    int n;
    std::cout << "请输入想要求解的阶乘： " << std::endl;
    std::cin >> n;
    std::cout << n << "! = " << factorial(n) << std::endl;
    return 0;
}
long double factorial(int n)
{
    if (n <= 0)
        return 1;
    return n * factorial(n - 1);
}