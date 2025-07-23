/*
Daphne 以 10% 的单利投资了 100 美元。也就是说，每一年的利润都是投资额的 10%，即每年 10 美元：
    利息 = 0.10 * 原始存款
而 Cleo 以 5% 的复利投资了 100 美元。也就是说，利息是当前存款（包括获得的利息）的 5%：
    利息 = 0.05 * 当前存款
Cleo 在第一年投资 100 美元的盈利是 5%——得到了 105 美元。
下一年的盈利是 105 美元的 5%——即 5.25 美元，依此类推。
请编写一个程序，计算多少年后，Cleo 的投资价值才能超过 Daphne 的投资价值，并显示此时两个人的投资价值。*/
#include <iostream>
using namespace std;
int main()
{
    double DaphneMoney = 100.0;
    double CleoMoney = 100.0;
    int year = 0;
    while (CleoMoney <= DaphneMoney)
    {
        // 计算单利利息（每年固定10美元）
        DaphneMoney += 0.10 * 100;
        
        // 计算复利利息（当前金额的5%）
        CleoMoney += 0.05 * CleoMoney;
        
        year++;
    }
    
    // 输出结果
    cout << "经过" << year << "年后，Cleo的投资价值超过Daphne。" << endl;
    cout << "此时Daphne的投资价值: " << DaphneMoney << "美元" << endl;
    cout << "此时Cleo的投资价值: " << CleoMoney << "美元" << endl;
    return 0;
    
}