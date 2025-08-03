#include <iostream>
#include "golf.h"
#include <cstring>
// 非交互式高尔夫版本：
// 函数将高尔夫结构体设置为提供的姓名、差点，使用传递给函数的参数值
void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap = hc;
}

// 交互式版本：
// 函数请求用户输入姓名和差点，并将这些值设置为g的成员
// 如果输入了姓名则返回1，如果姓名是空字符串则返回0
int setgolf(golf & g)
{
    g.handicap = 0;
    std::cout << "请输入姓名： \n";
    std::cin.getline(g.fullname,Len);
    // 如果用户直接按回车（空字符串）
    if (g.fullname[0] == '\0')
        return 0;
    std::cout << "请输入差点： \n";
    std::cin >> g.handicap;
    std::cin.ignore();//清除cin的换行符
    return 1;

}

// 函数将差点重置为新值
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

// 函数显示高尔夫结构体的内容
void showgolf(const golf & g)
{
    std::cout << "姓名：" << std::endl;
    std::cout << g.fullname << std::endl;
    std::cout << "差点：" << std::endl;
    std::cout << g.handicap << std::endl;
}