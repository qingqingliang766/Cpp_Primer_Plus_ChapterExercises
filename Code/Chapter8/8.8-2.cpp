/*2. CandyBar 结构包含 3 个成员。第一个成员存储 candy bar 的品牌名称；
第二个成员存储 candy bar 的重量（可能有小数）；
第三个成员存储 candy bar 的热量（整数）。
请编写一个程序，它使用一个这样的结构，即 CandyBar 类型的、char 指针、double 和 int 作为参数，
并使用最后 3 个值设置相应的结构成员。最后 3 个参数的默认值分别为“Millennium Munch”、2.85 和 350。
另外，该程序还应包含一个以 CandyBar 的引用为参数，并显示结构内容的函数。请尽可能使用 const
*/
#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand;
    double weight;
    int heat;
};
void setCandyBar(CandyBar* cb, const char* brand = "Millennium Munch", const double weight = 2.85, const int heat = 350);
void show(const CandyBar& CB);
int main()
{
    CandyBar cb;
    setCandyBar(&cb);
    show(cb);
    setCandyBar(&cb,"AAA",111.1,111);
    show(cb);
    setCandyBar(&cb,"BBB",222.2,222);
    show(cb);
    return 0;
}
void setCandyBar(CandyBar* cb, const char* brand, const double weight, const int heat)
{
    cb->brand = brand;
    cb->weight = weight;
    cb->heat = heat;
}
void show(const CandyBar& CB)
{
    std::cout << CB.brand << std::endl;
    std::cout << CB.weight << std::endl;
    std::cout << CB.heat << std::endl;
}