/*
1. 编写通常接受一个参数（字符串的地址），并打印该字符串的函数。
然而，如果提供了第二个参数（int 类型），且该参数不为 0，
则该函数打印字符串的次数将为该函数被调用的次数
（注意，字符串的打印次数不等于第二个参数的值，而等于函数被调用的次数）。
是的，这是一个非常可笑的函数，
但让它完整地使用本部分的技术特点。在一个简单的程序中使用该函数，
以演示该函数是如何工作的。*/
#include <iostream>
void show(char* words,int T = 0);
int main()
{
    char words[10] = "你好！" ;
    show(words,2);
    show(words,3);
    show(words,4);
    return 0;
}
void show(char* words,int T)
{   
    static int times = 0;
    times++;
    if (0 == T)std::cout << words << std::endl;
    else
    {
        for (int i =0; i < times; i++)
        std::cout << words << std::endl;
    }
}