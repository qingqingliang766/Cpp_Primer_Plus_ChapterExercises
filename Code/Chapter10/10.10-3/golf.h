#ifndef _GOLF_H
#define _GOLF_H
#include <cstring>
const int Len = 40;
class Golf
{
private:
    char m_fullname[Len];
    int m_handicap;

public:
    // 非交互式高尔夫版本：
    // 函数将高尔夫结构体设置为提供的姓名、差点，使用传递给函数的参数值
    Golf(const char * fullname, int handicap){strcpy(m_fullname,fullname),m_handicap = handicap;};
    Golf();
    // 交互式版本：
    // 函数请求用户输入姓名和差点，并将这些值设置为g的成员
    // 如果输入了姓名则返回1，如果姓名是空字符串则返回0
    int setgolf();

    // 函数将差点重置为新值
    void handicap(int handicap);

    // 函数显示高尔夫结构体的内容
    void showgolf() const;
};
#endif
