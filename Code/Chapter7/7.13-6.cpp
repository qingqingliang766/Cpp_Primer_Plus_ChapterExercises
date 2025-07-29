/*
6. 编写一个程序，使用下列函数：
-  Fill_array() ：接收  double  数组名和长度作为参数，
提示用户输入  double  值并存储到数组。若数组填满或输入非数字，停止输入，返回实际输入的数字个数。
-  Show_array() ：接收  double  数组名和长度作为参数，显示数组内容。
-  Reverse_array() ：接收  double  数组名和长度作为参数，反转数组内容。
程序流程：
1. 填充数组 → 显示数组；
2. 反转数组 → 显示数组；
3. 反转“除首尾元素外”的数组 → 显示数组；
4. 再次反转数组 → 显示数组（验证顺序变化）。*/
#include <iostream>
#include <array>
const int arsize = 10;
int Fill_array(std::array <double,arsize>& MyArray,int lenth);
void Show_array(std::array <double,arsize>& MyArray,int lenth);
std::array <double,arsize> Reverse_array(std::array <double,arsize>& MyArray,int lenth);
void Reverse_array(double* start, int length);//重载函数

int main()
{
    std::array <double,arsize> MyArray;
    int count = Fill_array(MyArray,arsize);
    std::cout << "原始数组: ";
    Show_array(MyArray,count);
    
    Reverse_array(MyArray,count);
    std::cout << "\n第一次反转后: ";
    Show_array(MyArray,count);
    
    if(count > 2) {
        // 反转除首尾元素外的部分
        Reverse_array(&MyArray[1], count - 2);
    }
    std::cout << "\n除首尾反转后: ";
    Show_array(MyArray,count);
    
    Reverse_array(MyArray,count);
    std::cout << "\n第二次反转后: ";
    Show_array(MyArray,count);
    
    return 0;
}

int Fill_array(std::array <double,arsize>& MyArray,int lenth)
{
    std::cout << "输入 double 值 (输入非数字结束): " << std::endl;
    int count = 0;
    while (count < lenth && std::cin >> MyArray[count]) {
        ++count;
    }
    // 清除输入错误状态
    if (!std::cin) {
        std::cin.clear();
        std::string dummy;
        std::cin >> dummy;
    }
    return count;
}

void Show_array(std::array <double,arsize>& MyArray,int lenth)
{
    for(int i = 0; i < lenth; i++) {
        std::cout << MyArray[i] << " ";
    }
    std::cout << std::endl; // 添加换行
}
std::array <double,arsize> Reverse_array(std::array <double,arsize>& MyArray,int lenth)
{
    for (int i = 0; i < lenth / 2; ++i) {
        std::swap(MyArray[i], MyArray[lenth - 1 - i]);
    }
    return MyArray; // Add missing return statement
}
// 添加重载函数用于反转数组部分元素
void Reverse_array(double* start, int length) {
    for (int i = 0; i < length / 2; ++i) {
        std::swap(start[i], start[length - 1 - i]);
    }
}