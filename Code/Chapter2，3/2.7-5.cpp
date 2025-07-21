/*
    编写一个程序，其中mian()调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。该程序
    按下面的格式要求用户输入摄氏温度值，并显示结果：
    请输入一个摄氏温度值：20
    20摄氏温度等于68华氏温度。
    转换公式：
    华氏温度 = 1.8 * 摄氏温度 + 32.0
*/
#include <iostream>

int main()
{
    double temperature;
    double change_temperature;//改变之后的温度
    std::cout << "请输入一个摄氏温度值：" << std::endl;
    std::cin >> temperature;
    change_temperature = 1.8 * temperature + 32.0;
    std::cout << temperature << "摄氏温度等于" << change_temperature << "华氏温度" << std::endl;
    return 0 ; 
}