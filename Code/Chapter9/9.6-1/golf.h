#ifndef GOLF_H_
#define GOLF_H_
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
// 非交互式高尔夫版本：
// 函数将高尔夫结构体设置为提供的姓名、差点，使用传递给函数的参数值
void setgolf(golf & g, const char * name, int hc);

// 交互式版本：
// 函数请求用户输入姓名和差点，并将这些值设置为g的成员
// 如果输入了姓名则返回1，如果姓名是空字符串则返回0
int setgolf(golf & g);

// 函数将差点重置为新值
void handicap(golf & g, int hc);

// 函数显示高尔夫结构体的内容
void showgolf(const golf & g);

#endif
