/*
7. 修改程序清单 7.7，改用指针参数表示区间：
-  fill_array()  不再返回“实际读取的数字个数”，而是返回 指向最后填充位置的指针；
- 其他函数以该指针作为第二个参数，标识数据结尾。*/
#include <iostream>
#include <array>
const int arsize = 20;
double* Fill_array(std::array <double,arsize>& MyArray,int length);
void Show_array(std::array <double,arsize>& MyArray,double* end);
void Reverse_array(std::array <double,arsize>& MyArray,double* end);
void Reverse_array(double* start, int length);
int main()
{
    std::array <double,arsize> MyArray;
    double* end = Fill_array(MyArray,arsize);
    std::cout << "原始数组: ";
    int length = end - MyArray.data();//返回首地址data成员函数！
    Show_array(MyArray,end);
    Reverse_array(MyArray,end);
    std::cout << "\n第一次反转后: ";
    Show_array(MyArray,end);
    
    if(length > 2) {
        // 反转除首尾元素外的部分
        Reverse_array(&MyArray[1], length - 2);
    }
    std::cout << "\n除首尾反转后: ";
    Show_array(MyArray,end);
    
    Reverse_array(MyArray,end);
    std::cout << "\n第二次反转后: ";
    Show_array(MyArray,end);
    
    return 0;
}

double* Fill_array(std::array <double,arsize>& MyArray,int arsize)
{
    std::cout << "输入 double 值 (输入非数字结束): " << std::endl;
    int count = 0;
    while (count < arsize && std::cin >> MyArray[count]) 
        count++;
    // 清除输入错误状态
    if (!std::cin) {
        std::cin.clear();
        std::string dummy;
        std::cin >> dummy;
    }
    return &MyArray[count];
}

void Show_array(std::array <double,arsize>& MyArray,double* end)
{
    int length = end - MyArray.data();//返回首地址data成员函数！
    for(int i = 0; i < length; i++) {
        std::cout << MyArray[i] << " ";
    }
    std::cout << std::endl; // 添加换行
}
void Reverse_array(std::array <double,arsize>& MyArray,double* end)
{
    int length = end - MyArray.data();//返回首地址data成员函数！
    for (int i = 0; i < length / 2; ++i) 
    {
        std::swap(MyArray[i], MyArray[length - 1 - i]);
    }
}

// 添加重载函数用于反转数组部分元素
void Reverse_array(double* start, int length) 
{
    for (int i = 0; i < length / 2; ++i) {
        std::swap(start[i], start[length - 1 - i]);
    }
}