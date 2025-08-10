#ifndef _GOLF_H
#define _GOLF_H
const int Len = 40;
class Golf
{
private:
    char m_fullname[Len];
    int m_handicap;

public:
    // 非交互式高尔夫版本：
    // 函数将高尔夫结构体设置为提供的姓名、差点，使用传递给函数的参数值
    Golf(Golf & g, const char * fullname = "Ann Birdfree", int handicap = 24);
    Golf();
    // 交互式版本：
    // 函数请求用户输入姓名和差点，并将这些值设置为g的成员
    // 如果输入了姓名则返回1，如果姓名是空字符串则返回0
    int setgolf(Golf & g);

    // 函数将差点重置为新值
    void handicap(Golf & g, int handicap);

    // 函数显示高尔夫结构体的内容
    void showgolf(const Golf & g);
};
#endif
