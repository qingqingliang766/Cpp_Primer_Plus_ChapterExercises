/*5. 在 Neutronia 王国，货币单位是 tvarp，收入所得税的计算方式：
5000 tvarp：不收税
5001～15000 tvarp：10%
15001～35000 tvarp：15%
35000 tvarp 以上：20%
例如，收入为 38000 tvarp 时，所得税为 5000×0.00 + 10000×0.10 + 20000×0.15 + 3000×0.20，即 4600 tvarp。
请编写一个程序，使用循环来要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环结束。*/
#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter your income in tvarps (negative number to quit): ";
    
    while (cin >> income) {
        if (income < 0) break;
        
        double tax = 0.0;
        if (income > 35000) {
            tax += (income - 35000) * 0.20;
            income = 35000;
        }
        if (income > 15000) {
            tax += (income - 15000) * 0.15;
            income = 15000;
        }
        if (income > 5000) {
            tax += (income - 5000) * 0.10;
            // 5000以下部分不征税
        }
        cout << "Your tax is " << tax << " tvarps.\n";
        cout << "Enter next income (negative number to quit): ";
    }
    
    cout << "Program terminated.\n";
    return 0;
}