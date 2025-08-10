/*为复习题 5 描述的类提供方法定义，并编写一个小程序来演示所有的特性
5. 定义一个类来表示银行帐户。数据成员包括储户姓名、账号（使用字符串）和存款。成员函数执行如下操作：  
● 创建一个对象并将其初始化；  
● 显示储户姓名、账号和存款；  
● 存入参数指定的存款；  
● 取出参数指定的款项。  */
#include <iostream>
#include "bank.h"
#include <windows.h>
int main()
{
    SetConsoleOutputCP(65001); // 设置控制台编码为 UTF-8
    Bank bank = {"cat", "1234", 0};
    bank.deposit(100);
    bank.withdraw(50);
    bank.show();
    return 0;
}