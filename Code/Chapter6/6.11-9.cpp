/*
9. 完成编程练习 6，但从文件中读取所需的信息。该文件的第一项应为捐款人数，余下的内容应为成对的行。
在每一对中，第一行为捐款人姓名，第二行为捐款数额。即该文件类似于下面：
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000*/
/*第六题题目：
6. 编写一个程序，记录捐助给“维护合法权利团体”的资金。该程序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和款项。
这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员：用来储存姓名的字符数组（或 string 对象）和用来存储款项的 double 成员。
读取所有的数据后，程序将显示所有捐款超过 10000 的捐款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款者是重要捐款人（Grand Patrons）。
然后，程序将列出其他的捐款者，该列表要以 Patrons 开头。如果某种类别没有捐款者，则程序将打印单词“none”。该程序只显示这两种类别，而不进行排序。*/
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct donor
{
    string name;
    double money = 0.0;
};

int main()
{
    int numDonors = 0;
    ifstream infile;
    infile.open("donations.txt");
    if (!infile.is_open())
    {
        cerr << "未正常打开文档： ";
        return 1;
    }
    infile >> numDonors;
    infile.ignore();
    donor* donors = new donor[numDonors];
    for (int i=0;i<numDonors;i++)
    {
        getline(infile,donors[i].name);
        infile >> donors[i].money;
        infile.ignore();
    }
    // 分类并显示捐款人信息
    cout << "Grand Patrons:\n";
    bool hasGrand = false;
    for (int i = 0; i < numDonors; ++i) {
        if (donors[i].money >= 10000) {
            cout << donors[i].name << "\t" << donors[i].money << endl;
            hasGrand = true;
        }
    }
    if (!hasGrand)
        cout << "none\n";

    cout << "\nPatrons:\n";
    bool hasPatron = false;
    for (int i = 0; i < numDonors; ++i) {
        if (donors[i].money < 10000 && donors[i].money > 0) {
            cout << donors[i].name << endl;
            hasPatron = true;
        }
    }
    if (!hasPatron)
        cout << "none\n";

    delete[] donors;
    return 0;
    
}