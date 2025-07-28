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