/*
编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
该程序使用下划线字符来指示输入位置。另外，使用一个  const  符号常量来表示转换因子。*/
#include <iostream>
using namespace std;

const int Foot2Inch = 12;

int main (void)
{
    int inch_input = 0;
    int inch_output = 0;
    int foot = 0;

    cout << "Please input your height in inch: ";
    cin >> inch_input;
    
    foot = inch_input / Foot2Inch;
    inch_output = inch_input % Foot2Inch;

    cout << "Your height in inch was: " << inch_input 
         << "; Your height in foot and inch was: " 
         << foot << " foot " << inch_output << " inch!" << endl;
}