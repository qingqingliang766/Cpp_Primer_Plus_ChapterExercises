/*
3. 编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用 char 数组和头文件 cstring 中的函数。下面是该程序运行时的情形：
 
Enter your first name: Flip  
Enter your last name: Fleming  
Here's the information in a single string: Fleming, Flip  */
#include <iostream>
#include <string>
int main()
{   
    using std::getline;
    using std::cout;
    using std::cin;
    char firstname[5];
    char lastname[5];
    cout << "Enter your first name: " << std::endl;
    cin.getline(firstname,5);
    cin.getline(lastname,5);
    cout << "Here's the information in a single string:" << firstname << "," 
        << lastname << std::endl;
    return 0;
}