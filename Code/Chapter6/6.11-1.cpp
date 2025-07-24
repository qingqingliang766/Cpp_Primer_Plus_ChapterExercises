/*
1. 编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），
同时将大写字符转换为小写，将小写字符转换为大写（别忘了cctype函数系列）*/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cout << "请输入一个字母：" << endl;
    while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
            continue; 
        else if (islower(ch))
            cout << (char)toupper(ch) << endl;
        else if (isupper(ch))
            cout << (char)tolower(ch)<< endl;
    }
    cout << "Done!" << endl;
    return 0;
}

/* 程序知识点总结：
1. cin.get() 用法：
   - 从输入流读取单个字符，返回值为流对象
   - 字符通过引用参数或赋值方式获取：cin.get(ch) 或 ch = cin.get()

2. cctype 函数库应用：
   - isdigit(ch): 判断是否为数字字符
   - islower(ch)/isupper(ch): 判断大小写字母
   - toupper(ch)/tolower(ch): 转换字母大小写
   - 注意：需用 static_cast<unsigned char> 确保参数安全

3. 循环终止条件：
   - while ((ch = cin.get()) != '@'): 读取到@符号时终止
   - 先执行赋值操作，再判断条件

4. 类型转换：
   - static_cast<char>(toupper(ch)): 安全的类型转换
   - 避免使用 C 风格强制转换 (char)toupper(ch)
*/
