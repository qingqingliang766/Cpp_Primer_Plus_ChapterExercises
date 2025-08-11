#include "sales.h"
#include <windows.h>
int main()
{
    using namespace SALES;
    SetConsoleOutputCP(65001); // 设置控制台编码为 UTF-8
    const int arr_size = 10;
    const double ar[arr_size] = {2.2,1.2,1.3,1.4,1.5};
    
    Sales s1(ar,arr_size);//非交互式
    s1.showSales();
    
    Sales s2;
    s2.showSales();

    return 0;
}