/*
10. 设计  calculate()  函数：
- 参数：两个  double  值、一个指向函数的指针（该函数需接收两个  double  参数，返回  double ）。
- 返回值： double ，即“被指向的函数”用  calculate()  的两个  double  参数计算的结果。
 
示例：假设  add()  定义如下：
double add(double x, double y)
{
    return x + y;
}
 
则以下调用会让  calculate()  把  2.5  和  10.4  传给  add() ，返回  12.9 ：
double q = calculate(2.5, 10.4, add);
 
编程要求：
- 编写程序，调用  calculate() 、 add() ，以及至少一个类似  add()  的函数（如  subtract 、 multiply  等）。
- 用循环让用户成对输入数字，对每对数字，调用  calculate()  测试所有函数。
- （进阶）创建 函数指针数组（如  double (*pf[3])(double, double); ），用初始化语法填入函数地址，循环调用  calculate()  测试数组内的函数。
 
提示：
// 函数指针数组示例（可初始化）：  
double (*pf[3])(double, double);  
// 可通过函数名（地址）初始化，如：  
pf[0] = add;  
pf[1] = subtract; */