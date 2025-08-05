/*3. 下面是一个结构声明：  
struct chaff  
{  
    char dross[20];  
    int slag;  
};  
编写一个程序，使用定位new运算符将一个包含两个这种结构的数组放在一个缓冲区中。
然后，给结构的成员赋值（对于char数组，使用函数strcpy()），
并使用一个循环来显示内容。一种方法是像程序清单9.10那样将一个静态数组用作缓冲区；
另一种方法是使用常规new运算符来分配缓冲区。*/
#include <iostream>
#include <cstring>
#include <new>
using namespace std;
char arr[50];//外部变量是在静态区开辟的，常规new是在堆里面开辟的
struct chaff  
{  
    char dross[20];  
    int slag;  
};
void set(chaff* cha);
void show(chaff* cha);  
int main()
{
    int arr_size = 2;
    chaff *p1;
    p1 = new (arr)chaff[arr_size];//定位new
    set(p1);
    show(p1);
    return 0;
}
void set(chaff* cha)
{
    strcpy(cha[0].dross,"scum");
    cha[0].slag = 1;
    strcpy(cha[1].dross,"dregs");
    cha[1].slag = 2;
}
void show(chaff* cha)
{
    for (int i = 0; i < 2 ; i++)
    {
        cout << cha[i].dross << endl;
        cout << cha[i].slag << endl;
    }
}