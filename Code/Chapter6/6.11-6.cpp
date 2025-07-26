/*
6. 编写一个程序，记录捐助给“维护合法权利团体”的资金。该程序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和款项。
这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员：用来储存姓名的字符数组（或 string 对象）和用来存储款项的 double 成员。
读取所有的数据后，程序将显示所有捐款超过 10000 的捐款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款者是重要捐款人（Grand Patrons）。
然后，程序将列出其他的捐款者，该列表要以 Patrons 开头。如果某种类别没有捐款者，则程序将打印单词“none”。该程序只显示这两种类别，而不进行排序。*/
#include <iostream>
using namespace std;
const int ARsize = 20;
struct NP
{
    char name[ARsize];
    double money;
};

int main()
{
    int q = 0;
    int number;
    cout << "请输入捐献者数目： " << endl;
    cin >> number;
    NP* PI = new NP[number];
    cout << "OK,现在请输入每一个捐献者的姓名和款项： " << endl;
    for(int i=0;i<number;i++)
    {
            cout << "现在录入第" << i+1 << " 个人的姓名:" << endl;
            cin >> PI[i].name;
            cout << "现在录入第" << i+1 << " 个人的款项:" << endl;
            cin >> PI[i].money;
    }
    // 显示重要捐款人（Grand Patrons）
    cout << "\nGrand Patrons:\n";
    for(int i=0; i<number; i++)
    {
        if(PI[i].money >= 10000)
        {
            cout << PI[i].name << "  " << PI[i].money << endl;
            q++;
        }
    }
    if(q == 0)
        cout << "none\n";

    // 显示普通捐款人（Patrons）
    cout << "\nPatrons:\n";
    int p = 0;
    for(int i=0; i<number; i++)
    {
        if(PI[i].money < 10000)
        {
            cout << PI[i].name << "  " << PI[i].money << endl;
            p++;
        }
    }
    if(p == 0)
        cout << "none\n";
    delete[] PI;
    return 0;
}