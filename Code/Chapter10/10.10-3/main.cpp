#include "golf.h"
#include <iostream>
#include <Windows.h>
int main()
{
    const int MAX_GOLFERS = 10;
    SetConsoleOutputCP(65001);
    Golf g1("Ann Birdfree", 24);
    std::cout << "测试非交互式构造:\n";
    g1.showgolf();
    int count = 0;
    count++;

    //交互式:
    Golf g2[MAX_GOLFERS];
    while (count < MAX_GOLFERS)
    {
        std::cout << "请输入第" << count << "位的信息： \n";
        if(g2[count].setgolf())
            count++;
        else
            break;
    }
    for (int i = 1; i < count; i++)
    {
        std::cout << "第" << i+1 << "位的信息为： " << std::endl;
        g2[i].showgolf();
    }
    
    return 0;
}