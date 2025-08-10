/*为复习题 5 描述的类提供方法定义，并编写一个小程序来演示所有的特性
5. 定义一个类来表示银行帐户。数据成员包括储户姓名、账号（使用字符串）和存款。成员函数执行如下操作：  
● 创建一个对象并将其初始化；  
● 显示储户姓名、账号和存款；  
● 存入参数指定的存款；  
● 取出参数指定的款项。  */
#include <iostream>
#include "bank.h"

Bank::Bank(const std::string& name, const std::string& account, double savings)
    : m_name(name),        //成员列表初始化
      m_account(account),  
      m_savings(savings)   
{}

void Bank::deposit(double savings)
{
    m_savings += savings;
}
void Bank::withdraw(double savings)
{
    m_savings -= savings;
}
void Bank::show() const
{
    using std::cout;
    cout << "银行名字为： " << m_name << std::endl;
    cout << "账号为： " << m_account << std::endl;
    cout << "存款为： " << m_savings << std::endl;
}