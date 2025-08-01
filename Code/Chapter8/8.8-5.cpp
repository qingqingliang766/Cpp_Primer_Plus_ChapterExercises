/*
5. 编写模板函数maxn()，它将一个包含5个T类型元素的数组作为参数，并返回数组中最大的元素
(由于长度固定，因此可以在循环中使用硬编码，而不必通过参数来传递)。在一个程序中使用该函数，将
T替换为一个包含5个int值的数组和一个包含5个double值的数组，以测试该函数。*/
#include <iostream>
template <typename T>
T maxn(T* arr);
int main()
{
    double max;
    int int_arr[5] = {1,2,3,4,5};
    double double_arr[5] = {1.1,2.2,3.3,4.4,5.5};
    max = maxn(int_arr);
    std::cout << max << std::endl;
    max = maxn(double_arr);
    std::cout << max << std::endl;
    return 0;                                           
}
template <typename T>
T maxn(T* arr)
{
    T Maxnumber = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > Maxnumber)
        Maxnumber = arr[i];
    };
    return Maxnumber;
    
}