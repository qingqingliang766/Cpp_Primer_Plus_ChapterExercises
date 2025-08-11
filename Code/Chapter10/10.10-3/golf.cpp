#include "golf.h"
#include <iostream>
#include <cstring>
Golf::Golf()
    :m_handicap(0)
{
    m_fullname[0] = '\0';
}
void Golf::showgolf() const
{
    std::cout << "姓名：" << std::endl;
    std::cout << m_fullname << std::endl;
    std::cout << "差点：" << std::endl;
    std::cout << m_handicap << std::endl;
}
int Golf::setgolf()
{
    char tempname[Len];
    int temphandiacp = 0;
    using std::cout,std::cin;
    while (true)
    {
        cout << "请输入名字：（输入回车退出）\n";
        cin.getline(tempname,Len);
        if (tempname[0] == '\0')
            return 0;
        else 
            break;
    }
    cout << "请输入差点：\n";
    while (!(cin >> temphandiacp))
    {
        cin.clear();
        cin.ignore(1024);
        cout << "请输入有效数字： \n";
        continue;
    }
    cin.ignore();
    *this = Golf(tempname, temphandiacp);
    return 1;
}
void Golf::handicap(int handicap)
{
    m_handicap = handicap;
}