/*
3. 下面是一个结构声明：
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
a. 编写一个函数，按值传递  box  结构，并显示每个成员的值。
b. 编写一个函数，传递  box  结构的地址，并将  volume  成员设置为其他三维长度的乘积。
c. 编写一个使用这两个函数的简单程序。*/
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box myBox);
void calculate_volume(box* pd);
int main()
{
    box myBox{
        "ABC Company",
        10.5,
        5.2,
        7.8, 
        11
    };
    show(myBox);
    calculate_volume(&myBox);
    show(myBox);
    return 0;
}
void show(box myBox)
{
    std::cout << myBox.height << " " << myBox.length << " " << myBox.maker << " "
        << myBox.volume << " "<< myBox.width << std::endl;
}
void calculate_volume(box* pd)
{
    pd->volume = pd->height * pd->length * pd->width;
}