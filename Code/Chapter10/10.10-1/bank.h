/*为复习题 5 描述的类提供方法定义，并编写一个小程序来演示所有的特性
5. 定义一个类来表示银行帐户。数据成员包括储户姓名、账号（使用字符串）和存款。成员函数执行如下操作：  
● 创建一个对象并将其初始化；  
● 显示储户姓名、账号和存款；  
● 存入参数指定的存款；  
● 取出参数指定的款项。  */
#ifndef _BANK_H
#define _BANK_H
#include <string>
class Bank
{
private:
    std::string m_name;
    std::string m_account;
    double m_savings;
public:
    Bank(const std::string& m_name = "onname", const std::string& m_account = "abc", 
        double m_savings = 0.0);
    void deposit(double m_savings);
    void withdraw(double m_savings);
    void show() const;
};

#endif