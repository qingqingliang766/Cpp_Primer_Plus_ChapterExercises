/*
1. 下面是一个头文件：
// golf.h -- 用于pe9-1.cpp

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

注意到setgolf被重载，可以这样使用其第一个版本：  
golf ann;  
setgolf(ann, "Ann Birdfree", 24);  
上述函数调用提供了存储在ann结构中的信息。可以这样使用其第二个版本：  
golf andy;  
setgolf(andy);  
上述函数将提示用户输入姓名和等级，并将它们存储在andy结构中。
这个函数可以（但是不一定必须）在内部使用第一个版本。  

根据这个头文件，创建一个多文件程序。其中的一个文件名为golf.cpp，
它提供了与头文件中的原型匹配的函数定义；另一个文件应包含main()，
并演示原型化函数的所有特性。例如，包含一个让用户输入的循环，
并使用输入的数据来填充一个由golf结构组成的数组，
数组被填满或用户将高尔夫选手的姓名设置为空字符串时，
循环将结束。main()函数只使用头文件中原型化的函数访问golf结构。  */