/*
设计一个名为  car  的结构，用它存储下述有关汽车的信息：
 
- 生产商（存储在字符数组或  string  对象中的字符串）；
- 生产年份（整数）。
 
编写一个程序：
 
1. 向用户询问有多少辆汽车；
2. 随后，程序使用  new  来创建一个由相应数量的  car  结构组成的动态数组；
3. 接下来，程序提示用户输入每辆车的生产商（可能由多个单词组成）和年份信息
（请注意，这需要特别小心，因为它将交替读取数值和字符串，参见第 4 章）；
4. 最后，程序将显示每个结构的内容。
 
该程序的运行情况如下（示例）：
 
How many cars do you wish to catalog? 2  
Car #1:  
Please enter the make: Hudson Hornet  
Please enter the year made: 1952  
Car #2:  
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser  */
#include <iostream>
using namespace std;
struct car
{
    int year;
    char name[10];
};

int main()
{
    int number;
    cout << "有多少辆汽车：" << endl;
    cin >> number;
    car* cars = new car[number];
    int i = 1;
    while(true)
    {
        if (i > number)
        break;
        cout << "输入第" << i << "辆车的生产商： " << endl;
        cin.ignore();
        cin.getline(cars[i-1].name,10);
        cout << "输入第" << i << "辆车的年份信息： " << endl;
        cin >> cars[i-1].year;
        i++;
    }
    cout << "Here is your collection:" << endl;
    for(int i=0;i<number;i++)
    {
        cout << cars[i].year << "   " << cars[i].name << endl; 
    }
    return 0 ;

}