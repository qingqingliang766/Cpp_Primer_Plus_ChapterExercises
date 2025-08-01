/*请提供其中描述的函数和原型，从而完成该程序。
注意，应有两个 show() 函数，每个都使用默认参数。
请尽可能使用 const 参数。set() 使用 new 分配足够的空间来存储指定的字符串。
这里使用的技术与设计和实现类时使用的相似。（可能还必须修改头文件的名称，
删除 using 编译指令，这取决于所用的编译器。）*/
#include <iostream>
using namespace std;
#include <cstring>      // 用于 strlen()、strcpy() 函数
struct stringy {
    char * str;        // 指向一个字符串
    int ct;            // 字符串的长度（不计算结束符 '\0'）
};

// 在此处放置 set()、show() 和 show() 的函数原型 
void set(stringy& beany, const char* testing);
void show(const stringy& beany, int n = 1);
void show(const char* testing, int n = 1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);   // 第一个参数是引用，
                           // 分配空间存储 testing 的副本，
                           // 将 beany 的 str 成员指向新内存块，
                           // 把 testing 复制到新块，
                           // 并设置 beany 的 ct 成员 
    show(beany);        // 打印成员字符串一次 
    show(beany, 2);     // 打印成员字符串两次 
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);      // 打印 testing 字符串一次 
    show(testing, 3);   // 打印 testing 字符串三次 
    show("Done!");      // 打印 "Done!" 字符串一次 
    delete[] beany.str;
    return 0;
}
void set(stringy& beany, const char* testing)
{
    beany.ct = strlen(testing);
    beany.str = new char[beany.ct + 1];
    strcpy(beany.str,testing);
}
void show(const stringy& beany, int n)
{
    for (int i = 0; i < n; i++)
    cout << "打印成员字符串" << i+1 << "次 ："  << endl << beany.str << endl;
}
void show(const char* testing, int n)
{
    for (int i = 0; i < n; i++)
    cout << "打印testing字符串" << i+1 << "次 ：" << endl << testing << endl;
}