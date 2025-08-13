#ifndef PLORG_H_
#define PLORG_H_
#include <cstring> 
class Plorg
{
private:
    static const int arr_size = 20;
    char name[arr_size];
    int CI;
public:
    Plorg() : CI(50) {strcpy(name,"Plorga");};//新的 plorg 将有名称，其 CI 值为 50；
    /*
    为什么必须用 strcpy 而不能直接赋值？
    数组名是常量指针：name 是一个固定地址，不能指向其他位置。
    字符串字面量是只读的："Plorga" 存储在程序的常量区，不能直接“赋值”给可修改的数组。
    拷贝是唯一安全的方式：必须将字符逐个复制到目标数组。*/

    void setCI(int ci);//plorg 的 CI 可以修改；

    void ShowPlorg() const;//plorg 可以报告其名称和 CI；

    ~Plorg();
};
#endif