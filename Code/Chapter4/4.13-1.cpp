/*1. 编写一个 C++ 程序，如下述输出示例所示的那样请求并显示信息：
What is your first name? Betty Sue  
What is your last name? Yewe  
What letter grade do you deserve? B  
What is your age? 22  
Name: Yewe, Betty Sue  
Grade: C  
Age: 22  
注意：该程序应该接受的名字包含多个单词。
另外，程序将向下调整成绩，即向上调一个字母。假设用户请求 A、B 或 C，所以不必担心 D 和 F 之间的空档。*/
#include <iostream>
#include <string>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::getline;
    char FName[10];
    char LName[10];
    char Grade;
    int age;
    cout << "What is your first name ?" << endl;
    cin.getline(FName,10);
    cout << "What is your last name? " << endl;
    cin.getline(LName,10);
    cout << "What letter grade do you deserve? " << endl;
    cin >> Grade;
    cout << "What is your age? " << endl;
    cin >> age;
    cout << "Name: " << LName << ", " << FName << endl;
    cout << "Grade: " << (char)(Grade+1) << endl;
    cout << "Age:  " << age << endl;
    return 0;   
}