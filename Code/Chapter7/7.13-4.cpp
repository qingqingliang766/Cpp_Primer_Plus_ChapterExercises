/*
4. 许多州的彩票发行机构都使用类似图 7.4 所示的简单彩票玩法的变体。
在这些玩法中，玩家从一组数字中选择一个（如 50 个数字）的号码（通常为 5 个）。
要赢得大奖，必须正确猜中所有号码；也可凭“第二奖规则”（如下 7-27 选择一个额外号码抽奖）。例如：
- 头奖规则：选中 5 个号码 的概率，与选中 4 个号码 + 额外号码 的概率相乘。
- 需计算：从 7 个号码中正确选 5 个的概率，与从 27 个号码中正确选 1 个的概率的乘积*/
#include <iostream>
long long factorial(int n);
long long combination(int n, int k);
int main()
{
    long long a;
    long long b;
    long long mul;
    long long total = combination(50,5) * combination(10,1);
    double prob;
    a = combination(7,5);
    b = combination(27,1);
    prob = (double)(a*b) / total;

    std::cout << "乘积为： " << mul << std::endl;
    return 0;
}
long long factorial(int n)
{
    if(n == 0)return 1;
    return n * factorial(n - 1);
}
long long combination(int n, int k)
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}

/*推荐选择动态乘积算法版本：
// 最终优化版本
long double combination(int n, int k) {
    if(k <0 || k >n) return 0.0L;
    k = k > n/2 ? n-k : k;  // 优化计算次数
    long double res = 1.0L;
    for(int i=1; i<=k; ++i)
        res = res * (n-k+i)/i;
    return res;
}

void calculate_probability() {
    long double favorable = combination(7,5) * combination(27,1);
    long double total = combination(50,5) * combination(10,1);
    cout << fixed << setprecision(15);
    cout << "中奖概率：\n1/" << total/favorable 
         << "\n约" << (1/(total/favorable))*100 << "%" << endl;
}
*/
