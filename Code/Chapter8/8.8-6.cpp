/*
6. 编写模板函数maxn()，它将由一个T类型元素组成的数组和一个表示数组元素数目的整数作为参
数，并返回数组中最大的元素。
在程序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个double元素的数组来调用该函数。
程序还包含一个具体化，它将char指针数组和数组中的指针数量
作为参数，并返回最长的字符串的地址。如果有多个这样的字符串，则返回其中第一个字符串的地址。使
用由5个字符串指针组成的数组来测试该具体化。*/
#include <iostream>
#include <cstring>
template <typename T>
T maxn(T* arr,int number);
template <> const char* maxn (const char** c_arr, int n);
int main()
{
    const int int_arr_size = 6;
    const int double_arr_size = 4;
    const int string_arr_size = 5;
    int int_arr[int_arr_size] = {1,2,3,4,5,6};
    double double_arr[double_arr_size] = {1.1,1.2,1.3,1.4};
    const char* string_arr[string_arr_size] = {"one","two","three","four","five"};
    int max_in;
    double max_dn;
    const char* max_sn;
    max_in = maxn(int_arr,int_arr_size);
    std::cout << max_in << std::endl;
    max_dn = maxn(double_arr,double_arr_size);
    std::cout << max_dn << std::endl;
    max_sn = maxn(string_arr,string_arr_size);
    std::cout << max_sn << std::endl;
    return 0;
}
template <typename T>
T maxn(T* arr,int number)
{
    T Maxnumber = arr[0];
    for (int i = 1; i < number; i++)
    {
        if (arr[i] > Maxnumber)
        Maxnumber = arr[i];
    }
    return Maxnumber;
}
template <> const char* maxn (const char** c_arr, int n)
{
    int maxn = strlen(c_arr[0]);
    const char* maxs = c_arr[0];
    for (int i = 1; i < n; i++)
    {
        if (strlen(c_arr[i]) > maxn)
        {
            maxn = strlen(c_arr[i]);
            maxs = c_arr[i];
        }  
    }
    return maxs;
}