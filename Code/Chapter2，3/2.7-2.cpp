//编写一个c++程序，要求用户输入一个以long为单位的距离，然后把它转换为码（一long等于220码）。
#include <iostream>

int main()
{   
    long distance;//距离
    long yard; //码
    std::cout << "请输入一个以long为单位的距离" << std::endl;
    std::cin >> distance;
    yard = distance *= 220;
    std::cout << "转为码： " << yard << std::endl;
    return 0;
}
