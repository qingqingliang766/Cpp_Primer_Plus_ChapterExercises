//编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
//Enter your age:20
#include <iostream>

int main()
{
    int age;
    int mouth;
    std::cout << "请输入你的年龄：" << std::endl;
    std::cin >> age;
    mouth = age * 12;
    std::cout << mouth << std::endl;
    return 0;
}