/*
考虑下面的结构声明：

struct customer {
char fullname[35];
double payment;
};
编写一个程序，它从栈中添加和删除 customer 结构（栈用 Stack 类声明表示）。
每次 customer 结构被删除时，其 payment 的值都被加入到总数中，并报告总数。
注意：应该可以直接使用 Stack 类而不作修改；只需修改 typedef 声明，
使 Item 的类型为 customer，而不是 unsigned long 即可。*/