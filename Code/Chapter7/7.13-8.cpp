/*
8. 不使用  array  类，实现程序清单 7.15 的功能，编写两个版本：
a. 用  const char*  数组存储季度名称，用  double  数组存储开支。
b. 用  struct  包裹  double  数组（存储开支）和  const char*  数组（存储季度名称）。
//arrobj.cpp -- functions with array objects 7.15清单
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
    {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> * pa);
void show(std::array<double, Seasons> da);
int main()
{
    std::array<double, 4> expenses;
    fill(&expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(std::array<double, Seasons> * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}
*/
// #include <iostream>
// #include <string>
// const int Seasons = 4;
// const char* Snames[Seasons] ={"Spring", "Summer", "Fall", "Winter"};
// void fill(double * pa);
// void show(double * da);
// int main()
// {
//     double expenses[4];
//     fill(expenses);
//     show(expenses);
//     // std::cin.get();
//     return 0;
// }
// void fill(double * pa)
// {
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << "Enter " << Snames[i] << " expenses: ";
//         std::cin >> pa[i];
//     }
// }
// void show(double * da)
// {
//     double total = 0.0;
//     std::cout << "\nEXPENSES\n";
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << Snames[i] << ": $" << da[i] << '\n';
//         total += da[i];
//     }
//     std::cout << "Total: $" << total << '\n';
// }

//b方案：
#include <iostream>
#include <string>
const int Seasons = 4;
struct season
{
    const char* Snames[Seasons] ={"Spring", "Summer", "Fall", "Winter"};
    double expenses[4];
};
void fill(season& son);
void show(season& son);
int main()
{
    season son;
    fill(son);
    show(son);
    // std::cin.get();
    return 0;
}
void fill(season& son)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << son.Snames[i] << " expenses: ";
        std::cin >> son.expenses[i];
    }
}
void show(season& son)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << son.Snames[i] << ": $" << son.expenses[i] << '\n';
        total += son.expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
