/*
编写程序：
- 让用户输入三次 40 码跑（或 40 米跑）的成绩；
- 显示成绩的次数和平均成绩；
- 使用  array  对象存储数据（若编译器不支持  array  类，则用数组）。
*/
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    array<double,3> arr;
    cout << "请输入第1次跑步成绩： " << endl;
    cin >> arr[0];
    cout << "请输入第2次跑步成绩： " << endl;
    cin >> arr[1];
    cout << "请输入第3次跑步成绩： " << endl;
    cin >> arr[2];
    cout << "成绩是：" << endl;
    for (int i=0;i<3;i++) cout << arr[i] << endl;
    double sum = arr[0] + arr[1] + arr[2];
    double average = sum / 3.0;
    cout << "\n共记录了 " << arr.size() << " 次成绩" << endl;
    cout << "平均成绩是：" << average << endl;
    return 0 ;
}