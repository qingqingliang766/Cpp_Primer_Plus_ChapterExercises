/*
10. 编写一个使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行。
然后，程序将显示对应行数的星号，其中第一行包括一个星号，第二行包括两个星号，依此类推。
每一行包含的字符数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。该程序的运行情况如下：
Enter number of rows: 5
....*
...**
..***
.*****/
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "输入一个值，指出要显示多少行：" << endl;
    cin >> row;
    for(int i=0;i<row;i++)
    {
        for(int j = 0; j < row - i - 1; j++) {
            cout << ".";
        }
        for(int k = 0; k < i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}