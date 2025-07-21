/*
使用  array  对象（而不是数组）和  long double （而不是  long long ）
重新编写程序清单 5.4，并计算 100! 的值。*/
// formore.cpp -- more looping with for    5.4清单：


// #include <iostream>
// const int ArSize = 16;      // example of external declaration
// int main()
// {
//     long long factorials[ArSize];
//     factorials[1] = factorials[0] = 1LL;
//     for (int i = 2; i < ArSize; i++)
//         factorials[i] = i * factorials[i-1];
//     for (int i = 0; i < ArSize; i++)
//         std::cout << i << "! = " << factorials[i] << std::endl;
// 	std::cin.get();
//     return 0;
// }

#include <iostream>
#include <array>
std::array<long double,101> factorials;
int main()
{
    factorials[0] = factorials[1] = 1L;
    for(int i=2;i<=100;i++)
    {
        factorials [i] = i * factorials[i-1];
    }
    for(int i=0;i<=100;i++)
    {std::cout << i << "!: " << factorials[i] << std::endl;}
    std::cin.get();
    return 0;
}