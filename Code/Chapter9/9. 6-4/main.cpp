#include <iostream>
#include "sales.h"
#include <windows.h>
using namespace SALES;
Sales sal1;
Sales sal2;
int main()
{
    SetConsoleOutputCP(65001); // 设置控制台编码为 UTF-8
    const int arr_size = 10;
    double ar[arr_size] = {1.1,1.2,1.3,1.4,1.5};
    setSales(sal2);//交互式
    showSales(sal2);

    setSales(sal1,ar,4);//非交互式
    showSales(sal1);
    return 0;
}